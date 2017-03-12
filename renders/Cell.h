/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Cell.h                  */

#pragma once

#include "Renderable.h"

class Cell : public Renderable {
public:
  virtual Cell* clone() const = 0;
};
