/* NIM/Nama  : 13515AAA / AAA AAA   */
/* File      : AAA.h                */

#pragma once

#include "Renderable.h"

class Facility : public Cell {
public:
	/** @brief Constructor.
     * Menciptakan Facility kosong.
     */
	Facility();

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

class Park : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Park.
     */
	Park();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Park.
     * @param P Park yang ingin disalin.
     */
	Park(const Park&);

	/** @brief Destructor.
    */
	virtual ~Park();

	/** @brief Operator=.
     * Menginisialisasi Park tanpa terjadi bitwise copy
     * @return Park yang sudah di assign nilai dari current object
     */
	Park& operator=(const Park&);
};

class Restaurant : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Restaurant.
     */
	Restaurant();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Restaurant.
     * @param R Restaurant yang ingin disalin.
     */
	Restaurant(const Restaurant&);

	/** @brief Destructor.
    */
	virtual ~Restaurant();

	/** @brief Operator=.
     * Menginisialisasi Restaurant tanpa terjadi bitwise copy
     * @return Restaurant yang sudah di assign nilai dari current object
     */
	Restaurant& operator=(const Restaurant&);
};

class Road : public Facility {
public:
	/** @brief Constructor.
     * Menciptakan Road.
     */
	Road();

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
};

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
};

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
};
