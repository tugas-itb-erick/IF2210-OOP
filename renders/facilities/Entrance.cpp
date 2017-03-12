/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Entrance.cpp         */

#include <iostream>
#include "Entrance.h"
using namespace std;

/***** ENTRANCE *****/
Entrance::Entrance()  : id('i'), color(WHITE)
{}

Entrance::Entrance(const Entrance&)  : id('i'), color(WHITE)
{}

Entrance::~Entrance()
{}

Entrance& Entrance::operator=(const Entrance&)
{}

Entrance* Entrance::clone() const {
  return new Entrance(*this);
}
