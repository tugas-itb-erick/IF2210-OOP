/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "WaterHabitat.h"

using namespace std;

WaterHabitat::WaterHabitat() : Habitat('#', WHITE)
{
}
WaterHabitat::WaterHabitat(const WaterHabitat& W) : Habitat(W.id, W.color)
{
}
WaterHabitat::~WaterHabitat()
{
}
WaterHabitat& WaterHabitat::operator=(const WaterHabitat& W)
{
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
