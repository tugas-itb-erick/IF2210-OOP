/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : WaterAnimal.h           */

#pragma once

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

/** @class WaterAnimal
	 * Adalah kelas anak Animal.
	 * Menggunakan virtual inheritance untuk menghindari ambiguitas karena diamond inheritance.
	 */
class WaterAnimal : virtual public Animal {
public:
	WaterAnimal();
	/** @brief Constructor
	*/
	WaterAnimal(std::string _name, double _weight, Sex _s, int _r, int _c,char _id, Color _color, bool _w);

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
