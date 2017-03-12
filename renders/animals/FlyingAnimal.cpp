#include "FlyingAnimal.h"

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