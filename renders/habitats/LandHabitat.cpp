/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "LandHabitat.h"

using namespace std;

LandHabitat::LandHabitat() : Habitat('X', WHITE)
{
}
LandHabitat::LandHabitat(const LandHabitat& L) : Habitat(L.id, L.color)
{
}
LandHabitat::~LandHabitat()
{
}
LandHabitat& LandHabitat::operator=(const LandHabitat& L)
{
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
