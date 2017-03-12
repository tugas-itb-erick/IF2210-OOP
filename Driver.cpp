#include <iostream>
#include <fstream>
#include "zoo/Zoo.h"
using namespace std;
/*
class Driver {

};*/

int main(){
  ifstream f1, f2, f3;

  f1.open("zoo.txt");
  f2.open("cage.txt");
  f3.open("animal.txt");

  Zoo z1(1,2);

  f1 >> z1;
  cout << z1;

  f1.close();
  f2.close();
  f3.close();

  return 0;
}
