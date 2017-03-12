/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Park.h               */

#pragma once

#include "Facility.h"

class Park : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Park.
     */
	Park();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Park.
     * @param P Park yang ingin disalin.
     */
	Park(const Park&);

	/** @brief Destructor.
    */
	virtual ~Park();

	/** @brief Operator=.
     * Menginisialisasi Park tanpa terjadi bitwise copy
     * @return Park yang sudah di assign nilai dari current object
     */
	Park& operator=(const Park&);

	/** @brief Render.
     * Mengembalikan karakter untuk ditampilkan ke layar
     * @return id bertipe char
     */
	char render();

	/** @brief GetColor.
     * Mengembalikan warna untuk ditampilkan ke layar
     * @return color warna untuk dirender
     */
	Color getColor();

	/** @brief Clone.
     * Menduplikat diri sendiri
     * @return value object hasil kloning
     */
	virtual Park* clone() const;
};
