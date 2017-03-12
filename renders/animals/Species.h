/* NIM/Nama  : 13515144 / William 	*/
/* File      : Species.h            */

#pragma once

#include "LandAnimal.h"
#include "FlyingAnimal.h"
#include "WaterAnimal.h"
#include "../Renderable.h"
#include "../../taxonomy/taxonomy.h"
#include "../../diet/diet.h"
using namespace std;

class Elephant : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Elephant(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Elephant* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();

};

class Giraffe : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Giraffe(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
		/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Giraffe* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();

};

class Lion : public Carnivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Lion(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Lion* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Tiger : public Carnivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Tiger(string _name, double _weight, Sex _s, int _r, int _c);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Tiger* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Orangutan : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Orangutan(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Orangutan* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Chimpanzee : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Chimpanzee(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Chimpanzee* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Komodo : public Carnivore, public LandAnimal, public Reptilia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Komodo(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Komodo* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Bear : public Herbivore, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bear(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Bear* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Whale : public Carnivore, public WaterAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Whale(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Whale* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Dolphin : public Carnivore, public WaterAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Dolphin(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Dolphin* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Clownfish : public Omnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Clownfish(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Clownfish* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class BlueTang : public Omnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	BlueTang(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual BlueTang* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Piranha : public Carnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Piranha(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Piranha* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class PuffFish : public Omnivore, public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	PuffFish(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual PuffFish* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Eagle : public Carnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Eagle(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Eagle* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Cendrawasih : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cendrawasih(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Cendrawasih* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Owl : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Owl(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Owl* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Bat : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bat(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Bat* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Macau : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Macau(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Macau* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Cockatoo : public Omnivore, public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cockatoo(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Cockatoo* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Frog : public Carnivore, public WaterAnimal, public LandAnimal, public Amphibia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Frog(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Frog* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Alligator : public Carnivore, public WaterAnimal, public LandAnimal, public Reptilia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Alligator(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Alligator* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Hippopotamus : public Herbivore, public WaterAnimal, public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Hippopotamus(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Hippopotamus* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};

class Turtle : public Omnivore, public WaterAnimal, public LandAnimal, public Reptilia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Turtle(string _name, double _weight, Sex _s, int _r, int _c);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
	/** @brief clone
	* Menduplikat diri sendiri
	* @return value object hasil kloning
    */
	virtual Turtle* clone() const;
	/** @brief render
	* Mengembalikan karakter id tiap hewan
	* @return karakter tiap hewan
	*/
	char render();
	/** @brief getColor
	* Mengembalikan warna dari hewan
	* @return warna cetak hewan
	*/
	Color getColor();
};
