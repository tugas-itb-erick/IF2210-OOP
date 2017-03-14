#include <iostream>
#include <string>
#include "FlyingAnimal.h"
using namespace std;

FlyingAnimal::FlyingAnimal(){
}

FlyingAnimal::FlyingAnimal(string _name, double _weight, Sex _s, int _r, int _c, char _id, Color _color): Animal(_name,  _weight, _s,  _r, _c, _id,_color){
}

FlyingAnimal::FlyingAnimal(const FlyingAnimal& F) : Animal(F) {
}
FlyingAnimal::~FlyingAnimal(){
}
FlyingAnimal& FlyingAnimal::operator=(const FlyingAnimal& F){
	Animal::operator=(F);
	return *this;
}
