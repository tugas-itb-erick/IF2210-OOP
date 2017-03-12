/* NIM/Nama  : 13515144 / William    */
/* File      : Carnivore.h           */

#pragma once

/** @class Carnivore
  * Kelas untuk hewan karnivora (pemakan daging)
  */
class Carnivore {
public:
	/** @brief Constructor
	*/
	Carnivore();

	/** @brief Copy Constructor
	* @param Carnivore C yang diacu cctor
	*/
	Carnivore(const Carnivore& C);

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param C Carnivore berisi data untuk diassign
	  */
	Carnivore& operator= (const Carnivore& C);

protected:
	double meatRatio;
	const double vegRatio;
};
