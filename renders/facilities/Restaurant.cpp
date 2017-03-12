/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Restaurant.cpp       */

#include <iostream>
#include "Restaurant.h"
using namespace std;

/***** RESTAURANT *****/
Restaurant::Restaurant() : id('R'), color(WHITE)
{}

Restaurant::Restaurant(const Restaurant&) : id('R'), color(WHITE)
{}

Restaurant::~Restaurant()
{}

Restaurant& Restaurant::operator=(const Restaurant&)
{}

Restaurant* Restaurant::clone() const {
  return new Restaurant(*this);
}
