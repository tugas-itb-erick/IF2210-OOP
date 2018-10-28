#!/bin/bash

function cleanup # cleanup old data
{
	touch files.txt # make sure files.txt exists
	rm files.txt # delete file
}

function list # list all source files and in current directory
{
	is_c_header=$(find src -type f -name '*.h') # find all .h files in src folder
	is_c=$(find src -type f -name '*.c') # find all .c files in src folder
	is_cpp=$(find src -type f -name '*.cpp') # find all .cpp files in src folder
	
	all=""
	
	if [[ -n $is_c_header ]]
	then
		if [[ $first == true ]]
		then
			first=false 
		else
			all+="\n"
		fi
		
		all+="$is_c_header"
	fi
	
	if [[ -n $is_c ]]
	then
		if [[ $first == true ]]
		then
			first=false 
		else
			all+="\n"
		fi
	
		all+="$is_c"
	fi
	
	if [[ -n $is_cpp ]]
	then
		if [[ $first == true ]]
		then
			first=false 
		else
			all+="\n"
		fi
	
		all+="$is_cpp"
	fi
	
	printf "$all" | sort > files.txt # sort and print to files.txt
}

function resolve # resolve relative path errors
{
	file_data=$(cat files.txt) # get all file path

	for file in $file_data # for every file
	do
		all_match=$(cat $file | grep -o -P '#include *".+"') # get #include "<headers>"
		headers=$(printf "$all_match" | grep -o -P '(?<=")[^"]+') # get headers path only

		for header in $headers # for every dependencies
		do
			extension=$(printf "$header" | grep -o -P '\.[^\.]+$') # extract header extension
			headername=$(basename $header $extension) # extract headername only
			dependency=$headername$extension # complete header name

			updatedpath=$(printf "$file_data" | grep -P "(?<=/)$dependency$") # search in updated path list
			headerpath=$(printf "$updatedpath" | grep -o -P ".+(?=$dependency)") # get header path

			file_extension=$(printf "$file" | grep -o -P '\.[^\.]+$') # extract file extension
			filename=$(basename $file $file_extension) # extract filename only
			filepath=$(printf "$file" | grep -o -P ".+(?=(?<=/)$filename$file_extension)") # get file path

			filefolders=$(printf "$filepath" | grep -o -P '[^/]+') # get folders needed to go from working directory to file
			headerfolders=$(printf "$headerpath" | grep -o -P '[^/]+') # get folders needed to go from working directory to header

			file_dir_count=0
			header_dir_count=0

			for folders in $filefolders
			do
				if [[ $folders != '.' ]]
				then
					(( file_dir_count++ ))
				fi
			done

			for folders in $headerfolders
			do
				if [[ $folders != '.' ]]
				then
					(( header_dir_count++ ))
				fi
			done

			# search for minimum number of folders
			if [[ $file_dir_count -le $header_dir_count ]]
			then
				min=$file_dir_count
			else
				min=$header_dir_count
			fi

			cnt=0 # counter

			# create array
			for folder in $filefolders
			do
				if [[ $folder != '.' ]]
				then
					(( cnt ++ ))
					filearray[$cnt]=$folder
				fi
			done

			cnt=0 # reset counter

			for folder in $headerfolders
			do
				if [[ $folder != '.' ]]
				then
					(( cnt ++ ))
					headerarray[$cnt]=$folder
				fi
			done
			
			countback=0 # initialize as zero
			
			# compare common paths
			if [[ $min -ge 1 ]] # prevent backward countback
			then
				for cnt in $(seq 1 $min) # seq = print a sequence of numbers
				do
					filefolder=${filearray[cnt]} # use ${array name[index]} for arrays
					headerfolder=${headerarray[cnt]} # use ${array name[index]} for arrays

					if [[ $filefolder == $headerfolder ]] # if they have common paths
					then
						continue # remove common paths
					else
						countback=$(( file_dir_count-cnt+1 )) # how many parent folders
						break
					fi
				done
			fi

			# if they share common paths = minimum folders
			if [[ $countback -eq 0 ]]
			then
				countback=$(( file_dir_count-min )) # how many parent folders

				if [[ $min -ne 0 ]] # if they don't share common paths at all, don't increment cnt
				then
					((cnt++))
				fi
			fi

			parentpath= # initialize as empty string
			extrapath= # initialize as empty string

			if [[ $countback -ge 1 ]] # prevent count towards zero
			then
				for i in $(seq 1 $countback) # seq = print a sequence of numbers
				do
					parentpath+='../' # create parent path
				done
			fi

			if [[ $min -eq 0 ]] # if they don't share common paths at all
			then
				currentpaths=$(printf "$headerpath" | grep -o -P '[^/]+') # get path folders
				
				for paths in $currentpaths
				do
					if [[ $paths != '.' ]] # if path is not current directory (.)
					then
						extrapath+="$paths/" # add to extrapath
					fi
				done
			else
				if [[ $header_dir_count -ge $cnt ]] # prevent count towards zero
				then
					for i in $(seq $cnt $header_dir_count) # seq = print a sequence of numbers
					do
						extrapath+=${headerarray[i]} # create path to header, array use ${}
						extrapath+='/'
					done
				fi
			fi

			newpath="$parentpath$extrapath$dependency" # set new path

			sed -i -e "s@#include *\"$header\"@#include \"$newpath\"@" $file # edit file

			# Perl syntax = perl -pi 's/search/replace/flag' or "s/search/replace/flag" file1 file2 ...
			# use -e in terminal only
			# s = search and replace, search may use regex, backreferences = $1, flag : g = global (replace all occurrences)

			# sed syntax = sed -i -e s@search@replace@flag
			# flag -g = global
		done
	done
}

# Main program

# Variables
rootdir=$(pwd)
first=true

if [[ $# -gt 0 ]] # $# = number of arguments passed, -gt = greater than
then
	printf "Program does not take any argument.\n"
else
	if [[ -d src ]] # if src exists and is a directory
	then
		cleanup # prevent data duplicate

		printf "Locating source files ...\n"
		list # list all files in current directory
		printf "Writing source files location to \"files.txt\" ...\n"
	
		printf "Resolving dependency paths ...\n"
		resolve # resolve all relative path error
	else
		printf "Cannot find \"src\" folder. Please put your source files in \"src\" folder.\n"
	fi
fi
