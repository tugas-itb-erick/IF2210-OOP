/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : AirHabitat.h                */

#pragma once

#include "Habitat.h"

/** @class AirHabitat
  */
class AirHabitat : public Habitat {
public:
	/** @brief Constructor.
     * Menciptakan AirHabitat kosong.
     */
	AirHabitat();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari AirHabitat.
     * @param A AirHabitat yang ingin disalin.
     */
	AirHabitat(const AirHabitat&);

	/** @brief Destructor.
    */
	virtual ~AirHabitat();
	
	/** @brief Operator=.
     * Menginisialisasi AirHabitat tanpa terjadi bitwise copy
     * @return AirHabitat yang sudah di assign nilai dari current object
     */
	AirHabitat& operator=(const AirHabitat&);
	
	/** @brief Render.
     * Mengembalikan karakter untuk ditampilkan ke layar
     * @return id bertipe char
     */
	char render();
};
