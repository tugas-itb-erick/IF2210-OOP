/* NIM/Nama  : 13515144 / William   */
/* File      : Reptilia.h           */

#pragma once

#include "Vertebrate.h"

/** @class Reptilia
  * Kelas taksonomi untuk reptil
  */
class Reptilia : public Vertebrate {
public:
	/** @brief Constructor
	*/
	Reptilia();

	/** @brief Copy Constructor
	* @param Reptilia R yang diacu cctor
	*/
	Reptilia(const Reptilia& H);

	/** @brief Destructor.
    */
	~Reptilia();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Reptilia R berisi data untuk diassign
	  */
	Reptilia& operator= (const Reptilia& H);
};
