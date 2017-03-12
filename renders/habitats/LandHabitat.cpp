/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "LandHabitat.h"

using namespace std;

LandHabitat::LandHabitat() : id('X'), color(WHITE)
{
}
LandHabitat::LandHabitat(const LandHabitat&) : id('X'), color(WHITE)
{
}
LandHabitat::~LandHabitat()
{
}
LandHabitat& LandHabitat::operator=(const LandHabitat&)
{
}
LandHabitat* LandHabitat::clone() const
{
	return new LandHabitat(*this);
}
