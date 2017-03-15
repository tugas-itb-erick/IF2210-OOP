/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "AirHabitat.h"

using namespace std;

AirHabitat::AirHabitat() : Habitat('A', WHITE)
{
}
AirHabitat::AirHabitat(const AirHabitat& A) : Habitat(A)
{
}
AirHabitat::~AirHabitat()
{
}
AirHabitat& AirHabitat::operator=(const AirHabitat& A)
{
	Habitat::operator=(A);
	return *this;
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
