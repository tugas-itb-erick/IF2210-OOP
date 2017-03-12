/* NIM/Nama  : 13515144 / William    */
/* File      : Omnivore.h            */

#pragma once

/** @class Omnivore
  * Kelas untuk hewan omnivora (pemakan segala)
  */
class Omnivore{
public:
/** @brief Constructor
	*/
	Omnivore();

	/** @brief Copy Constructor
	* @param Omnivore O yang diacu cctor
	*/
	Omnivore(const Omnivore& O);

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Omnivore O berisi data untuk diassign
	  */
	Omnivore& operator= (const Omnivore& O);

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
	double meatRatio;
	double vegRatio;
};
