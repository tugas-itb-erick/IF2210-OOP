/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */

#pragma once

#include "../Renderable.h"
#include "../../diet/diet.h"
#include "../../taxonomy/taxonomy.h"
#include "../../other/Sex.h"
#include <iostream>
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

	/** @brief Interact
	  * Menampilkan experience yang dialami pengamat dengan hewan.
	  */
	virtual void interact() = 0;

	int getRow() const;
	int getCol() const;
	double getWeight() const;
	string getName() const;
	Sex getSex() const;

	void setRow(int r);
	void setCol(int c);
	void setWeight(double w);
	void setName(string n);
	void setSex(Sex ns);

	friend istream& operator>>(istream& in, Animal* A);

	/** @brief clone.
     * Menduplikasi Animal tanpa terjadi bitwise copy
     * @return Animal yang sudah diduplikasi.
     */
  virtual Animal* clone() const = 0;

protected:
	string name;
	double weight;
	Sex s;
	int row;
	int col;
};
