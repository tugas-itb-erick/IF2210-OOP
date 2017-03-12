/* NIM/Nama  : 13515144 / William   */
/* File      : Amphibia.h           */

#pragma once

#include "Vertebrate.h"

/** @class Amphibia
  * Kelas taksonomi untuk amphibi
  */
class Amphibia : public Vertebrate {
public:
	/** @brief Constructor
	*/
	Amphibia();

	/** @brief Copy Constructor
	* @param Amphibia A yang diacu cctor
	*/
	Amphibia(const Amphibia& H);

	/** @brief Destructor.
    */
	~Amphibia();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Amphibia A berisi data untuk diassign
	  */
	Amphibia& operator= (const Amphibia& H);
};
