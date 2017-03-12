/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Road.cpp             */

#include <iostream>
#include "Road.h"
using namespace std;

/***** ROAD *****/
Road::Road()  : id('-'), color(WHITE)
{}

Road::Road(const Road&)  : id('-'), color(WHITE)
{}

Road::~Road()
{}

Road& Road::operator=(const Road&)
{}

Road* Road::clone() const {
  return new Road(*this);
}
