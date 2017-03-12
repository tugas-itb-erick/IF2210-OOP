/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(){
	name=" ";
	weight=0;
	s=male;
	row=-1;
	col=-1;
}

Animal::Animal(string _name, double _weight, Sex _s, int _r, int _c){
	name=_name;
	weight=_weight;
	s=_s;
	row=r;
	col=c;
}

Animal::Animal(const Animal& A){
	name=A.name;
	weight=A.weight;
	s=A.s;
	row=A.row;
	col=A.col;
}

Animal::~Animal(){
}

Animal& Animal::operator=(const Animal& A){
	name=A.name;
	weight=A.weight;
	s=A.s;
	row=A.row;
	col=A.col;
	return *this;
}
