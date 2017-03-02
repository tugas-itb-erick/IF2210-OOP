/* NIM/Nama  : 13515144 / William   */
/* File      : Taxonomy.h                */

#pragma once

/** @class Mammalia
  * Kelas taksonomi untuk hewan menyusui (mamalia)
  */
class Mammalia {
public:  
	/** @brief Constructor
	*/
	Mammalia();
	
	/** @brief Copy Constructor
	* @param Mammalia M yang diacu cctor
	*/
	Mammalia(const Mammalia& H);
	
	/** @brief Destructor.
    */
	~Mammalia(); 
	
	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Mammalia M berisi data untuk diassign
	  */
	Mammalia& operator= (const Mammalia& M);
};

/** @class Amphibia
  * Kelas taksonomi untuk amphibi
  */
class Amphibia {
public:  
	/** @brief Constructor
	*/
	Amphibia();
	
	/** @brief Copy Constructor
	* @param Amphibia A yang diacu cctor
	*/
	Amphibia(const Amphibia& H);
	
	/** @brief Destructor.
    */
	~Amphibia(); 
	
	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Amphibia A berisi data untuk diassign
	  */
	Amphibia& operator= (const Amphibia& H);
};

/** @class Reptilia
  * Kelas taksonomi untuk reptil
  */
class Reptilia {
public:  
	/** @brief Constructor
	*/
	Reptilia();
	
	/** @brief Copy Constructor
	* @param Reptilia R yang diacu cctor
	*/
	Reptilia(const Reptilia& H);
	
	/** @brief Destructor.
    */
	~Reptilia(); 
	
	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Reptilia R berisi data untuk diassign
	  */
	Reptilia& operator= (const Reptilia& H);
};

/** @class Pisces
  * Kelas taksonomi untuk ikan
  */
class Pisces {
public:  
	/** @brief Constructor
	*/
	Pisces();
	
	/** @brief Copy Constructor
	* @param Pisces P yang diacu cctor
	*/
	Pisces(const Pisces& P);
	
	/** @brief Destructor.
    */
	~Pisces(); 
	
	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Pisces P berisi data untuk diassign
	  */
	Pisces& operator= (const Pisces& P);
};

/** @class Aves
  * Kelas taksonomi untuk burung
  */
class Aves {
public:  
	/** @brief Constructor
	*/
	Aves();
	
	/** @brief Copy Constructor
	* @param Aves A yang diacu cctor
	*/
	Aves(const Aves& H);
	
	/** @brief Destructor.
    */
	~Aves(); 
	
	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Aves A berisi data untuk diassign
	  */
	Aves& operator= (const Aves& A);
};
