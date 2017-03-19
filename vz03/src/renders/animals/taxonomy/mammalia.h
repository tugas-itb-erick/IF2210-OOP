/* NIM/Nama  : 13515144 / William   */
/* File      : Mammalia.h           */

#pragma once

#include "vertebrate.h"

/** @class Mammalia
  * Kelas taksonomi untuk hewan menyusui (mamalia)
  */
class Mammalia : public Vertebrate {
public:
	/** @brief Constructor
	* @param b temperatur tubuh (hot/cold)
	* @param h jumlah ruang jantung
	*/
	Mammalia();
};
