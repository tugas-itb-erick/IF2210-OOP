/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Road.cpp             */

#include <iostream>
#include "Road.h"
using namespace std;

/***** ROAD *****/
Road::Road() : Facility('-', WHITE)
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

Road* Road::clone() const {
  return new Road(*this);
}
