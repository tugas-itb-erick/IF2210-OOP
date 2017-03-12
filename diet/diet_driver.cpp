#include <iostream>
#include "diet.h"
using namespace std;

int main(){
  Carnivore a;
  Herbivore b;
  Omnivore c;

  cout << "a: " << a.getMeatRatio() << " " << a.getVegRatio() << endl;
  cout << "b: " << b.getMeatRatio() << " " << b.getVegRatio() << endl;
  cout << "c: " << c.getMeatRatio() << " " << c.getVegRatio() << endl;

  return 0;
}
