/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.h                  */

#pragma once

#include <iostream>
#include "Renderable.h"
#include "Animal.h"
#include "Habitat.h"
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

  /** @brief AddAnimal.
	 * Menambahkan binatang ke dalam cage
	 * @param pointer A animal
	 */
  void AddAnimal(const Animal * A);

  /** @brief Render.
  	* @return id renderable.
	*/
  char render();

  /** @brief SetHabitat.
    * Menentukan cage berada di atas habitat nh.
  	* @param habitat nh.
	*/
  void setHabitat(Habitat * nh);


private:
  int * row; // posisi baris
  int * col; // posisi kolom
  Animal * *a;
  Habitat *h;
  int size;
};
