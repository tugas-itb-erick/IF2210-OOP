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

	/** @brief Destructor.
    */
	~Herbivore();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Herbivore H berisi data untuk diassign
	  */
	Herbivore& operator= (const Herbivore& H);

protected:
	const double meatRatio;
	double vegRatio;
};
