/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Renderable.h            */

#pragma once

/** @class Renderable
  * Kelas abstrak yang memiliki metode render untuk mencetak karakter.
  */
class Renderable {
public:
  /** @brief Mencetak karakter sesuai dengan kelas yang memanggil fungsi ini.
    * Adalah pure virtual function, diimplementasikan pada kelas anaknya.
    */
  virtual void render() = 0;
protected:
  enum color {RED, ORANGE, YELLOW, GREEN, BLUE, MAGENTA, CYAN, WHITE};
};

class Cell : public Renderable {
public:
  //virtual void render();
  virtual Cell* clone() const = 0;
};
/*
class Cage : public Renderable {
public:
  Cage();
  virtual void render();
  friend istream& operator>>();
  friend ostream& operator<<();

private:
  Habitat * *h;
  Animal * *a;

};*/
