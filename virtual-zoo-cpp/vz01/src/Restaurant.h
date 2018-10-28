/* NIM/Nama  : 13515087 / Audry Nyonata   */
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

	/** @brief Render.
     * Mengembalikan karakter untuk ditampilkan ke layar
     * @return id bertipe char
     */
	char render();
};
