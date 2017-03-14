/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.cpp                */

#include <iostream>
#include <vector>
#include <cctype>
#include "Cage.h"
using namespace std;

Cage::Cage(){
  size = 10;
  animal = 0;
  row = new int[size];
  col = new int[size];
  a = new Animal*[size];
  for(int i=0; i<size; i++){
    a[i] = 0;
    row[i] = 0;
    col[i] = 0;
  }
  habitat = '?';
}

Cage::Cage(int s){
  size = s;
  animal = 0;
  row = new int[size];
  col = new int[size];
  a = new Animal*[size];
  for(int i=0; i<size; i++){
    a[i] = 0;
    row[i] = 0;
    col[i] = 0;
  }
  habitat = '?';
}

Cage::Cage(const Cage& C){
  size = C.size;
  animal = 0;
  row = new int[size];
  col = new int[size];
  a = new Animal*[size];
  for(int i=0; i<size; i++){
    row[i] = C.row[i];
    col[i] = C.col[i];
    if (C.a[i] != 0)
      a[i] = C.a[i]->clone();
    else
      a[i] = 0;
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
    animal = C.animal;
    row = new int[size];
    col = new int[size];
    a = new Animal*[size];
    for(int i=0; i<size; i++){
      row[i] = C.row[i];
      col[i] = C.col[i];
      /*if (C.a[i] != 0)
        a[i] = C.a[i]->clone();
      else
        a[i] = 0;*/
    }
    habitat = C.habitat;
  }
  return *this;
}

int Cage::getSize() const{
  return size;
}

int Cage::getTotalAnimal() const{
  return animal;
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
  return animal > getSize()*0.3;
}

void Cage::AddAnimal(const Animal * A){
  if (!isFull()){
    bool valid = false;
    if (!(A->getWild()))
      valid = true;
    else{
      for(int i=0; i<animal; i++){
        if (!(a[i]->getWild()))
          valid = false;
        /*else
          valid = (a[i]->render() == A->render()) && (a[i]->getColor() == A->getColor());*/
      }
    }
    if (valid){
      a[animal] = A->clone();
      ++animal;
    }
  }
}

bool Cage::SearchPos(int r, int c){
  int i=0;
  bool found = false;

  while ((i<size) && (!found)){
    if ((row[i] == r) && (col[i] == c))
      found = true;
    else
      i++;
  }

  return found;
}

bool Cage::SearchAnimal(int r, int c){
  int i=0;
  bool found = false;

  while ((i<animal) && (!found)){
    if ((a[i]->getRow() == r) && (a[i]->getCol() == c))
      found = true;
    else
      i++;
  }

  return found;
}

void Cage::Move(){
  int i = 0;

  while ((i<size) && (a[i] != 0)){
    int rd = rand()%4 + 1;
    switch (rd){ // 1-up, 2-right, 3-down, 4-left
      case 1:
      if (Cage::SearchPos(a[i]->getRow()-1, a[i]->getCol()) && !Cage::SearchAnimal(a[i]->getRow()-1, a[i]->getCol()))
        a[i]->setRow(a[i]->getRow()-1);
      break;

      case 2:
      if (Cage::SearchPos(a[i]->getRow(), a[i]->getCol()+1) && !Cage::SearchAnimal(a[i]->getRow(), a[i]->getCol()+1))
        a[i]->setCol(a[i]->getCol()+1);
      break;

      case 3:
      if (Cage::SearchPos(a[i]->getRow()+1, a[i]->getCol()) && !Cage::SearchAnimal(a[i]->getRow()+1, a[i]->getCol()))
        a[i]->setRow(a[i]->getRow()+1);
      break;

      case 4:
      if (Cage::SearchPos(a[i]->getRow(), a[i]->getCol()-1) && !Cage::SearchAnimal(a[i]->getRow(), a[i]->getCol()-1))
        a[i]->setCol(a[i]->getCol()-1);
      break;
    }

    i++;
  }


}

double Cage::countConsumedMeat(){
  double consume = 0;

  for(int i=0; i<animal; i++){
    consume += a[i]->countConsumedMeat();
  }

  return consume;
}

double Cage::countConsumedVeggie(){
  double consume = 0;

  for(int i=0; i<animal; i++){
    consume += a[i]->countConsumedVeggie();
  }

  return consume;
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

void Cage::printInteract(){
  int i = 0;
  while (i < animal){
    a[i]->interact();
    i++;
  }
}
