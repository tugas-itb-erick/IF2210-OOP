/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo.cpp                 */

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include "Zoo.h"
using namespace std;

Zoo::Zoo(){
  row = defRow;
  col = defCol;
  c = new Cell**[row];
  for(int i=0; i<row; i++){
    c[i] = new Cell*[col];
    for(int j=0; j<col; j++){
      c[i][j] = NULL;
    }
  }
  cg = new Cage[row*col];
  ncage = 0;
}

Zoo::Zoo(int _r, int _c){
  row = _r;
  col = _c;
  c = new Cell**[row];
  for(int i=0; i<row; i++){
    c[i] = new Cell*[col];
    for(int j=0; j<col; j++){
      c[i][j] = NULL;
    }
  }
  cg = new Cage[row*col];
  ncage = 0;
}

Zoo::Zoo(const Zoo& Z){
  row = Z.row;
  col = Z.col;
  c = new Cell**[row];
  for(int i=0; i<row; i++){
    c[i] = new Cell*[col];
    for(int j=0; j<col; j++){
      c[i][j] = Z.c[i][j]->clone();
    }
  }
  cg = new Cage[row*col];
  ncage = Z.ncage;
}

Zoo::~Zoo(){
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if (c[i][j] != NULL) delete c[i][j];
    }
    if (c[i] != NULL) delete [] c[i];
  }
  if (c != NULL) delete [] c;
}

Zoo& Zoo::operator=(const Zoo& Z){
  if (this != &Z){
    // delete
    for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){
        if (c[i][j] != 0) delete c[i][j];
      }
      if (c[i] != 0) delete [] c[i];
    }
    if (c != 0) delete [] c;
    if (cg != 0) delete [] cg;

    // assign
    row = Z.row;
    col = Z.col;

    c = new Cell**[row];
    for(int i=0; i<row; i++){
      c[i] = new Cell*[col];
      for(int j=0; j<col; j++){
        c[i][j] = Z.c[i][j]->clone();
      }
    }
    cg = new Cage[row*col];
    ncage = Z.ncage;
  }

  return *this;
}

void Zoo::AddCage(Cage& C){
  if (C.getSize() > 0){
    bool valid = true;
    int i = 0;

    while ((i < C.getSize()) && valid){
      if ((C.getRow()[i] < 0) || (C.getCol()[i] < 0))
        valid = false;
      else{
        int j = 0;
        while ((j < ncage) && valid){
          int k = 0;
          while ((k < cg[j].getSize()) && valid){
            if ((C.getRow()[i] == cg[j].getRow()[k]) && (C.getCol()[i] == cg[j].getCol()[k]))
              valid = false;
            else
              k++;
          }
          j++;
        }
      }
      i++;
    }

    if (valid){
      i = 0;
      while ((i<row*col) && (cg[i].getHabitat() != '?'))
        i++;
      if (i<row*col){
        cg[i] = C;
        ++ncage;
      }
    }
  }

}

istream& operator>>(istream& in, Zoo& Z){
  int r, c;
  char k;

  in >> r >> c;
  Zoo input(r, c);

  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      in >> k;
      switch (k){
        case 'W' : input[i][j] = new WaterHabitat(); break;
        case 'A' : input[i][j] = new AirHabitat(); break;
        case 'L' : input[i][j] = new LandHabitat(); break;
        case '*' : input[i][j] = new Park(); break;
        case 'R' : input[i][j] = new Restaurant(); break;
        case '-' : input[i][j] = new Road(); break;
        case 'i' : input[i][j] = new Entrance(); break;
        case 'o' : input[i][j] = new Exit(); break;
      }
    }
  }

  Z = input;
  return in;
}

ostream& operator<<(ostream& os, const Zoo& Z){
  for(int i=0; i<Z.row; i++){
    for(int j=0; j<Z.col; j++){
      if (Z.c[i][j] != 0){
        os << Z.c[i][j]->render();
      }else{
        os << '0';
      }
      os << " ";
    }
    os << endl;
  }
  return os;
}

void Zoo::display(int x1, int y1, int x2, int y2){
  if ((x1 < 0) || (x2 >= row) || (y1 < 0) || (y2 >=col) || (x1 > x2) || (y1 > y2)){
    cout << "Indeks posisi zoo tidak boleh negatif atau lebih besar dari ukuran sebenarnya." << endl;
  }
  else{
    for(int i=x1; i<=x2; i++){
      for(int j=y1; j<=y2; j++){
        int k = 0;
        bool found = false;

        // search cage
        while ((k < ncage) && !found){
          int l = 0;
          while ((l < cg[k].getSize()) && !found){
            if ((cg[k].getRow()[l] == i) && (cg[k].getCol()[l] == j)){
              found = true;

              // search animal
              int i2 = 0;
              bool found2 = false;
              while ((i2 < cg[k].getSize()) && !found2){
                if (cg[k].getAnimal(i2) == 0)
                  break;
                else{
                  if ((cg[k].getAnimal(i2)->getRow() == i) && (cg[k].getAnimal(i2)->getCol() == j))
                    found2 = true;
                  else
                    i2++;
                }
              }

              if (found2){
                printColor(cg[k].getAnimal(i2)->render(), cg[k].getAnimal(i2)->getColor());
              }else{
                printColor(cg[k].render(), cg[k].getColor());
              }

            }
            ++l;
          }
          ++k;
        }
        if (!found){
          cout << c[i][j]->render();
        }
        cout << " ";
      }
      cout << endl;
    }
  }
}

