/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Park.cpp             */

#include <iostream>
#include "Park.h"
using namespace std;

/***** PARK *****/
Park::Park()  : id('*'), color(WHITE)
{}

Park::Park(const Park&)  : id('*'), color(WHITE)
{}

Park::~Park()
{}

Park& Park::operator=(const Park&)
{}

char render() const
{
	return id;
}

Park* Park::clone() const {
  return new Park(*this);
}
