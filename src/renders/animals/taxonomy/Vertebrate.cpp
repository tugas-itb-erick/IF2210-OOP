/* NIM/Nama  : 13515144 / William   */
/* File      : Vertebrate.h         */

#include "Vertebrate.h"

Vertebrate::Vertebrate(char b, int h): bloodTemp(b), heartChamber(h){
}

char Vertebrate::getBloodTemp() const {
	return bloodTemp;
}

int Vertebrate::getHeartChamber() const {
	return heartChamber;
}