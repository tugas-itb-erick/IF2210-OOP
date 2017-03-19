/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : zoo.h                */

#ifndef ZOO_H
#define ZOO_H

#include "../cell/cell.h"
#include "../cage/cage.h"
#include <iostream>
using namespace std;

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
	Zoo(int _r, int _c, int _nc);

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

	/** @brief operator>>.
	  * Menginput suatu Zoo dari file eksternal
	  * @param in operator input
	  * @param Z Zoo yang dibuat
	  */
	friend istream& operator>>(istream& in, Zoo& Z);


	/** @brief operator>>.
	  * Mencetak suatu Zoo ke layar
	  * @param in operator output
	  * @param Z Zoo yang dicetak
	  */
	friend ostream& operator<<(ostream& os, const Zoo& Z);

	/** @brief Mencetak suatu Zoo (dengan batas) ke layar
	  * @param x1 baris terkiri
	  * @param y1 kolom teratas
	  * @param x2 baris terkanan
	  * @param y2 kolom terbawah
	  */
	void Display(int x1, int y1, int x2, int y2);

	/** @brief Mengembalikan sel ke i,j
	  * @param i indeks baris
	  * @param j indeks kolom
	  * @return sel ke i,j
	  */
	Cell getCell(int i, int j);

	/** @brief Mengembalikan cage ke i
	  * @param i indeks kandang
	  * @return kandang ke-i
	  */
	Cage getCage (int i);

	/** @brief Mengembalikan jumlah daging yang diperlukan kebun binatang dalam 1 hari
	  * @return jumlah daging
	  */
	double ConsumedMeat();
	/** @brief Mengembalikan jumlah tumbuhan yang diperlukan kebun binatang dalam 1 hari
	  * @return jumlah tumbuhan
	  */
	double ConsumedVeg();

	/** @brief Mengembalikan banyaknya cage
	  * @return banyaknya cage
	  */
	int getNCage();

	/** @brief Menentukan banyaknya cage
	  * @param integer n
	  * @return Cage
	  */
	void setNCage(int n);

	/** @brief Mengubah T[i]
	  * @param T cage
	  * @param i integer
	  */
	void setCage(Cage &T, int i);

	Cell** c;  	                /* matriks of cell */
	Cage* t_cage; 				/*array of cage*/
private:
	int row; 				        /* ukuran baris */
	int col; 				        /* ukuran kolom */
	int n_cage; /*ukuran banyaknya kandang*/
	static const int def_row = 50; 	/* default baris = 10 */
	static const int def_col = 50; 	/* default kolom = 10*/
	static const int def_cage = 50; 	/* default baris = 10 */
};
#endif
