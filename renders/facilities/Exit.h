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

	/** @brief Clone.
     * Menduplikat diri sendiri
     * @return value object hasil kloning
     */
	virtual Exit* clone() const;

};
