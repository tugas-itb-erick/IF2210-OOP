/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Herbivore.cpp               */

#include "Herbivore.h"

Herbivore::Herbivore() : meatRatio(0)
{
	vegRatio = 0.3;
}

Herbivore::Herbivore(const Herbivore& H) : meatRatio(C.meatRatio)
{
	vegRatio = C.meat;
}

Herbivore& Herbivore::operator= (const Herbivore& H)
{
	meatRatio = 0;
	vegRatio = 0.3;
	return *this;
}
