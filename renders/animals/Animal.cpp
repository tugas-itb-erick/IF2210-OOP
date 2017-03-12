/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(){

}

Animal::Animal(string _name, double _weight, Sex _s, int _r, int _c,char _id, Color _color) : Renderable(_id,_color) {
	name=_name;
	weight=_weight;
	s=_s;
	row=_r;
	col=_c;
}

Animal::Animal(const Animal& A) : Renderable(A) {
	name=A.name;
	weight=A.weight;
	s=A.s;
	row=A.row;
	col=A.col;
}

Animal::~Animal(){
}

Animal& Animal::operator=(const Animal& A){
	Renderable::operator=(A);
	name=A.name;
	weight=A.weight;
	s=A.s;
	row=A.row;
	col=A.col;
	return *this;
}

int Animal::getRow(){
	return row;
}

int Animal::getCol(){
	return col;
}

double Animal::getWeight(){
	return weight;
}

string Animal::getName(){
	return name;
}

Sex Animal::getSex(){
	return s;
}

int Animal::setRow(int r){
	row = r;
}

int Animal::setCol(int c){
	col = c;
}

double Animal::setWeight(double w){
	weight = w;
}

string Animal::setName(string n){
	name = n;
}

Sex Animal::setSex(Sex ns){
	s = ns;
}
