#include <iostream>
#include <fstream>
#include "Driver.h"
using namespace std;

int main(){
  Zoo z;
  int n;

  Driver::ShowInputOpt();
  do{
    cin >> n;
  }while ((n < 1) || (n > 2));
  if (n == 1)
    Driver::InputZoo(z);
  else
    Driver::InputZoo(z, cin, cin, cin);

  do{
    cout << endl;
    Driver::ShowMenu();
    cin >> n;
    switch (n) {
      case 1:
        cout << "Input angka x1 y1 x2 y2 : ";
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        Driver::PrintZoo(z, x1, y1, x2, y2);
        break;
      case 2:
        Driver::PrintZooWithAnimal(z);
        break;
      case 3:
        Driver::PrintFood(z);
        break;
      case 4:
        Driver::ActivateTour(z);
        break;
      case 5:
        break;
    }
  }while(n != 5);

  return 0;
}
