/* NIM/Nama  : 13515144 / William 	*/
/* File      : Species.h            */

#pragma once

#include "LandAnimal.h"
#include "FlyingAnimal.h"
#include "WaterAnimal.h"
#include "Renderable.h"
#include "Vertebrate.h"
#include "Mammalia.h"
#include "Aves.h"
#include "Amphibia.h"
#include "Reptilia.h"
#include "Pisces.h"


using namespace std;

class Elephant :public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Elephant(string _name, double _weight, Sex _s);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Giraffe : public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Giraffe(string _name, double _weight, Sex _s);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Lion : public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Lion(string _name, double _weight, Sex _s);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Tiger : public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Tiger(string _name, double _weight, Sex _s);
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Orangutan : public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Orangutan(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Chimpanzee : public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Chimpanzee(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Komodo : public LandAnimal, public Reptilia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Komodo(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Bear : public LandAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bear(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Whale : public WaterAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Whale(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Dolphin : public WaterAnimal, public Mammalia {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Dolphin(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Clownfish : public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Clownfish(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class BlueTang : public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	BlueTang(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Piranha : public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Piranha(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class PuffFish : public WaterAnimal, public Pisces {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	PuffFish(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Eagle : public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Eagle(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Cendrawasih : public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cendrawasih(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Owl : public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Owl(string _name, double _weight, Sex _s);	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Bat : public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Bat(string _name, double _weight, Sex _s);	
	
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Macau : public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Macau(string _name, double _weight, Sex _s);	
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};

class Cockatoo : public FlyingAnimal, public Aves {
public:
	/** @brief Consructor.
	  * @param _name nama binatang
	  * @param _weight berat
	  * @param _s jenis kelamin
	  */
	Cockatoo(string _name, double _weight, Sex _s);	
	/** @brief interact.
	  * Menampilkan interaksi hewan ke layar
	  */
	void interact();
};
