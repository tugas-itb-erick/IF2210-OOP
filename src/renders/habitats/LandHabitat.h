/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : LandHabitat.h               */

#pragma once

#include "Habitat.h"

/** @class LandHabitat
  */
class LandHabitat : public Habitat {
public:
	/** @brief Constructor.
     * Menciptakan LandHabitat kosong.
     */
	LandHabitat();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari LandHabitat.
     * @param L LandHabitat yang ingin disalin.
     */
	LandHabitat(const LandHabitat&);

	/** @brief Destructor.
    */
	~LandHabitat();

	/** @brief Operator=.
     * Menginisialisasi LandHabitat tanpa terjadi bitwise copy
     * @return LandHabitat yang sudah di assign nilai dari current object
     */
	LandHabitat& operator=(const LandHabitat&);

	/** @brief Render.
     * Mengembalikan karakter untuk ditampilkan ke layar
     * @return id bertipe char
     */
	char render();

	/** @brief GetColor.
     * Mengembalikan warna untuk ditampilkan ke layar
     * @return color warna renderable
     */
	Color getColor();

	/** @brief Clone.
     * Menduplikat diri sendiri
     * @return value object hasil kloning
     */
	LandHabitat* clone() const;
};
