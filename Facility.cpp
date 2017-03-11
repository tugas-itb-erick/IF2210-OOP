/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : AAA.h                */

#include <iostream>
#include "Renderable.h"
#include "Facility.h"
using namespace std;

	/***** FACILITY *****/
	Facility::Facility()
	{}

	Facility::Facility(const Facility&)
	{}

	Facility::~Facility()
	{}

	Facility& Facility::operator=(const Facility&)
	{}

	/***** PARK *****/
	Park::Park()
	{}
	Park::Park(const Park&)
	{}
	Park::~Park()
	{}
	Park& Park::operator=(const Park&)
	{}
	void Park::render()
	{
		cout << "*";
	}
	Park* Park::clone() const {
  	return new Park(*this);
	}

	/***** RESTAURANT *****/
	Restaurant::Restaurant()
	{}
	Restaurant::Restaurant(const Restaurant&)
	{}
	Restaurant::~Restaurant()
	{}
	Restaurant& Restaurant::operator=(const Restaurant&)
	{}
	void Restaurant::render()
	{
		cout << "R";
	}
	Restaurant* Restaurant::clone() const {
  	return new Restaurant(*this);
	}

	/***** ROAD *****/
	Road::Road()
	{}
	Road::Road(const Road&)
	{}
	Road::~Road()
	{}
	Road& Road::operator=(const Road&)
	{}

	void Road::render()
	{
		cout << "-";
	}
	Road* Road::clone() const {
  	return new Road(*this);
	}

	/***** ENTRANCE *****/
	Entrance::Entrance()
	{}

	Entrance::Entrance(const Entrance&)
	{}

	Entrance::~Entrance()
	{}

	Entrance& Entrance::operator=(const Entrance&)
	{}


	void Entrance::render()
	{
		cout << "i";
	}
	Entrance* Entrance::clone() const {
  	return new Entrance(*this);
	}

	/***** EXIT *****/
	Exit::Exit()
	{}

	Exit::Exit(const Exit&)
	{}

	Exit::~Exit()
	{}

	Exit& Exit::operator=(const Exit&)
	{}

	void Exit::render()
	{
		cout << "o";
	}
	Exit* Exit::clone() const {
  	return new Exit(*this);
	}
