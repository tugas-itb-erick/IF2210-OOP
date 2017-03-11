/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Zoo.h                */

#pragma once

#include "Renderable.h"

/** @class Zoo
  */
class Zoo {
public:
	/** @brief Constructor.
      * Menciptakan Zoo kosong yang berukuran default.
      */
	Zoo();

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
	Cell ** *c;  	          /* matriks of pointer to cell */
	int row; 				        /* ukuran baris */
	int col; 				        /* ukuran kolom */
	const int defRow = 10; 	/* default baris = 10 */
	const int defCol = 10; 	/* default kolom = 10*/
};
