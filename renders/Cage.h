/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cage.h                  */

#pragma once

#include <iostream>
#include "renders.h"
using namespace std;

class Cage : public Renderable {
public:
  Cage();
  Cage(int s);
  Cage(const Cage& C);
  ~Cage();
  Cage& operator=(const Cage& C);

  int getSize() const;
  int getTotalAnimal() const;
  int * getRow() const;
  int * getCol() const;

  bool isFull() const;
  void AddAnimal(const Animal& A);

  int countConsumedMeat();
  int countConsumedVeggie();

  void render();
  friend istream& operator>>(istream& in, Cage& C);

  Animal*& operator[](int x);

private:
  int * row; // posisi baris
  int * col; // posisi kolom
  Animal * *a;
  int size;
};
