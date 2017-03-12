/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Restaurant.h         */

#pragma once

#include "Facility.h"

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

	/** @brief render.
     *  Mencetak karakter sesuai representasi kelas Restoran
     */
	void render();

	virtual Restaurant* clone() const;

};
