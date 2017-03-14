/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Exit.h               */

#pragma once

#include "../Road.h"

/** @class Exit.
	 * Adalah kelas anak dari Road.
	 * Adalah representasi dari jalan keluar ke zoo.
	 */
class Exit : public Road {
public:
	/** @brief Constructor.
     * Menciptakan Exit.
     */
	Exit();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Exit.
     * @param X Exit yang ingin disalin.
     */
	Exit(const Exit&);

	/** @brief Destructor.
    */
	virtual ~Exit();

	/** @brief Operator=.
     * Menginisialisasi Exit tanpa terjadi bitwise copy
     * @return Exit yang sudah di assign nilai dari current object
     */
	Exit& operator=(const Exit&);

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
	virtual Exit* clone() const;

};
