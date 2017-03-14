#include <iostream>
#include <string>
#include "Color.h"
using namespace std;

void printColor(char k, Color c){
	string s(1,k);
	switch(c){
		case RED    : printf(KRED "%c" RST, k); break;
		case YELLOW : printf(KYEL "%c" RST, k); break;
		case GREEN  : printf(KGRN "%c" RST, k); break;
		case BLUE   : printf(KBLU "%c" RST, k); break;
		case MAGENTA: printf(KMAG "%c" RST, k); break;
		case CYAN   : printf(KCYN "%c" RST, k); break;
		case WHITE  : printf(KWHT "%c" RST, k); break;
	}
}
