/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.h                  */

#pragma once

#include <iostream>
#include "Renderable.h"
#include "animals/animals.h"
#include "habitats/habitats.h"
using namespace std;

class Cage : public Renderable {
public:
  /** @brief Constructor
    * membuat cage kosong.
	*/
  Cage();

  /** @brief Constructor dengan parameter.
    * @param s ukuran cage
    */
  Cage(int s);

  /** @brief Copy Constructor
	* @param Cage C yang diacu cctor
	*/
  Cage(const Cage& C);


  /** @brief Destructor
	*/
  virtual ~Cage();

  /** @brief Operator=.
	  * Menjamin bukan bitwise copy.
	  * @param Cage C berisi data untuk diassign
	  */
  Cage& operator=(const Cage& C);

  /** @brief GetSize.
	* Mengembalikan ukuran Cage.
	* @return integer ukuran cage
	*/
  int getSize() const;

  /** @brief GetTotalAnimal.
	* Mengembalikan banyaknya binatang dalam satu cage.
	* @return integer banyaknya binatang
	*/
  int getTotalAnimal() const;

   /** @brief GetRow.
	 * Mengembalikan posisi baris.
	 * @return posisi baris
	 */
  int * getRow() const;

  /** @brief GetCol.
	 * Mengembalikan posisi kolom.
	 * @return posisi kolom
	 */
  int * getCol() const;

  char getHabitat() const;

  Animal* getAnimal(int x) const;

  /** @brief isFull.
	 * Mengembalikan true jika 30% cage berisi binatang
	 * @return mengembalikan true/false
	 */
  bool isFull() const;

  /** @brief AddAnimal.
	 * Menambahkan binatang ke dalam cage
	 * @param pointer A animal
	 */
  void AddAnimal(const Animal * A);

  /** @brief countConsumedMeat.
	 * Menghitung jumlah makanan daging
	 * @return jumlah daging
	 */

  void Move();

  int countConsumedMeat();

  /** @brief countConsumedVeggie.
	 * Menghitung jumlah makanan sayuran
	 * @return jumlah sayuran
	 */
  int countConsumedVeggie();

  /** @brief render.
	 */
  char render();

  Color getColor();

  void setHabitat(char c);

  /** @brief Operator>>.
	 * Menambahkan binatang ke dalam cage
	 * @param A animal
	 */
  friend istream& operator>>(istream& in, Cage& C);

    /** @brief Operator [].
	 * Operator subscript
	 * @param x integer indeks
	 */
	 // Animal* operator[](int x);

private:
  int * row; // posisi baris
  int * col; // posisi kolom
  Animal * *a; // hewan yang tinggal di kandang
  char habitat; // habitat kandang
  int size; // ukuran kandang
};
