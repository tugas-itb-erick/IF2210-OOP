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
  char id;
  enum color {RED, ORANGE, YELLOW, GREEN, BLUE, MAGENTA, CYAN, WHITE};
};
