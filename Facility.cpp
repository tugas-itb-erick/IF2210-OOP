/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : AAA.h                */

#pragma once

#include "Renderable.h"


	/***** FACILITY *****/
	Facility::Facility()
	{}

	Facility::Facility(const Facility&)
	{}

	virtual Facility::~Facility()
	{}

	Facility& Facility::operator=(const Facility&)
	{}
	

	/***** PARK *****/
	Park::Park()
	{}
	Park::Park(const Park&)
	{}
	virtual Park::~Park()
	{}
	Park& Park::operator=(const Park&)
	{}
	void Park::render()
	{
		cout << "*";
	}
	
	/***** RESTAURANT *****/
	Restaurant::Restaurant()
	{}
	Restaurant::Restaurant(const Restaurant&)
	{}
	virtual Restaurant::~Restaurant()
	{}
	Restaurant& Restaurant::operator=(const Restaurant&)
	{}
	void Restaurant::render()
	{
		cout << "R";
	}

	/***** ROAD *****/
	Road::Road()
	{}
	Road::Road(const Road&)
	{}
	virtual Road::~Road()
	{}
	Road& Road::operator=(const Road&)
	{}
	
	void Road::render()
	{
		cout << "-";
	}
	
	
	/***** ENTRANCE *****/
	Entrance()
	{}

	Entrance(const Entrance&)
	{}

	virtual ~Entrance()
	{}

	Entrance& operator=(const Entrance&)
	{}

	
	void Entrance::render()
	{
		cout << "i";
	}
	
	/***** EXIT *****/
	Exit::Exit()
	{}
	
	Exit::Exit(const Exit&)
	{}

	virtual Exit::~Exit()
	{}

	Exit& Exit::operator=(const Exit&)
	{}
	
	void Exit::render()
	{
		cout << "o";
	}
