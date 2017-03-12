/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "AirHabitat.h"

using namespace std;

AirHabitat::AirHabitat() : id('O'), color(WHITE)
{
}
AirHabitat::AirHabitat(const AirHabitat&) : id('O'), color(WHITE)
{
}
AirHabitat::~AirHabitat()
{
}
AirHabitat& AirHabitat::operator=(const AirHabitat&)
{
}
AirHabitat* AirHabitat::clone() const
{
	return new AirHabitat(*this);
}
