/* NIM/Nama  : 13515144 / William    */
/* File      : Herbivore.h           */

#pragma once

/** @class Herbivore
  * Kelas untuk hewan herbivora (pemakan tanaman)
  */
class Herbivore{
public:
	/** @brief Constructor
	*/
	Herbivore();

	/** @brief Copy Constructor
	* @param Herbivore H yang diacu cctor
	*/
	Herbivore(const Herbivore& H);

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Herbivore H berisi data untuk diassign
	  */
	Herbivore& operator= (const Herbivore& H);

	/** @brief Getter.
		* Mengembalikan nilai rasio daging.
		* @return nilai rasio daging
		*/
	double getMeatRatio() const;

	/** @brief Getter.
		* Mengembalikan nilai rasio daging.
		* @return nilai rasio sayur
		*/
	double getVegRatio() const;

protected:
	const double meatRatio = 0;
	double vegRatio;
};
