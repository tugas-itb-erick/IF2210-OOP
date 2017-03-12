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
	meatRatio = C.meatRatio;
	vegRatio = C.meat;
}

Omnivore& Omnivore::operator= (const Omnivore& H)
{
	meatRatio = C.meatRatio;
	vegRatio = C.meat;
	return *this;
}
