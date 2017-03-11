/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Diet.cpp                    */

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
