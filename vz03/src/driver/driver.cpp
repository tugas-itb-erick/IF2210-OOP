#include <iostream>
#include <fstream>
#include "driver.h"
using namespace std;

void Driver::ShowMenu(){
  cout << "Selamat datang di Kebun Binatang Virtual Zoo!" << endl;
  cout << "1. Menampilkan peta Kebun Binatang" << endl;
  cout << "2. Menampilkan seluruh peta pada Kebun Binatang" << endl;
  cout << "3. Menampilkan total makanan yang dimakan seluruh hewan" << endl;
  cout << "4. Tour Kebun Binatang!" << endl;
  cout << "5. Quit" << endl;
  cout << "Pilih angka 1..5 :";
}
void Driver::ActivateTour(Zoo &Z){
  Z.Tour();
}
void Driver::PrintZoo(Zoo &Z, int x1, int y1, int x2, int y2){
  Z.display(x1, y1, x2, y2);
}
void Driver::PrintZooAll(Zoo &Z){
  Z.display();
}
void Driver::PrintFood(Zoo &Z){
  Z.showFood();
}
void Driver::InputZoo(Zoo &Z){
  ifstream in1, in2, in3;
  in1.open("zoo.txt");
  in2.open("cage.txt");
  in3.open("animal.txt");
  Z.readAll(in1, in2, in3);
  in1.close();
  in2.close();
  in3.close();
}
