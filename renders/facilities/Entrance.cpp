/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Entrance.cpp         */

#include <iostream>
#include "Entrance.h"
using namespace std;

/***** ENTRANCE *****/
Entrance::Entrance() : Facility('i', WHITE)
{}

Entrance::Entrance(const Entrance& E) Facility(E)
{}

Entrance::~Entrance()
{}

Entrance& Entrance::operator=(const Entrance& E)
{
  Facility::operator=(E);
  return *this;
}

Entrance* Entrance::clone() const {
  return new Entrance(*this);
}
