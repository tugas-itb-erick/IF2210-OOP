/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : LandAnimal.h            */

#pragma once

#include "Animal.h"

class LandAnimal : public virtual Animal {
public:
	/** @brief Constructor
	*/
	LandAnimal(string _name, double _weight, Sex _s);

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
