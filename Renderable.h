/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Renderable.h            */

#pragma once

class Renderable {
public:
  virtual void render() = 0;
};

class Cell : public Renderable {
public:
  virtual void render();

};

class Cage : public Renderable { // TBD
public:
  virtual void render();

};
