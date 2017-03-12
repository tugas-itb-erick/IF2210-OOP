/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Road.cpp             */

#include <iostream>
#include "Road.h"
using namespace std;

/***** ROAD *****/
Road::Road()
{}

Road::Road(const Road&)
{}

Road::~Road()
{}

Road& Road::operator=(const Road&)
{}

void Road::render()
{
  cout << "-";
}

Road* Road::clone() const {
  return new Road(*this);
}
