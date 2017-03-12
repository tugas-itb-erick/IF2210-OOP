/* NIM/Nama  : 13515144 / William   */
/* File      : Vertebrate.h         */

#pragma once

class Vertebrate {
public:
	Vertebrate();
	//..
	char getBloodTemp() const = 0;
	int heartChamber() const = 0;

protected:
	const char bloodTemp; // {'h','c'}
	const int heartChamber; // {2,3,4}
	//const alat pernapasan; {paru, insang}
}
