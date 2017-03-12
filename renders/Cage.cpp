/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.cpp                */

#include <iostream>
#include <vector>
#include "Cage.h"
using namespace std;

Cage::Cage(){
  size = 0;
  h = 0;
}

Cage::Cage(int s){
  size = s;
  row = new int[s];
  col = new int[s];
  a = new Animal*[s];
  h = 0;
}

Cage::Cage(const Cage& C){
  size = C.size;

}

Cage::~Cage(){
  delete [] b;
  delete [] k;
  for(int i=0; i<size; i++)
    delete [] a[i];
  delete [] a;
  delete h;
}

Cage& Cage::operator=(const Cage& C){
  if (this != &C){

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

bool Cage::isFull() const{
  return getAnimal() > getSize()*0.3;
}

void Cage::AddAnimal(const Animal * A){
  if (!isFull()){
    int i=0;
    while (a[i] != NULL)
      i++;
    // a[i] = A.clone();
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
  return h->render();
}

Color Cage::getColor(){
  return h->getColor();
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

}

Animal* Cage::operator[](int x);
  return a[x];
}
