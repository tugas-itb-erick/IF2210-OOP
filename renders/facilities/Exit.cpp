/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Exit.cpp             */

#include <iostream>
#include "Exit.h"
using namespace std;

/***** EXIT *****/
Exit::Exit() : Facility('o', WHITE)
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

Exit* Exit::clone() const {
  return new Exit(*this);
}
