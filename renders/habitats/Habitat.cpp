/* NIM/Nama  : 13515AAA / AAA       */
/* File      : Habitat.cpp              */

#include "Habitat.h"

using namespace std;

Habitat::Habitat()
{
}

Habitat::Habitat(char _id, Color _color) : Renderable(_id,_color)
{
}

Habitat::Habitat(const Habitat& H) : Renderable (H)
{
}

Habitat::~Habitat()
{
}

Habitat& Habitat::operator=(const Habitat& H)
{
	Renderable::operator=(H);
	return *this;
}
