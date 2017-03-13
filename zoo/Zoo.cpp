/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo.cpp                 */

#include <iostream>
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
  }

  return *this;
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
        case '#' : input[i][j] = new WaterHabitat(); break;
        case 'O' : input[i][j] = new AirHabitat(); break;
        case 'X' : input[i][j] = new LandHabitat(); break;
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
      cout << Z.c[i][j]->render();
      os << " ";
    }
    os << endl;
  }
  return os;
}

void Zoo::print(int x1, int y1, int x2, int y2){
  if ((x1 < 0) || (x2 >= row) || (y1 < 0) || (y2 >=col) || (x1 > x2) || (y1 > y2)){
    cout << "Indeks posisi zoo menyalahi aturan." << endl;
  }
  else{
    for(int i=x1; i<=x2; i++){
      for(int j=y1; j<=y2; j++){
        int k = 0;
        bool found = false;
        while ((k < sizeof(cg)/sizeof(Cage)) && !found){
          int l = 0;
          while ((l < cg[k].getSize()) && !found){
            if ((cg[k].getRow()[l] == i) && (cg[k].getCol()[l] == j)){
              found = true;
              if (cg[k][l] != NULL){
                cout << cg[k][l]->render();
              }else{
                cout << cg[k].render();
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
    }
    cout << endl;
  }
}

void Zoo::AddCage(Cage& C){
  bool valid = true;
  int i = 0;

  if (C.getSize() > 0){
    while ((i < C.getSize()) && valid){
      if ((C.getRow()[i] < 0) || (C.getCol()[i] < 0))
        valid = false;
      else{
        int j = 0;
        while ((j < sizeof(cg)/sizeof(Cage)) && valid){
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
      if (i<row*col)
        cg[i] = C;
    }
  }

  else {
    valid = false;
  }


}

void Zoo::readAll(istream& fzoo, istream& fcg, istream& fanim){
  char a;
  int i, j;
  Cage b;
  vector<Animal*> av;
  Animal * ain;

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
  while ((i<sizeof(cg)/sizeof(Cage)) && (cg[i].getHabitat() != '?')){
    for(j=0; j<(int)av.size(); j++){
      cg[i].AddAnimal(av[i]);
    }
    i++;
  }

}