void Zoo::display(){
  Zoo::display(0, 0, row-1, col-1);
}

void Zoo::Tour(){
  bool found = false;
  int xen, yen, xex, yex;

  /* Get Random Entrance n Exit
  while (!found){
    int x = rand()%row;
    int y = rand()%col;
    int choice = rand()%4;
    if (choice == 0){
      if (c[x][0]->render() == 'i'){
        found = true;
        xen = x;
        yen = 0;
      }
    }else if (choice == 1){
      if (c[x][col-1]->render() == 'i'){
        found = true;
        xen = x;
        yen = col-1;
      }
    }else if (choice == 2){
      if (c[0][y]->render() == 'i'){
        found = true;
        xen = 0;
        yen = y;
      }
    }else{
      if (c[row-1][y]->render() == 'i'){
        found = true;
        xen = row-1;
        yen = y;
      }
    }
  }

  // Get Exit
  found = false;
  while (!found){
    int x = rand()%row;
    int y = rand()%col;
    int choice = rand()%4;
    if (choice == 0){
      if (c[x][0]->render() == 'o'){
        found = true;
        xex = x;
        yex = 0;
      }
    }else if (choice == 1){
      if (c[x][col-1]->render() == 'o'){
        found = true;
        xex = x;
        yex = col-1;
      }
    }else if (choice == 2){
      if (c[0][y]->render() == 'o'){
        found = true;
        xex = 0;
        yex = y;
      }
    }else{
      if (c[row-1][y]->render() == 'o'){
        found = true;
        xex = row-1;
        yex = y;
      }
    }
  }
  */

  // Non Randomized Entrance Exit for testcases
  int i = 0;
  while ((i<row) && !found){
    int j = 0;
    while ((j<col) && !found){
      if (c[i][j]->render() == 'i'){
        found = true;
        xen = i;
        yen = j;
      }else
        j++;
    }
    i++;
  }

  i = 0;
  found = false;
  while ((i<row) && !found){
    int j = 0;
    while ((j<col) && !found){
      if (c[i][j]->render() == 'o'){
        found = true;
        xex = i;
        yex = j;
      }else
        j++;
    }
    i++;
  }

  bool path[row][col];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if ((c[i][j]->render() == 'o') || (c[i][j]->render() == '-') || (c[i][j]->render() == 'i'))
        path[i][j] = true;
      else
        path[i][j] = false;
    }
  }

  i = xen;
  int j = yen; cout << xex << " " << yex << endl;
  while ((i != xex) || (j != yex)){
    path[i][j] = false;
    cout << "(" << i << "," << j << ") :" << endl;

    bool fcage = false;
    int icage = 0;
    while ((icage < ncage) && !fcage){
      if (cg[icage].SearchPos(i+1, j)){
        cg[icage].printInteract();
        fcage = true;
      }else{
        icage++;
      }
    }

    fcage = false;
    icage = 0;
    while ((icage < ncage) && !fcage){
      if (cg[icage].SearchPos(i-1, j)){
        cg[icage].printInteract();
        fcage = true;
      }else{
        icage++;
      }
    }

    fcage = false;
    icage = 0;
    while ((icage < ncage) && !fcage){
      if (cg[icage].SearchPos(i, j+1)){
        cg[icage].printInteract();
        fcage = true;
      }else{
        icage++;
      }
    }

    fcage = false;
    icage = 0;
    while ((icage < ncage) && !fcage){
      if (cg[icage].SearchPos(i, j-1)){
        cg[icage].printInteract();
        fcage = true;
      }else{
        icage++;
      }
    }

    if ((i+1<row) && path[i+1][j])
      i++;
    else if ((i-1>=0) && path[i-1][j])
      i--;
    else if ((j+1<col) && path[i][j+1])
      j++;
    else if ((j-1>=0) && path[i][j-1])
      j--;
    else
      break;
  }
}

void Zoo::showFood(){
  double countm = 0, countv = 0;
  for(int i=0; i<ncage; i++){
    countm += cg[i].countConsumedMeat();
    countv += cg[i].countConsumedVeggie();
  }
  cout << "Total Daging yang dikonsumsi: " << countm << endl;
  cout << "Total Sayur yang dikonsumsi: " << countv << endl;
}

void Zoo::readAll(istream& fzoo, istream& fcg, istream& fanim){
  int i, j;
  Cage b;
  vector<Animal*> av;
  Animal * ain = 0;

  // Read Zoo
  fzoo >> (*this);

  // Read Cages and Add them to Zoo
  while (fcg >> b){
    i = b.getRow()[0];
    j = b.getCol()[0];
    b.setHabitat(c[i][j]->render());
    Zoo::AddCage(b);
  }

  // Read All Animals
  while (fanim >> ain)
    av.push_back(ain);

  // Add Animal to Cages
  i = 0;
  for(i=0; i<(int)av.size(); i++){
    j = 0;
    bool found = false;
    while ((j < ncage) && (cg[j].getHabitat() != '?') && !found){
      int k = 0;
      while ((k < cg[j].getSize()) && !found){
        if ((cg[j].getRow()[k] == av[i]->getRow()) && (cg[j].getCol()[k] == av[i]->getCol()))
          found = true;
        else
          k++;
      }
      if (!found)
        j++;
    }
    if (found){
      cg[j].AddAnimal(av[i]);
    }

  }

  /*
  while ((i < ncage) && (cg[i].getHabitat() != '?')){
    for(j=0; j<(int)av.size(); j++){
      cg[i].AddAnimal(av[j]);
    }
    i++;
  }*/

}
