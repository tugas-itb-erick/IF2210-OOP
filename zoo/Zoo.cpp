/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo.cpp                 */

#include <iostream>
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
}

Zoo::~Zoo(){
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      delete c[i][j];
    }
    delete [] c[i];
  }
  delete [] c;

  delete [] cg;
}

Zoo& Zoo::operator=(const Zoo& Z){
  if (this != &Z){
    // delete
    for(int i=0; i<row; i++){
      for(int j=0; j<col; j++){
        delete c[i][j];
      }
      delete [] c[i];
    }
    delete [] c;

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
      Z.c[i][j]->render();
      os << " ";
    }
    os << endl;
  }
  return os;
}

void Zoo::print(int x1, int y1, int x2, int y2){
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      c[i][j]->render();
    }
    cout << endl;
  }
}

void Zoo::readAll(istream& fzoo, istream& fcg, istream& fanim){
  fzoo >> (*this);
  fcg
}
