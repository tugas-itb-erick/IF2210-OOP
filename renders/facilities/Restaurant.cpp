/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Restaurant.cpp       */

#include <iostream>
#include "Restaurant.h"
using namespace std;

/***** RESTAURANT *****/
Restaurant::Restaurant()
{}

Restaurant::Restaurant(const Restaurant&)
{}

Restaurant::~Restaurant()
{}

Restaurant& Restaurant::operator=(const Restaurant&)
{}

void Restaurant::render()
{
  cout << "R";
}

Restaurant* Restaurant::clone() const {
  return new Restaurant(*this);
}
