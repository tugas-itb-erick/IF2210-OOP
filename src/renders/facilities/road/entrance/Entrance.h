/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Entrance.h           */

#pragma once

#include "../Road.h"

/** @class Entrance.
	 * Adalah kelas anak dari Road.
	 * Adalah representasi dari jalan masuk ke zoo.
	 */
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
	virtual Entrance* clone() const;
};
