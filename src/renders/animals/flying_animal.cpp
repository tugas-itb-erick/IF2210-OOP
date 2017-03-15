/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include <string>
#include "flying_animal.h"
using namespace std;

FlyingAnimal::FlyingAnimal(){
}

FlyingAnimal::FlyingAnimal(string _name, double _weight, Sex _s, int _r, int _c, char _id, Color _color, bool _w): Animal(_name,  _weight, _s,  _r, _c, _id,_color, _w){
}

FlyingAnimal::FlyingAnimal(const FlyingAnimal& F) : Animal(F) {
}
FlyingAnimal::~FlyingAnimal(){
}
FlyingAnimal& FlyingAnimal::operator=(const FlyingAnimal& F){
	Animal::operator=(F);
	return *this;
}
