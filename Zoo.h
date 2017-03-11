/* NIM/Nama  : 13515087 / Audry Nyonata   */
/* File      : Zoo.h                */

#pragma once

#include <iostream>
#include "Renderable.h"
#include "Facility.h"
#include "Habitat.h"
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

	friend istream& operator>>(istream& in, const Zoo& Z);
	friend ostream& operator<<(ostream& os, const Zoo& Z);


	void print(int x1, int y1, int x2, int y2);

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

private:
	Cell ** *c;  	                  /* matriks of pointer to cell */
	int row; 				                /* ukuran baris */
	int col; 				                /* ukuran kolom */
	static const int defRow = 10; 	/* default baris = 10 */
	static const int defCol = 10; 	/* default kolom = 10*/
};
