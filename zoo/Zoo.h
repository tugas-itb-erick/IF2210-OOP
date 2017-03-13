/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Zoo.h                */

#pragma once

#include <iostream>
#include "../renders/renders.h"
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

	friend istream& operator>>(istream& in, Zoo& Z);
	friend ostream& operator<<(ostream& os, const Zoo& Z);

	void display(int x1, int y1, int x2, int y2);
	void display();
	void readAll(istream& fzoo, istream& fcg, istream& fanim);

	class Proxy {
				friend class Zoo;
		public:
				Cell*& operator[](int c){
						return parent.c[r][c];
				}
		private:
				Proxy(Zoo &parent_, int row_) : parent(parent_), r(row_) {}
				Zoo& parent;
				int r;
	};

	Proxy operator[](int x)
	{
			return Proxy(*this, x);
	}

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
