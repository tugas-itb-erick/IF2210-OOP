/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Omnivore.cpp                */

#include "Omnivore.h"

Omnivore::Omnivore()
{
	meatRatio = 0.3;
	vegRatio = 0.3;
}

Omnivore::Omnivore(const Omnivore& O)
{
	meatRatio = O.meatRatio;
	vegRatio = O.vegRatio;
}

Omnivore& Omnivore::operator= (const Omnivore& O)
{
	meatRatio = O.meatRatio;
	vegRatio = O.vegRatio;
	return *this;
}

double Omnivore::getMeatRatio() const{
	return meatRatio;
}

double Omnivore::getVegRatio() const{
	return vegRatio;
}
