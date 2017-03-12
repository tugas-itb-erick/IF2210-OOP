/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Exit.cpp             */

#include <iostream>
#include "Exit.h"
using namespace std;

/***** EXIT *****/
Exit::Exit()
{}

Exit::Exit(const Exit&)
{}

Exit::~Exit()
{}

Exit& Exit::operator=(const Exit&)
{}

void Exit::render()
{
  cout << "o";
}

Exit* Exit::clone() const {
  return new Exit(*this);
}
