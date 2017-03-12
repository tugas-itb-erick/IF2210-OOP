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

	/** @brief Destructor.
    */
	~Omnivore();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Omnivore O berisi data untuk diassign
	  */
	Omnivore& operator= (const Omnivore& H);

protected:
	double meatRatio;
	double vegRatio;
};
