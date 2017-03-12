/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Park.cpp             */

#include <iostream>
#include "Park.h"
using namespace std;

/***** PARK *****/
Park::Park() : Facility('*', WHITE)
{}

Park::Park(const Park& P) : Facility(P)
{}

Park::~Park()
{}

Park& Park::operator=(const Park& P)
{
	Facility::operator=(P);
  return *this;
}

char render() const
{
	return id;
}

Park* Park::clone() const {
  return new Park(*this);
}
