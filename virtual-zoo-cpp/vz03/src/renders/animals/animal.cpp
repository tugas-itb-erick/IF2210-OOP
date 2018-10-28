/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

Animal::Animal(){
	name="unnamed";
	weight=0;
	s=female;
	row=0;
	col=0;
	wild = false;
}

Animal::Animal(std::string _name, double _weight, Sex _s, int _r, int _c,char _id, Color _color, bool _w)
	: Renderable(_id,_color) {
	name=_name;
	weight=_weight;
	s=_s;
	row=_r;
	col=_c;
	wild = _w;
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

int Animal::getRow() const{
  return row;
}

int Animal::getCol() const{
  return col;
}

double Animal::getWeight() const{
  return weight;
}

string Animal::getName() const{
  return name;
}

Sex Animal::getSex() const{
  return s;
}

bool Animal::getWild() const{
	return wild;
}

void Animal::setRow(int r){
  row = r;
}

void Animal::setCol(int c){
  col = c;
}

void Animal::setWeight(double w){
  weight = w;
}

void Animal::setName(string n){
  name = n;
}

void Animal::setSex(Sex ns){
  s = ns;
}
