/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Restaurant.cpp       */

#include <iostream>
#include "restaurant.h"
using namespace std;

/***** RESTAURANT *****/
Restaurant::Restaurant() : Facility('R', WHITE)
{}

Restaurant::Restaurant(const Restaurant& R) : Facility(R)
{}

Restaurant::~Restaurant()
{}

Restaurant& Restaurant::operator=(const Restaurant& R)
{
  Facility::operator=(R);
  return *this;
}

char Restaurant::render()
{
	return id;
}

Color Restaurant::getColor()
{
	return color;
}

Restaurant* Restaurant::clone() const {
  return new Restaurant(*this);
}
