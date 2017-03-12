/* NIM/Nama  : 13515144 / William 	*/
/* File      : Species.h            */

#pragma once

#include "Diet.h"
#include "Taxonomy.h"
#include "Animal.h"

class Elephant : public Herbivore, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Elephant(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};


class Giraffe : public Herbivore, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Giraffe(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Lion : public Carnivore, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Lion(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Tiger : public Carnivore, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Tiger(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Orangutan : public Herbivore, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Orangutan(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Chimpanzee : public Herbivore, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Chimpanzee(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Komodo : public Carnivore, public LandAnimal, public Reptilia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Komodo(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Bear : public Herbivore, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bear(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Whale : public Carnivore, public WaterAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Whale(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Dolphin : public Carnivore, public WaterAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Dolphin(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class ClownFish : public Omnivore, public WaterAnimal, public Pisces {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	ClownFish(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class BlueTang : public Omnivore, public WaterAnimal, public Pisces {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	BlueTang(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Piranha : public Carnivore, public WaterAnimal, public Pisces {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Piranha(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class PuffFish : public Omnivore, public WaterAnimal, public Pisces {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	PuffFish(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Eagle : public Carnivore, public FlyingAnimal, public Aves {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Eagle(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Cendrawasih : public Omnivore, public FlyingAnimal, public Aves {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cendrawasih(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Owl : public Omnivore, public FlyingAnimal, public Aves {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Owl(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Bat : public Omnivore, public FlyingAnimal, public Aves {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bat(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Macau : public Omnivore, public FlyingAnimal, public Aves {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Macau(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Cockatoo : public Omnivore, public FlyingAnimal, public Aves {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cockatoo(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Frog : public Carnivore, public WaterAnimal, public LandAnimal, public Amphibia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Frog(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Alligator : public Carnivore, public WaterAnimal, public LandAnimal, public Reptilia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Alligator(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Hippopotamus : public Herbivore, public WaterAnimal, public LandAnimal, public Mammalia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Hippopotamus(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Turtle : public Omnivore, public WaterAnimal, public LandAnimal, public Reptilia {
public:	
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Turtle(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
}
