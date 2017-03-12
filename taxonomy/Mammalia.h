/* NIM/Nama  : 13515144 / William   */
/* File      : Mammalia.h           */

#pragma once

#include "Vertebrate.h"

/** @class Mammalia
  * Kelas taksonomi untuk hewan menyusui (mamalia)
  */
class Mammalia : public Vertebrate {
public:
	/** @brief Constructor
	*/
	Mammalia();

	/** @brief Copy Constructor
	* @param Mammalia M yang diacu cctor
	*/
	Mammalia(const Mammalia& H);

	/** @brief Destructor.
    */
	~Mammalia();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Mammalia M berisi data untuk diassign
	  */
	Mammalia& operator= (const Mammalia& M);
};
