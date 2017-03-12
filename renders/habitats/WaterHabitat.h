/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : WaterHabitat.h              */

#pragma once

#include "Habitat.h"

/** @class WaterHabitat
  */
class WaterHabitat : public Habitat {
public:
	/** @brief Constructor.
     * Menciptakan WaterHabitat kosong.
     */
	WaterHabitat();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari WaterHabitat.
     * @param W WaterHabitat yang ingin disalin.
     */
	WaterHabitat(const WaterHabitat&);

	/** @brief Destructor.
    */
	virtual ~WaterHabitat();

	/** @brief Operator=.
     * Menginisialisasi WaterHabitat tanpa terjadi bitwise copy
     * @return WaterHabitat yang sudah di assign nilai dari current object
     */
	WaterHabitat& operator=(const WaterHabitat&);
};
