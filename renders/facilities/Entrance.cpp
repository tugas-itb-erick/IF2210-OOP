/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Entrance.cpp         */

#include <iostream>
#include "Entrance.h"
using namespace std;

/***** ENTRANCE *****/
Entrance::Entrance()
{}

Entrance::Entrance(const Entrance&)
{}

Entrance::~Entrance()
{}

Entrance& Entrance::operator=(const Entrance&)
{}

void Entrance::render()
{
  cout << "i";
}

Entrance* Entrance::clone() const {
  return new Entrance(*this);
}
