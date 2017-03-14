/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Carnivore.cpp               */

#include "Carnivore.h"

Carnivore::Carnivore()
{
	meatRatio = 0.5;
}

Carnivore::Carnivore(const Carnivore& C)
{
	meatRatio = C.meatRatio;
}

Carnivore& Carnivore::operator= (const Carnivore& C)
{
	meatRatio = C.meatRatio;
	return *this;
}

double Carnivore::getMeatRatio() const{
	return meatRatio;
}

double Carnivore::getVegRatio() const{
	return vegRatio;
}
