/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.cpp                */

#include <iostream>
#include <vector>
#include <cctype>
#include "Cage.h"
using namespace std;

Cage::Cage(){
  size = 10;
  row = new int[size];
  col = new int[size];
  a = new Animal*[size];
  for(int i=0; i<size; i++){
    row[i] = 0;
    col[i] = 0;
  }
  habitat = '?';
}

Cage::Cage(int s){
  size = s;
  row = new int[size];
  col = new int[size];
  a = new Animal*[size];
  for(int i=0; i<size; i++){
    row[i] = 0;
    col[i] = 0;
  }
  habitat = '?';
}

Cage::Cage(const Cage& C){
  size = C.size;
  row = new int[size];
  col = new int[size];
  a = new Animal*[size];
  for(int i=0; i<size; i++){
    row[i] = C.row[i];
    col[i] = C.col[i];
    if (C.a[i] != 0)
      a[i] = C.a[i]->clone();
  }
  habitat = C.habitat;
}

Cage::~Cage(){
  delete [] row;
  delete [] col;
  delete [] a;
}

Cage& Cage::operator=(const Cage& C){
  if (this != &C){
    // delete
    delete [] row;
    delete [] col;
    delete [] a;

    // assign
    size = C.size;
    row = new int[size];
    col = new int[size];
    a = new Animal*[size];
    for(int i=0; i<size; i++){
      row[i] = C.row[i];
      col[i] = C.col[i];
//      if (C.a[i] != 0)
//        a[i] = C.a[i]->clone();
    }
    habitat = C.habitat;
  }
  return *this;
}

int Cage::getSize() const{
  return size;
}

int Cage::getTotalAnimal() const{
  int count = 0;

  for(int i=0; i<size; i++){
    if (a[i] != NULL)
      ++count;
  }
  return count;
}

int * Cage::getRow() const{
  return row;
}

int * Cage::getCol() const{
  return col;
}

char Cage::getHabitat() const{
  return habitat;
}

Animal* Cage::getAnimal(int x) const{
  return a[x];
}

bool Cage::isFull() const{
  return getTotalAnimal() > getSize()*0.3;
}

void Cage::AddAnimal(const Animal * A){
  if (!isFull()){
    int i=0;

    while ((i < size) && (a[i] != 0))
      i++;

    a[i] = A->clone();

  }
}

void Cage::Move(){
  int i = 0;
  int minx=row[0], miny=col[0], maxx=row[0], maxy=col[0];
  for(i=1; i<size; i++){
    if (row[i] < minx)
      minx = row[i];
    if (row[i] > maxx)
      maxx = row[i];

    if (col[i] < miny)
      miny = col[i];
    if (col[i] > maxy)
      maxy = col[i];
  }

  while ((i<size) && (a[i] != 0)){
    int rd = rand()%5;
    switch (rd){ // 1-up, 2-right, 3-down, 4-left
      case 0: break;

      case 1:
      if (a[i]->getRow()-1 >= minx)
        a[i]->setRow(a[i]->getRow()-1);
      break;

      case 2:
      if (a[i]->getCol()+1 <= maxy)
        a[i]->setCol(a[i]->getCol()+1);
      break;

      case 3:
      if (a[i]->getRow()+1 <= maxx)
        a[i]->setRow(a[i]->getRow()+1);
      break;

      case 4:
      if (a[i]->getCol()-1 >= miny)
        a[i]->setCol(a[i]->getCol()-1);
      break;
    }

    i++;
  }


}

int Cage::countConsumedMeat(){
  int consume = 0;

  for(int i=0; i<size; i++){
    if (a[i] != 0){
      consume += 10; // tbd a[i]->countConsumedMeat()
    }
  }
}

int Cage::countConsumedVeggie(){
  int consume = 0;

  for(int i=0; i<size; i++){
    if (a[i] != 0){
      consume += 12; // tbd a[i]->countConsumedVeggie()
    }
  }
}

char Cage::render(){
  return tolower(habitat);
}

Color Cage::getColor(){
  return WHITE;
}

void Cage::setHabitat(char c){
  habitat = c;
}

istream& operator>>(istream& in, Cage& C){
  char c;
  vector<int> vb, vk;
  int _b, _k;

  do {
    in >> _b >> _k;
    vb.push_back(_b);
    vk.push_back(_k);
    in >> c;
  } while (c != '*');

  Cage temp(vb.size());
  for(int i=0; i<(int)vb.size(); i++){
    temp.getRow()[i] = vb[i];
    temp.getCol()[i] = vk[i];
  }

  C = temp;

  return in;
}

bool Cage::Search(int r, int c){
  bool found=false;
  while ((i<size)&&!found){
    if ((row[i]==r) && (col[i]==c))
      found=true;
    else
      i++;
  }
  return found;
}