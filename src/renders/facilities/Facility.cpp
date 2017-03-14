/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Facility.cpp         */

#include <iostream>
#include "Facility.h"
using namespace std;

/***** FACILITY *****/
Facility::Facility()
{}

Facility::Facility(char _id, Color _color) : Cell(_id, _color)
{}

Facility::Facility(const Facility& F) : Cell(F)
{}

Facility::~Facility()
{}

Facility& Facility::operator=(const Facility& F)
{
  Cell::operator=(F);
  return *this;
}
