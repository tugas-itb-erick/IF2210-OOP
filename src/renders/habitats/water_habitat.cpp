/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "water_habitat.h"

using namespace std;

WaterHabitat::WaterHabitat() : Habitat('W', WHITE)
{
}
WaterHabitat::WaterHabitat(const WaterHabitat& W) : Habitat(W)
{
}
WaterHabitat::~WaterHabitat()
{
}
WaterHabitat& WaterHabitat::operator=(const WaterHabitat& W)
{
	Habitat::operator=(W);
	return *this;
}
char WaterHabitat::render()
{
	return id;
}
Color WaterHabitat::getColor()
{
	return color;
}
WaterHabitat* WaterHabitat::clone() const
{
	return new WaterHabitat(*this);
}
