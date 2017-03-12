/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Herbivore.cpp               */

#include "Herbivore.h"

Herbivore::Herbivore()
{
	vegRatio = 0.3;
}

Herbivore::Herbivore(const Herbivore& H)
{
	vegRatio = H.vegRatio;
}

Herbivore& Herbivore::operator= (const Herbivore& H)
{
	vegRatio = H.vegRatio;
	return *this;
}

double Herbivore::getMeatRatio() const{
	return meatRatio;
}

double Herbivore::getVegRatio() const{
	return vegRatio;
}
