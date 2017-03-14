#include <iostream>
#include <string>
#include "LandAnimal.h"
using namespace std;

LandAnimal::LandAnimal(){cout << "land" <<endl;}

LandAnimal::LandAnimal(std::string _name, double _weight, Sex _s, int _r, int _c, char _id, Color _color)
	: Animal(_name,  _weight, _s,  _r, _c, _id,_color){

}

LandAnimal::LandAnimal(const LandAnimal& L) : Animal(L){
}
LandAnimal::~LandAnimal(){
}
LandAnimal& LandAnimal::operator=(const LandAnimal& L){
	Animal::operator=(L);
	return *this;
}
