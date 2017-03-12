/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Exit.cpp             */

#include <iostream>
#include "Exit.h"
using namespace std;

/***** EXIT *****/
Exit::Exit()  : id('o'), color(WHITE)
{}

Exit::Exit(const Exit&)  : id('o'), color(WHITE)
{}

Exit::~Exit()
{}

Exit& Exit::operator=(const Exit&)
{}

Exit* Exit::clone() const {
  return new Exit(*this);
}
