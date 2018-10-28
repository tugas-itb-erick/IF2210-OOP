/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */

#pragma once

#include "Renderable.h"
#include "Vertebrate.h"
#include <iostream>
using namespace std;

enum Sex {male, female};

class Animal{
public:
	/** @brief Constructor
	*/
	Animal();

	/** @brief Constructor
	* @param _name nama binatang
	* @param _weight berat binatang
	* @param _s jenis kelamin
	*/
	Animal(string _name, double _weight, Sex _s);

	/** @brief Copy Constructor
	* @param Animal A yang ingin disalin.
	*/
	Animal(const Animal& A);

	/** @brief Destructor.
    */
	virtual ~Animal();

	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	Animal& operator=(const Animal& A);

	/** @brief Interact
	  * Menampilkan experience yang dialami pengamat dengan hewan.
	  */
	virtual void interact() = 0;
	
	/** @brief GetWeight
	  * Mengembalikan berat binatang
	  * @return berat binatang dalam kilogram
	  */
	double getWeight() const;
	
	/** @brief GetName
	  * Mengembalikan nama binatang
	  * @return string nama binatang
	  */
	string getName() const;
	
	/** @brief GetSex
	  * Mengembalikan jenis kelamin binatang
	  * @return jenis kelamin binatang
	  */
	Sex getSex() const;

	/** @brief SetWeight
	  * Menentukan berat binatang
	  * @return double w berat binatang dalam kilogram
	  */
	void setWeight(double w);
	
	/** @brief SetName
	  *	Menentukan nama binatang
	  * @param string n nama binatang
	  */
	void setName(string n);
	
	/** @brief SetSex
	  * Menentukan jenis kelamin binatang
	  * @param Sex ns jenis kelamin binatang
	  */
	void setSex(Sex ns);

protected:
	string name;
	double weight;
	Sex s;
};
