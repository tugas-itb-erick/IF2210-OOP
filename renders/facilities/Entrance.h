/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Entrance.h           */

#pragma once

#include "Road.h"

class Entrance : public Road {
public:
	/** @brief Constructor.
     * Menciptakan Entrance.
     */
	Entrance();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Entrance.
     * @param E Entrance yang ingin disalin.
     */
	Entrance(const Entrance&);

	/** @brief Destructor.
    */
	virtual ~Entrance();

	/** @brief Operator=.
     * Menginisialisasi Entrance tanpa terjadi bitwise copy
     * @return Entrance yang sudah di assign nilai dari current object
     */
	Entrance& operator=(const Entrance&);

	/** @brief render.
     *  Mencetak karakter sesuai representasi kelas Entrance
     */
	void render();

	virtual Entrance* clone() const;
};
