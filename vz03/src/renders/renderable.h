/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Renderable.h            */

#pragma once

#include "../other/color.h"

/** @class Renderable
  * Kelas abstrak yang memiliki metode render untuk mencetak karakter.
  */
class Renderable {
public:
	/** @brief Constructor.
     */
	Renderable();

	/** @brief Constructor dengan parameter.
	 * Menciptakan renderable dengan parameter id dan color
	 * @param id char renderable
     * @param color warna renderable
     */
	Renderable(char _id, Color _color);

	/** @brief Copy Constructor.
     * Menciptakan salinan dari Renderable.
     * @param R Renderable yang ingin disalin.
     */
	Renderable(const Renderable&);

	/** @brief Destructor.
    */
	virtual ~Renderable();

	/** @brief Operator=.
     * Menginisialisasi Renderable tanpa terjadi bitwise copy
     * @return Renderable yang sudah di assign nilai dari current object
     */
	Renderable& operator=(const Renderable&);

	/** @brief Mengembalikan karakter sesuai dengan kelas yang memanggil fungsi ini.
	* Adalah pure virtual function, diimplementasikan pada kelas anaknya.
	* @return id renderable.
	*/
	virtual char render() = 0;

	/** @brief Mengembalikan warna sesuai dengan kelas yang memanggil fungsi ini.
	* Adalah pure virtual function, diimplementasikan pada kelas anaknya.
	* @return warna renderable.
	*/
	virtual Color getColor() = 0;

protected:
	const char id;
	const Color color;
};
