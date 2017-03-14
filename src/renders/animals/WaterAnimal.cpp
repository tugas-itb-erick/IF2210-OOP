/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include <string>
#include "WaterAnimal.h"
using namespace std;

WaterAnimal::WaterAnimal(){}

WaterAnimal::WaterAnimal(std::string _name, double _weight, Sex _s, int _r, int _c, char _id, Color _color, bool _w): Animal(_name,  _weight, _s,  _r, _c, _id,_color, _w){
}

WaterAnimal::WaterAnimal(const WaterAnimal& W) : Animal(W) {
}
WaterAnimal::~WaterAnimal(){
}
WaterAnimal& WaterAnimal::operator=(const WaterAnimal& W){
	Animal::operator=(W);
	return *this;
}
