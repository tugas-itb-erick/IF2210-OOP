/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : WaterAnimal.h           */

#pragma once

#include "Animal.h"

class WaterAnimal : public virtual Animal {
public:
	/** @brief Constructor
	*/
	WaterAnimal(string _name, double _weight, Sex _s);

	/** @brief Copy Constructor
	* @param WaterAnimal A yang ingin disalin.
	*/
	WaterAnimal(const WaterAnimal&);

	/** @brief Destructor.
    */
	virtual ~WaterAnimal();

	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return WaterAnimal yang sudah di assign nilai dari current object.
	  */
	WaterAnimal& operator=(const WaterAnimal&);
};
