/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Park.cpp             */

#include <iostream>
#include "Park.h"
using namespace std;

/***** PARK *****/
Park::Park()
{}

Park::Park(const Park&)
{}

Park::~Park()
{}

Park& Park::operator=(const Park&)
{}

void Park::render()
{
  cout << "*";
}

Park* Park::clone() const {
  return new Park(*this);
}
