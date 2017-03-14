/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Road.h               */

#pragma once

#include "../Facility.h"

/** @class Road.
	 * Adalah kelas anak dari Facility.
	 * Adalah representasi dari jalanan di zoo.
	 */
class Road : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Road.
     */
	Road();

	/** @brief Constructor.
     * Menciptakan Road dengan parameter _id dan _color.
		 * @param _id bertipe char
		 * @param _color bertipe Color
     */
	Road(char _id, Color _color);

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
	virtual Road* clone() const;
};
