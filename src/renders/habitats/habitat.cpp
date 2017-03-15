/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "habitat.h"

using namespace std;

Habitat::Habitat() : Cell()
{
}

Habitat::Habitat(char _id, Color _color) : Cell(_id,_color)
{
}

Habitat::Habitat(const Habitat& H) : Cell (H)
{
}

Habitat::~Habitat()
{
}

Habitat& Habitat::operator=(const Habitat& H)
{
	Cell::operator=(H);
	return *this;
}
