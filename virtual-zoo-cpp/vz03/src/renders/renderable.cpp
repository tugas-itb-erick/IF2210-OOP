/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Renderable.cpp          */

#include "renderable.h"

Renderable::Renderable() : id('?'), color(WHITE){

}

Renderable::Renderable(char _id, Color _color) : id(_id), color(_color){

}

Renderable::Renderable(const Renderable& R) : id(R.id), color(R.color){

}

Renderable::~Renderable(){

}

Renderable& Renderable::operator=(const Renderable& R){
  return *this;
}
