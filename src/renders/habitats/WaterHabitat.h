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
	virtual WaterHabitat* clone() const;
};
