/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include <string>
#include "land_animal.h"
using namespace std;

LandAnimal::LandAnimal(){}

LandAnimal::LandAnimal(std::string _name, double _weight, Sex _s, int _r, int _c, char _id, Color _color, bool _w)
	: Animal(_name,  _weight, _s,  _r, _c, _id,_color, _w){

}

LandAnimal::LandAnimal(const LandAnimal& L) : Animal(L){
}
LandAnimal::~LandAnimal(){
}
LandAnimal& LandAnimal::operator=(const LandAnimal& L){
	Animal::operator=(L);
	return *this;
}
