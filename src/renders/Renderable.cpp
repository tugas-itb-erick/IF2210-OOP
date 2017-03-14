/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Renderable.cpp          */

#include "Renderable.h"

/** @brief Constructor.
 */
Renderable::Renderable() : id('?'), color(WHITE)
{
}

/** @brief Constructor dengan parameter.
 * Menciptakan renderable dengan parameter id dan color
 */
Renderable::Renderable(char _id, Color _color) : id(_id), color(_color)
{
}
/** @brief Copy Constructor.
 * Menciptakan salinan dari Renderable.
 * @param R Renderable yang ingin disalin.
 */
Renderable::Renderable(const Renderable& R) : id(R.id), color(R.color)
{
}
/** @brief Destructor.
*/
Renderable::~Renderable()
{
}
/** @brief Operator=.
 * Menginisialisasi Renderable tanpa terjadi bitwise copy
 * @return Renderable yang sudah di assign nilai dari current object
 */
Renderable& Renderable::operator=(const Renderable& R)
{
  return *this;
}
