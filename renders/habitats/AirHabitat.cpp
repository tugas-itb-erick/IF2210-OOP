/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "AirHabitat.h"

using namespace std;

AirHabitat::AirHabitat() : Habitat('O', WHITE)
{
}
AirHabitat::AirHabitat(const AirHabitat& A) : Habitat(A.id, A.color)
{
}
AirHabitat::~AirHabitat()
{
}
AirHabitat& AirHabitat::operator=(const AirHabitat& A)
{
}
char AirHabitat::render()
{
	return id;
}
Color AirHabitat::getColor()
{
	return color;
}
AirHabitat* AirHabitat::clone() const
{
	return new AirHabitat(*this);
}
