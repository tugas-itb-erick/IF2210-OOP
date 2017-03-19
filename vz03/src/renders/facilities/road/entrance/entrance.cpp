/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Entrance.cpp         */

#include <iostream>
#include "entrance.h"
using namespace std;

/***** ENTRANCE *****/
Entrance::Entrance() : Road('i', WHITE)
{}

Entrance::Entrance(const Entrance& E) : Road(E)
{}

Entrance::~Entrance()
{}

Entrance& Entrance::operator=(const Entrance& E)
{
  Facility::operator=(E);
  return *this;
}

char Entrance::render()
{
	return id;
}

Color Entrance::getColor()
{
	return color;
}

Entrance* Entrance::clone() const {
  return new Entrance(*this);
}
