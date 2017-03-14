/* NIM/Nama  : 13515144 / William   */
/* File      : Vertebrate.h         */

#pragma once

/** @class Vertebrate
  * Kelas taksonomi untuk hewan bertulang belakang(vertebrata),mencakup mamalia, aves, pisces, amphibia, reptilia
  */
class Vertebrate {
public:
	/** @brief Constructor
	* @param b temperatur tubuh {hot,cold}
	* @param h jumlah ruang jantung {2,3,4}
	*/
	Vertebrate(char b, int h);
	/** @brief getBloodTemp()
	* Mengembalikan temperatur tubuh hewan (hot/cold)
	* @return temperatur tubuh hewan {'h','c'}
	*/
	virtual char getBloodTemp() const;
	/** @brief getHeartChamber()
	* Mengembalikan ruang jantung hewan
	* @return ruang jantung hewan {2,3,4}
	*/
	virtual int getHeartChamber() const;

protected:
	const char bloodTemp; // {'h','c'}
	const int heartChamber; // {2,3,4}
	//const alat pernapasan; {paru, insang}
};
