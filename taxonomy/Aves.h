/* NIM/Nama  : 13515144 / William   */
/* File      : Aves.h               */

#pragma once

#include "Vertebrate.h"

/** @class Aves
  * Kelas taksonomi untuk burung
  */
class Aves : public Vertebrate {
public:
	/** @brief Constructor
	*/
	Aves();

	/** @brief Copy Constructor
	* @param Aves A yang diacu cctor
	*/
	Aves(const Aves& H);

	/** @brief Destructor.
    */
	~Aves();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Aves A berisi data untuk diassign
	  */
	Aves& operator= (const Aves& A);
};
