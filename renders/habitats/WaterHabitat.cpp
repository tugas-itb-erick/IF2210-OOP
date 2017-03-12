/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "WaterHabitat.h"

using namespace std;

WaterHabitat::WaterHabitat() : id('#'), color(WHITE)
{
}
WaterHabitat::WaterHabitat(const WaterHabitat&) : id('#'), color(WHITE)
{
}
WaterHabitat::~WaterHabitat()
{
}
WaterHabitat& WaterHabitat::operator=(const WaterHabitat&)
{
}
WaterHabitat* WaterHabitat::clone() const
{
	return new WaterHabitat(*this);
}
