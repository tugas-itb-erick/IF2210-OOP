/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */

#pragma once

#include <iostream>
#include "Renderable.h"

using namespace std;
enum Sex {male, female};

class Animal : public Renderable{
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
	Animal(const Animal&);
	/** @brief Destructor.
    */
	virtual ~Animal();
	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	Animal& operator=(const Animal&);
	
	/** @brief Interact
	  * Menampilkan experience yang dialami pengguna dengan hewan.
	  */
	virtual void interact() = 0;
	
protected:
	string name;
	double weight;
	Sex s;
};

class LandAnimal : public Animal {
public:
	/** @brief Constructor
	*/
	LandAnimal();
	/** @brief Copy Constructor
	* @param Animal A yang ingin disalin.
	*/
	LandAnimal(const Animal&);
	/** @brief Destructor.
    */
	virtual ~LandAnimal();
	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	LandAnimal& operator=(const LandAnimal&);
};

class WaterAnimal : public Animal {
public:
	/** @brief Constructor
	*/
	WaterAnimal();
	/** @brief Copy Constructor
	* @param WaterAnimal A yang ingin disalin.
	*/
	WaterAnimal(const Animal&);
	/** @brief Destructor.
    */
	virtual ~WaterAnimal();
	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return WaterAnimal yang sudah di assign nilai dari current object.
	  */
	WaterAnimal& operator=(const WaterAnimal&);
};

class FlyingAnimal : public Animal {
public:
	/** @brief Constructor
	*/
	FlyingAnimal();
	/** @brief Copy Constructor
	* @param Animal A yang ingin disalin.
	*/
	FlyingAnimal(const Animal&);
	/** @brief Destructor.
    */
	virtual ~FlyingAnimal();
	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	FlyingAnimal& operator=(const FlyingAnimal&);
};
