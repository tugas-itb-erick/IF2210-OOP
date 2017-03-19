/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Zoo.h                */

#pragma once

#include <iostream>
#include "../renders/renders.h"
using namespace std;

/** @class Zoo
		Kelas Kebun Binatang yang terdiri dari habitat dan fasilitas, kandang, dan hewan.
  */
class Zoo {
public:
	/** @brief Constructor.
      * Menciptakan Zoo kosong yang berukuran default.
      */
	Zoo();

	/** @brief Constructor.
      * Menciptakan Zoo kosong yang berukuran row x col.
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

	/** @brief Operator>>.
	  * Membaca zoo dari input stream.
		* Yang dibaca hanyalah matriks of pointer to cell.
		* @param Z Zoo yang diubah nilainya dari InputZoo
		*/
	friend istream& operator>>(istream& in, Zoo& Z);

	/** @brief Operator<<.
	  * Menulis zoo pada output stream.
		* Yang dibaca hanyalah matriks of pointer to cell.
		* @param Z Zoo yang akan dituliskan pada output stream
		*/
	friend ostream& operator<<(ostream& os, const Zoo& Z);

	/** @brief Membaca zoo dari input streams.
	  * Membaca zoo dengan lengkap, yaitu membaca cell, cage, dan animal.
		* I.S. fzoo adalah input stream untuk zoo, fcg adalah input stream untuk cage, fanim adalah input stream untuk animal
		* @param Z Zoo yang akan dituliskan pada output stream
		*/
	void readAll(istream& fzoo, istream& fcg, istream& fanim);

	/** @brief Menampilkan peta zoo bersama hewan-hewannya
	  * Menerima 4 buah integer sebagai ujung kiri dan kanan daerah zoo yang dicetak
		* @param x1 posisi baris ujung kiri
		* @param y1 posisi kolom ujung kiri
		* @param x2 posisi baris ujung kanan
		* @param y2 posisi kolom ujung kanan
		*/
	void display(int x1, int y1, int x2, int y2);

	/** @brief Menampilkan peta zoo bersama hewan-hewannya
	  * Menampilkan peta dari ujung kiri (0,0) hingga ujung kanan (row-1,col-1)
		*/
	void display();

	/** @brief Menampilkan interaksi pengunjung dengan hewan zoo
		*/
	void Tour();

	/** @brief Menampilkan jumlah daging dan sayur yang dikonsumsi seluruh hewan zoo
		*/
	void showFood();

	/** @class Proxy
	  * kelas penjembatan yang berfungsi agar dapat melakukan overload operator[][]
		*/
	class Proxy {
				friend class Zoo;
		public:
				/** @brief Operator[][].
					* Mengakses kolom dari matriks pada zoo.
					* @param c indeks kolom.
					*/
				Cell*& operator[](int c){
						return parent.c[r][c];
				}
		private:
				Proxy(Zoo &parent_, int row_) : parent(parent_), r(row_) {}
				Zoo& parent;
				int r;
	};

	/** @brief Operator[].
		* Mengakses baris dari matriks pada zoo.
		* @param x indeks baris.
		*/
	Proxy operator[](int x)
	{
			return Proxy(*this, x);
	}

	/** @brief Menambah Cage pada Zoo.
		* Cage C dimasukkan pada zoo apabila cage benar mencakup daerah habitat
		* @param C Cage yang dimasukkan pada Zoo
		*/
	void AddCage(Cage& C);

private:
	Cell ** *c;  	                  /* matriks of pointer to cell */
	Cage * cg;                      /* array of cage */
	int row; 				                /* ukuran baris */
	int col; 				                /* ukuran kolom */
	int ncage;

	static const int defRow = 50; 	/* default baris = 50 */
	static const int defCol = 50; 	/* default kolom = 50 */
};
