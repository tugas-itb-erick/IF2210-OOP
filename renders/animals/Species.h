/* NIM/Nama  : 13515144 / William 	*/
/* File      : Species.h            */

#pragma once

#include <iostream>
#include <string>
#include "LandAnimal.h"
#include "FlyingAnimal.h"
#include "WaterAnimal.h"
#include "../Renderable.h"
#include "../../taxonomy/taxonomy.h"
#include "../../diet/diet.h"
using namespace std;

class Elephant : public LandAnimal, public Herbivore, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Elephant(std::string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param E objek yang akan disalin
	  */
	Elephant(const Elephant& E);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param E objek yang akan disalin
	  */
	Elephant& operator=(const Elephant& E);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Elephant* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
	//virtual int countConsumedMeat();
	//virtual int countConsumedVeggie();
};

class Giraffe : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Giraffe(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param G objek yang akan disalin
	  */
	Giraffe(const Giraffe& G);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param G objek yang akan disalin
	  */
	Giraffe& operator=(const Giraffe& G);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
		/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Giraffe* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();

};

class Lion : public Carnivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Lion(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param L objek yang akan disalin
	  */
	Lion(const Lion& L);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param L objek yang akan disalin
	  */
	Lion& operator=(const Lion& L);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Lion* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Tiger : public Carnivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Tiger(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param T objek yang akan disalin
	  */
	Tiger(const Tiger& T);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param T objek yang akan disalin
	  */
	Tiger& operator=(const Tiger& T);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Tiger* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Orangutan : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Orangutan(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param O objek yang akan disalin
	  */
	Orangutan(const Orangutan& O);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param O objek yang akan disalin
	  */
	Orangutan& operator=(const Orangutan& O);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Orangutan* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Chimpanzee : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Chimpanzee(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param C objek yang akan disalin
	  */
	Chimpanzee(const Chimpanzee& C);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param C objek yang akan disalin
	  */
	Chimpanzee& operator=(const Chimpanzee& C);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Chimpanzee* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Komodo : public Carnivore, public LandAnimal, public Reptilia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Komodo(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param K objek yang akan disalin
	  */
	Komodo(const Komodo& K);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param K objek yang akan disalin
	  */
	Komodo& operator=(const Komodo& K);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Komodo* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Bear : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bear(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param B objek yang akan disalin
	  */
	Bear(const Bear& B);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param B objek yang akan disalin
	  */
	Bear& operator=(const Bear& B);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Bear* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Whale : public Carnivore, public WaterAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Whale(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param W objek yang akan disalin
	  */
	Whale(const Whale& W);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param W objek yang akan disalin
	  */
	Whale& operator=(const Whale& W);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Whale* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Dolphin : public Carnivore, public WaterAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Dolphin(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param D objek yang akan disalin
	  */
	Dolphin(const Dolphin& D);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param D objek yang akan disalin
	  */
	Dolphin& operator=(const Dolphin& D);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Dolphin* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Clownfish : public Omnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Clownfish(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param C objek yang akan disalin
	  */
	Clownfish(const Clownfish& C);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param C objek yang akan disalin
	  */
	Clownfish& operator=(const Clownfish& C);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Clownfish* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class BlueTang : public Omnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	BlueTang(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param B objek yang akan disalin
	  */
	BlueTang(const BlueTang& B);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param B objek yang akan disalin
	  */
	BlueTang& operator=(const BlueTang& B);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual BlueTang* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Piranha : public Carnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Piranha(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param P objek yang akan disalin
	  */
	Piranha(const Piranha& P);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param P objek yang akan disalin
	  */
	Piranha& operator=(const Piranha& P);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Piranha* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class PuffFish : public Omnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	PuffFish(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param P objek yang akan disalin
	  */
	PuffFish(const PuffFish& P);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param P objek yang akan disalin
	  */
	PuffFish& operator=(const PuffFish& P);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual PuffFish* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Eagle : public Carnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Eagle(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param E objek yang akan disalin
	  */
	Eagle(const Eagle& E);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param E objek yang akan disalin
	  */
	Eagle& operator=(const Eagle& E);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Eagle* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Cendrawasih : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cendrawasih(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param C objek yang akan disalin
	  */
	Cendrawasih(const Cendrawasih& C);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param C objek yang akan disalin
	  */
	Cendrawasih& operator=(const Cendrawasih& C);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Cendrawasih* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Owl : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Owl(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param O objek yang akan disalin
	  */
	Owl(const Owl& O);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param O objek yang akan disalin
	  */
	Owl& operator=(const Owl& O);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Owl* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Bat : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bat(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param B objek yang akan disalin
	  */
	Bat(const Bat& B);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param B objek yang akan disalin
	  */
	Bat& operator=(const Bat& B);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Bat* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Macau : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Macau(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param M objek yang akan disalin
	  */
	Macau(const Macau& M);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param M objek yang akan disalin
	  */
	Macau& operator=(const Macau& M);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Macau* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Cockatoo : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cockatoo(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param C objek yang akan disalin
	  */
	Cockatoo(const Cockatoo& C);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param C objek yang akan disalin
	  */
	Cockatoo& operator=(const Cockatoo& C);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Cockatoo* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Frog : public Carnivore, public WaterAnimal, public LandAnimal, public Amphibia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Frog(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param F objek yang akan disalin
	  */
	Frog(const Frog& F);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param F objek yang akan disalin
	  */
	Frog& operator=(const Frog& F);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Frog* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Alligator : public Carnivore, public WaterAnimal, public LandAnimal, public Reptilia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Alligator(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param A objek yang akan disalin
	  */
	Alligator(const Alligator& A);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param A objek yang akan disalin
	  */
	Alligator& operator=(const Alligator& A);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Alligator* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Hippopotamus : public Herbivore, public WaterAnimal, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Hippopotamus(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param H objek yang akan disalin
	  */
	Hippopotamus(const Hippopotamus& H);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param H objek yang akan disalin
	  */
	Hippopotamus& operator=(const Hippopotamus& H);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Hippopotamus* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};

class Turtle : public Omnivore, public WaterAnimal, public LandAnimal, public Reptilia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Turtle(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief Copy Consructor.
	  * @param T objek yang akan disalin
	  */
	Turtle(const Turtle& T);
	/** @brief Operator=.
		* Melakukan assignment pada objek
	  * @param T objek yang akan disalin
	  */
	Turtle& operator=(const Turtle& T);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	virtual void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Turtle* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	virtual char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	virtual Color getColor();
  //virtual int countConsumedMeat();
  //virtual int countConsumedVeggie();
};
