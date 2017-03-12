/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Road.h               */

#pragma once

#include "Facility.h"

class Road : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Road.
     */
	Road();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Road.
     * @param D Road yang ingin disalin.
     */
	Road(const Road&);

	/** @brief Destructor.
    */
	virtual ~Road();

	/** @brief Operator=.
     * Menginisialisasi Road tanpa terjadi bitwise copy
     * @return Road yang sudah di assign nilai dari current object
     */
	Road& operator=(const Road&);

	/** @brief render.
     *  Mencetak karakter sesuai representasi kelas Road
     */
	void render();

	virtual Road* clone() const;
};
