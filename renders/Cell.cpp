/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cell.cpp                  */

#pragma once
#include "Cell.h"
	
	Cell::Cell()
	{
	}

	Cell::Cell(char _id, Color _color) : Renderable(_id,_color)
	{
	}
	
	Cell::Cell(const Cell& C) : Renderable (C)
	{
	}

	Cell::~Cell()
	{
	}
	
	Cell& Cell::operator=(const Cell& C)
	{
		Renderable::operator=(C);
		return *this;
	}
