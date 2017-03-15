#pragma once

#include "../zoo/zoo.h"
using namespace std;

/** @class Driver
  * Kelas yang menjalankan kebun binatang virtual
  */
class Driver {
public:
 /** @brief Menampilkan menu.
	 * Mencetak menu tampilan utama bagi pengguna
	 */
  static void ShowMenu();

  /** @brief Aktivasi Tour
 	 * Memulai Tour kebun binatang
   * @param Z kebun binatang yang memulai tour
 	 */
  static void ActivateTour(Zoo &Z);

  /** @brief Menampilkan kebun binatang.
 	 * Memanggil fungsi display dari zoo untuk menampilkan zoo.
   * @param Z kebun binatang yang dicetak
   * @param x1 indeks baris ujung kiri
   * @param y1 indeks kolom ujung kiri
   * @param x2 indeks baris ujung kanan
   * @param y2 indeks kolom ujung kanan
 	 */
  static void PrintZoo(Zoo &Z, int x1, int y1, int x2, int y2);

  /** @brief Menampilkan kebun binatang.
   * Memanggil fungsi display dari zoo untuk menampilkan seluruh zoo.
   * @param Z kebun binatang yang dicetak
   */
  static void PrintZooAll(Zoo &Z);

  /** @brief Menampilkan makanan yang dikonsumsi hewan di kebun Z.
   * @param Z kebun binatang yang ingin dihitung makanan yang dikonsumsinya.
 	 */
  static void PrintFood(Zoo &Z);

  /** @brief Membaca Zoo Z dari File
   * Memanfaatkan method readAll pada kelas Zoo
   * @param Z kebun binatang yang ingin dibaca dari file.
 	 */
  static void InputZoo(Zoo &Z);
};
