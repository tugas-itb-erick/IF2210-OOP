.PHONY: all
all:
	g++ -g Driver.cpp diet/*.cpp renders/*.cpp renders/animals/*.cpp renders/facilities/*.cpp renders/habitats/*.cpp taxonomy/*.cpp zoo/*.cpp other/Color.cpp -o driver -std=c++11
