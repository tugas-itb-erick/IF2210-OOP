/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Road.cpp             */

#include <iostream>
#include "road.h"
using namespace std;

/***** ROAD *****/
Road::Road() : Facility('-', WHITE)
{}

Road::Road(char _id, Color _color) : Facility(_id, _color)
{}

Road::Road(const Road& R) : Facility(R)
{}

Road::~Road()
{}

Road& Road::operator=(const Road& R)
{
  Facility::operator=(R);
  return *this;
}

char Road::render()
{
	return id;
}

Color Road::getColor()
{
	return color;
}

Road* Road::clone() const {
  return new Road(*this);
}
