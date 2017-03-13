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
    row[i] = -1;
    col[i] = -1;
  }
  habitat = '?';
}

Cage::Cage(int s){
  size = s;
  row = new int[size];
  col = new int[size];
  a = new Animal*[size];
  for(int i=0; i<size; i++){
    row[i] = -1;
    col[i] = -1;
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

bool Cage::isFull() const{
  return getTotalAnimal() > getSize()*0.3;
}

void Cage::AddAnimal(const Animal * A){
  if (!isFull()){
    int i=0;
    bool stop = false;

    while ((i < size) && !stop){
      if ((row[i] == A->getRow()) && (col[i] == A->getCol()) && (a[i] != NULL)){
        a[i] = A->clone();
        stop = true;
      }else
        i++;
    }
  }
}

int Cage::countConsumedMeat(){
  int consume = 0;

  for(int i=0; i<size; i++){
    if (a[i] != 0){
      consume += 10; // TBD
    }
  }
}

int Cage::countConsumedVeggie(){
  int consume = 0;

  for(int i=0; i<size; i++){
    if (a[i] != 0){
      consume += 12; // TBD
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

Animal* Cage::operator[](int x){
  return a[x];
}
