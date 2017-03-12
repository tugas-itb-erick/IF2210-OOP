/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : Exit.h               */

#pragma once

#include "Road.h"

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

	/** @brief render.
     *  Mencetak karakter sesuai representasi kelas Exit
     */
	void render();

	virtual Exit* clone() const;

};
