/* NIM/Nama  : 13515144 / William   */
/* File      : Diet.h                */

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
