/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Road.h               */

#pragma once

#include "Facility.h"

class Road : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Road.
     */
	Road();

	/** @brief Constructor.
     * Menciptakan Road dengan parameter _id dan _color.
	 * @param _id bertipe char
	 */
	Road(char _id);

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
};
