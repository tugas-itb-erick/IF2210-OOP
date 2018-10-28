/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.cpp                */

#include "../other/other.h"
#include "../animal/animal.h"
#include "cage.h"
#include <iostream>
using namespace std;


	Cage::Cage()
	{
		size = 0;
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2 ; indeks++)
		{
			c[indeks]=0;
		}
	}
	
	Cage::Cage(int _size)
	{
		size = _size;
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2; indeks++)
		{
			c[indeks]=0;
		}
	}
	
	Cage::Cage(const Cage& C)
	{
		size = C.size;
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2; indeks++)
		{
			c[indeks]=C.c[indeks];
		}	
	}
	
	Cage::~Cage()
	{
		delete [] a;
		delete [] c;
	}
	
	Cage& Cage::operator=(const Cage& C)
	{
		if(this!=&C)
		{delete [] a;
		delete [] c;}
		size = C.size;
		c = new int [size*2];
		a = new Animal [size];
		for (int indeks = 0; indeks < size*2; indeks++)
		{
			c[indeks]=C.c[indeks];
		}	
		for (int indeks = 0; indeks < size ; indeks++)
		{
			a[indeks] = C.a[indeks];
		}
		return *this;
	}

	void Cage::setValue(int i, int v)
	{
		c[i] = v;
	}

int Cage::getValue(int i)
	{
		return c[i];
	}
	
int Cage::getSize()
{
	return size;
}

void Cage::setSize(int _size)
{
	size = _size;
}
void Cage::setAnimal(Animal v)
{
	int i = 0;
	bool done = false;
	while (i < size && !done)
	{
		if (a[i].getId() == '?')
		{
			a[i] = v;
			done = true;
		}
		i++;
	}
}
Animal Cage::getAnimal(int i)
{
	return a[i];
}
bool Cage::isFull()	
{
	int count = 0;
	for (int i=0; i<size; i++)
	{
		if (a[i].getSpecies() != NONE)
			count++;
	}
	return (count > 0.3*size);
}

bool Cage::Search(int m, int n)
{
	int i = 0;
	bool found = false;
	while (i < size*2 && !found)
	{
		if (c[i] == m && c[i+1] == n)
		{
			found = true;
		}
		else
		{
			i += 2;
		}
	}
	return found;
}

double Cage::ConsumedMeat()
{
	double sum = 0;
	for (int i=0; i<size; i++)
	{
		sum += a[i].ConsumedMeat();
	}
	return sum;
}
double Cage::ConsumedVeg()
{
	double sum = 0;
	for (int i=0; i<size; i++)
	{
		sum += a[i].ConsumedVeg();
	}
	return sum;
}

Animal Cage::GetCellAnimal(int m, int n)
//Jika suatu sel tidak punya animal, sebenarnya ada animal dengan spesies=NONE
{
	int i=0;
	bool found=false;
	while (i<size && !found)
	{
		if ((a[i].getM() == m) && (a[i].getN() ==n))
		{
			found = true;
		}
		else
		{
			i++;
		}
	}
	return a[i];
}

void Cage::PrintInteract()
{
	for (int i=0; i<size; i++)
	{
		a[i].interact();
	}
}
