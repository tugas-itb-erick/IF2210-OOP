/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */

#pragma once

#include "../Renderable.h"
#include "../../diet/diet.h"
#include "../../taxonomy/taxonomy.h"
#include "../../other/Sex.h"
#include <iostream>
#include <string>
using namespace std;

class Animal : public Renderable{
public:
  /** @brief Constructor
  */
  Animal();

  /** @brief Constructor
  * @param _name nama binatang
  * @param _weight berat binatang
  * @param _s jenis kelamin
  */
  Animal(string _name, double _weight, Sex _s, int _r, int _c,char _id, Color _color);

  /** @brief Copy Constructor
  * @param Animal A yang ingin disalin.
  */
  Animal(const Animal& A);

  /** @brief Destructor.
    */
  virtual ~Animal();

  /** @brief Operator=
    * Menjamin bukan bitwise copy.
    * @return Animal yang sudah di assign nilai dari current object.
    */
  Animal& operator=(const Animal& A);

  /** @brief Menampilkan experience yang dialami pengamat dengan hewan.
    */
  virtual void interact() = 0;

  /** @brief Menghitung jumlah daging yang dikonsumsi
    * @return jumlah daging yang dikonsumsi
    */
  virtual double countConsumedMeat() = 0;

  /** @brief Menghitung jumlah tumbuhan yang dikonsumsi
    * @return jumlah tumbuhan yang dikonsumsi
    */
  virtual double countConsumedVeggie() = 0;

  /** @brief Mengembalikan jumlah baris
    * @return jumlah baris
    */
  int getRow() const;

  /** @brief Mengembalikan jumlah kolom
    * @return jumlah kolom
    */
  int getCol() const;

  /** @brief Mengembalikan berat hewan
    * @return berat hewan
    */
  double getWeight() const;

  /** @brief getName
    * Mengembalikan nama hewan
    * @return nama hewan
    */
  string getName() const;

  /** @brief Mengembalikan jenis kelamin hewan
    * @return jenis kelamin hewan
    */
  Sex getSex() const;

  /** @brief Mengatur posisi baris hewan
    * @param posisi baris
    */
  void setRow(int r);

  /** @brief Mengatur posisi kolom hewan
    * @param posisi kolom
    */
  void setCol(int c);

  /** @brief Mengatur berat hewan
      * @param berat hewan
      */  
  void setWeight(double w);

  /** @brief Mengatur nama hewan
    * @param nama hewan
    */
  void setName(string n);

  /** @brief Mengatur jenis kelamin hewan
    * @param jenis kelamin
    */
  void setSex(Sex ns);

  /** @brief Operator>>
    * @param in stream input
    * @param &A binatang yang ingin ditambahkan
    */
  friend istream& operator>>(istream& in, Animal* &A);

  /** @brief Menduplikasi Animal tanpa terjadi bitwise copy
     * @return Animal yang sudah diduplikasi.
     */
  virtual Animal* clone() const = 0;

  /** @brief operator<<
    * Mencetak informasi dari hewan
    * @param os stream output
    * @return stream output
     */
  ostream& operator<< (ostream& os);

protected:
  string name;
  double weight;
  Sex s;
  int row;
  int col;
};
