/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Zoo.h                */

#pragma once
#include "Cell.h"
#include "Cage.h"

/** @class Zoo
  */
class Zoo {
public:
	/** @brief Constructor.
      * Menciptakan Zoo kosong yang berukuran default.
      */
	Zoo();

	/** @brief Constructor.
      * Menciptakan Zoo kosong yang berukuran r x c.
      */
	Zoo(int _r, int _c);

	/** @brief Copy constructor.
	  * @param Z Zoo yang diacu cctor
	  */
	Zoo(const Zoo& Z);

	/** @brief Destructor.
    */
	~Zoo();

	/** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Z Zoo berisi data untuk diassign
	  */
	Zoo& operator=(const Zoo& Z);


private:
	Cell ** *c;  	                /* matriks of pointer to cell */
	Cage * cg;                      /* array of cage */
	int row; 				        /* ukuran baris */
	int col; 				        /* ukuran kolom */

	static const int defRow = 50; 	/* default baris = 50 */
	static const int defCol = 50; 	/* default kolom = 50 */
};
