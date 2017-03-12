/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Exit.cpp             */

#include <iostream>
#include "Exit.h"
using namespace std;

/***** EXIT *****/
Exit::Exit() : Road('o', WHITE)
{}

Exit::Exit(const Exit& E) : Facility(E)
{}

Exit::~Exit()
{}

Exit& Exit::operator=(const Exit& E)
{
  Facility::operator=(E);
  return *this;
}

char Exit::render()
{
	return id;
}

Color Exit::getColor()
{
	return color;
}

Exit* Exit::clone() const {
  return new Exit(*this);
}
