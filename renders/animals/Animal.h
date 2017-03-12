/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */

#pragma once

#include "../Renderable.h"
#include "../../diet/diet.h"
#include "../../taxonomy/taxonomy.h"
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
	  * Menampilkan experience yang dialami pengamat dengan hewan.
	  */
	virtual void interact() = 0;

protected:
	string name;
	double weight;
	Sex s;
};
