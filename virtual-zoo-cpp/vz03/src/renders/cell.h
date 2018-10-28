/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cell.h                  */

#pragma once

#include "renderable.h"

/** @class Cell
  * Kelas abstrak yang merepresentasikan satuan unit tempat dari zoo.
  */
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
     * Menginisialisasi Cell dari Cell lain
		 * @param C Cell yang akan dicopy
     * @return Cell current object yang sudah diassign dengan C
     */
	Cell& operator=(const Cell&);

	/** @brief clone.
     * Menduplikasi Cell objek diri sendiri
     * @return Cell yang sudah diduplikasi.
     */
  virtual Cell* clone() const = 0;
};
