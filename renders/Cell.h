/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cell.h                  */

#pragma once

#include "Renderable.h"

class Cell : public Renderable {
public:
	/** @brief Constructor.
     * Menciptakan Cell kosong.
     */
	Cell();
	
	/** @brief Constructor dengan parameter.
     * Menciptakan Cell dengan parameter id dan color
     * @param id char renderable
     * @param color warna renderable
     */
	Cell(char _id, Color _color);

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Cell.
     * @param C Cell yang ingin disalin.
     */
	Cell(const Cell&);

	/** @brief Destructor.
    */
	virtual ~Cell();

	/** @brief Operator=.
     * Menginisialisasi Cell tanpa terjadi bitwise copy
     * @return Cell yang sudah di assign nilai dari current object
     */
	Cell& operator=(const Cell&);

	/** @brief Operator=.
     * Menginisialisasi Cell tanpa terjadi bitwise copy
     * @return Cell yang sudah di assign nilai dari current object
     */
    virtual Cell* clone() const = 0;
};
