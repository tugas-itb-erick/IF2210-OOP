#include <iostream>
#include <string>
#include "WaterAnimal.h"
using namespace std;

WaterAnimal::WaterAnimal(string _name, double _weight, Sex _s, int _r, int _c, char _id, Color _color): Animal(_name,  _weight, _s,  _r, _c, _id,_color){
}

WaterAnimal::WaterAnimal(const WaterAnimal& W) : Animal(W) {
}
WaterAnimal::~WaterAnimal(){
}
WaterAnimal& WaterAnimal::operator=(const WaterAnimal& W){
	Animal::operator=(W);
	return *this;
}
