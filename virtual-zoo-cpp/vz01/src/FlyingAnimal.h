/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : FlyingAnimal.h          */

#pragma once

#include "Animal.h"

class FlyingAnimal : public virtual Animal {
public:
	/** @brief Constructor
	*/
	FlyingAnimal(string _name, double _weight, Sex _s);

	/** @brief Copy Constructor
	* @param Animal A yang ingin disalin.
	*/
	FlyingAnimal(const FlyingAnimal&);

	/** @brief Destructor.
    */
	virtual ~FlyingAnimal();

	/** @brief Operator=
	  * Menjamin bukan bitwise copy.
	  * @return Animal yang sudah di assign nilai dari current object.
	  */
	FlyingAnimal& operator=(const FlyingAnimal&);
};
