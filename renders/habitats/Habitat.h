/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Habitat.h                */

#pragma once

#include "../Cell.h"

/** @class Habitat
  */
class Habitat : public Cell {
public:
	/** @brief Constructor.
     * Menciptakan Habitat kosong.
     */
	Habitat();
	
	/** @brief Constructor dengan parameter.
     * Menciptakan Habitat dengan parameter id dan color
     * @param id char renderable
     * @param color warna renderable
     */
	Habitat(char _id, Color _color);

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Habitat.
     * @param H Habitat yang ingin disalin.
     */
	Habitat(const Habitat&);

	/** @brief Destructor.
    */
	virtual ~Habitat();

	/** @brief Operator=.
     * Menginisialisasi Habitat tanpa terjadi bitwise copy
     * @return Habitat yang sudah di assign nilai dari current object
     */
	Habitat& operator=(const Habitat&);
};
