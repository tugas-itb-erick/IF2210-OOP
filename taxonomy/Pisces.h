/* NIM/Nama  : 13515144 / William   */
/* File      : Pisces.h             */

#pragma once

#include "Vertebrate.h"

/** @class Pisces
  * Kelas taksonomi untuk ikan
  */
class Pisces : public Vertebrate {
public:
	/** @brief Constructor
	*/
	Pisces();

	/** @brief Copy Constructor
	* @param Pisces P yang diacu cctor
	*/
	Pisces(const Pisces& P);

	/** @brief Destructor.
    */
	~Pisces();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Pisces P berisi data untuk diassign
	  */
	Pisces& operator= (const Pisces& P);
};
