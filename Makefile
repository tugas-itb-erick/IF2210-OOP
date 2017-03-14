.PHONY: all
all:
	g++ -g Main.cpp Driver.cpp diet/*.cpp renders/*.cpp renders/animals/*.cpp renders/facilities/*.cpp renders/habitats/*.cpp taxonomy/*.cpp zoo/*.cpp other/Color.cpp -o Main -std=c++11
