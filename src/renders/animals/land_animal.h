/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : LandAnimal.h            */

#pragma once

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

/** @class LandAnimal
	 * Adalah kelas anak Animal.
	 * Menggunakan virtual inheritance untuk menghindari ambiguitas karena diamond inheritance.
	 */
class LandAnimal : virtual public Animal {
public:
	LandAnimal();
	/** @brief Constructor
	*/
	LandAnimal(std::string _name, double _weight, Sex _s, int _r, int _c,char _id, Color _color, bool _w);

	/** @brief Copy Constructor
	* @param Animal A yang ingin disalin.
	*/
	LandAnimal(const LandAnimal&);

	/** @brief Destructor.
    */
	virtual ~LandAnimal();

	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	LandAnimal& operator=(const LandAnimal&);
};
