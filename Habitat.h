/* NIM/Nama  : 13515078 / Veren Iliana K   */
/* File      : Habitat.h                */

#pragma once

/** @class Habitat
  */
class Habitat : public Cell {
public:
	/** @brief Constructor.
     * Menciptakan Habitat kosong.
     */
	Habitat();

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

/** @class LandHabitat
  */
class LandHabitat : public Habitat {
public:
	/** @brief Constructor.
     * Menciptakan LandHabitat kosong.
     */
	LandHabitat();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari LandHabitat.
     * @param L LandHabitat yang ingin disalin.
     */
	LandHabitat(const LandHabitat&);

	/** @brief Destructor.
    */
	virtual ~LandHabitat();

	/** @brief Operator=.
     * Menginisialisasi LandHabitat tanpa terjadi bitwise copy
     * @return LandHabitat yang sudah di assign nilai dari current object
     */
	LandHabitat& operator=(const LandHabitat&);
};

/** @class WaterHabitat
  */
class WaterHabitat : public Habitat {
public:
	/** @brief Constructor.
     * Menciptakan WaterHabitat kosong.
     */
	WaterHabitat();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari WaterHabitat.
     * @param W WaterHabitat yang ingin disalin.
     */
	WaterHabitat(const WaterHabitat&);

	/** @brief Destructor.
    */
	virtual ~WaterHabitat();

	/** @brief Operator=.
     * Menginisialisasi WaterHabitat tanpa terjadi bitwise copy
     * @return WaterHabitat yang sudah di assign nilai dari current object
     */
	WaterHabitat& operator=(const WaterHabitat&);
};

/** @class AirHabitat
  */
class AirHabitat : public Habitat {
public:
	/** @brief Constructor.
     * Menciptakan AirHabitat kosong.
     */
	AirHabitat();

	/** @brief Copy Constructor.
     * Menciptakan salinan dari AirHabitat.
     * @param A AirHabitat yang ingin disalin.
     */
	AirHabitat(const AirHabitat&);

	/** @brief Destructor.
    */
	virtual ~AirHabitat();

	/** @brief Operator=.
     * Menginisialisasi AirHabitat tanpa terjadi bitwise copy
     * @return AirHabitat yang sudah di assign nilai dari current object
     */
	AirHabitat& operator=(const AirHabitat&);
};
