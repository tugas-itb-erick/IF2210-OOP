/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "land_habitat.h"

using namespace std;

LandHabitat::LandHabitat() : Habitat('L', WHITE)
{
}
LandHabitat::LandHabitat(const LandHabitat& L) : Habitat(L)
{
}
LandHabitat::~LandHabitat()
{
}
LandHabitat& LandHabitat::operator=(const LandHabitat& L)
{
	Habitat::operator=(L);
	return *this;
}
LandHabitat* LandHabitat::clone() const
{
	return new LandHabitat(*this);
}
char LandHabitat::render()
{
	return id;
}
Color LandHabitat::getColor()
{
	return color;
}
