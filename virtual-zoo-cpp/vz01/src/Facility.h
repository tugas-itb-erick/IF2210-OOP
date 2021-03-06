/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : AAA.h                */

#pragma once

#include "Cell.h"

class Facility : public Cell {
public:
	/** @brief Constructor.
     * Menciptakan Facility kosong.
     */
	Facility();

	/** @brief Constructor.
     * Menciptakan Facility dengan parameter _id dan _color.
	 * @param _id bertipe char
	 */
	Facility(char _id);

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Facility.
     * @param F Facility yang ingin disalin.
     */
	Facility(const Facility&);

	/** @brief Destructor.
    */
	virtual ~Facility();

	/** @brief Operator=.
     * Menginisialisasi Facility tanpa terjadi bitwise copy
     * @return Facility yang sudah di assign nilai dari current object
     */
	Facility& operator=(const Facility&);

};
