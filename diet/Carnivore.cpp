/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Carnivore.cpp               */

#include "Carnivore.h"

Carnivore::Carnivore() : vegRatio(0)
{
	meatRatio = 0.5;
}

Carnivore::Carnivore(const Carnivore& C) : vegRatio(C.meat)
{
	meatRatio = C.meatRatio;
}

Carnivore& Carnivore::operator= (const Carnivore& C)
{
	meatRatio = C.meatRatio;
	vegRatio = C.meat;
	return *this;
}
