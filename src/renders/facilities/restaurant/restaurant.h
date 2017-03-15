/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Restaurant.h         */

#pragma once

#include "../facility.h"

/** @class Restaurant.
	 * Adalah kelas anak dari Facility.
	 * Adalah representasi dari restoran.
	 */
class Restaurant : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Restaurant.
     */
	Restaurant();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Restaurant.
     * @param R Restaurant yang ingin disalin.
     */
	Restaurant(const Restaurant&);

	/** @brief Destructor.
    */
	virtual ~Restaurant();

	/** @brief Operator=.
     * Menginisialisasi Restaurant tanpa terjadi bitwise copy
     * @return Restaurant yang sudah di assign nilai dari current object
     */
	Restaurant& operator=(const Restaurant&);

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
	virtual Restaurant* clone() const;

};
