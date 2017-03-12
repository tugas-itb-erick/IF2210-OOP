/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(){
	name=" ";
	weight=0;
	s=male;
}

Animal::Animal(string _name, double _weight, Sex _s){
	name=_name;
	weight=_weight;
	s=_s;
}

Animal::Animal(const Animal& A){
	name=A.name;
	weight=A.weight;
	s=A.s;
}

Animal::~Animal(){
}

Animal& Animal::operator=(const Animal& A){
	name=A.name;
	weight=A.weight;
	s=A.s;
	return *this;
}

LandAnimal::LandAnimal(){
}
LandAnimal::LandAnimal(const Animal&){
}
LandAnimal::~LandAnimal(){
}
LandAnimal& LandAnimal::operator=(const LandAnimal&){
}

WaterAnimal::WaterAnimal(){
}
WaterAnimal::WaterAnimal(const Animal&){
}
WaterAnimal::~WaterAnimal(){
}
WaterAnimal& WaterAnimal::operator=(const WaterAnimal&){
}

FlyingAnimal::FlyingAnimal(){
}
FlyingAnimal::FlyingAnimal(const Animal&){
}
FlyingAnimal::~FlyingAnimal(){
}
FlyingAnimal& FlyingAnimal::operator=(const FlyingAnimal&){
}
