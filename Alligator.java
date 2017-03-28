/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : Alligator.java
 */

import java.util.*;
import java.lang.*;

public class Alligator extends Animal implements LandAnimal, WaterAnimal, Carnivore, Reptilia {
  /**
   * Constructor
   */
  public Alligator() {
    super();
  }

  /**
   * Consructor dengan parameter
   * @param _name nama binatang
   * @param _weight berat
   * @param _s jenis kelamin
   * @param _r posisi hewan (baris)
   * @param _c posisi hewan (kolom)
   */
  public Alligator(String _name, double _weight, Sex _s, int _r, int _c) {
  	super(_name,  _weight, _s,  _r, _c);
  }

  /**
   * Melakukan clone hewan
   * @return hewan yang ingin diduplikasi
   */
  @Override
  public Alligator clone() {
    return new Alligator(name,weight,sex,row,col);
  }

  /**
   * Menampilkan interaksi hewan ke layar
   */
  @Override
  public void interact() {
  	System.out.println("Hiss.....");
  }

  /**
   * Mengembalikan karakter id tiap hewan
   * @return karakter tiap hewan
   */
  @Override
  public char render() {
    return 'A';
  }

  /**
   * Mengembalikan warna dari hewan
   * @return warna cetak hewan
   */
  @Override
  public String renderWithColor() {
    return ANSI_GREEN + render() + ANSI_RESET;
  }

  /**
   * Mengembalikan liar/tidaknya binatang
   * @return true jika liar, false jika jinak
   */
  @Override
  public boolean isWild() {
    return true;
  }

  /**
   * Mengembalikan jumlah ruang jantung hewan
   * @return jumlah ruang jantung hewan
   */
  @Override
  public int getHeartChamber() {
	  return 4;
  }

 /**
   * Mengembalikan jenis darah hewan ('h'/'c')
   * @return jenis darah hewan ('h'/'c')
   */
  @Override
  public char getBloodTemperature() {
	  return 'c';
  }

  /**
   * Mengembalikan jumlah ratio sayur yang dibutuhkan terhadap berat hewan
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double getVegRatio() {
	  return 0;
  }

  /**
   * Mengembalikan jumlah ratio daging yang dibutuhkan terhadap berat hewan
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double getMeatRatio() {
	  return 0.2;
  }

  /**
   * Mengembalikan jumlah sayur yang dikonsumsi
   * @return jumlah sayur yang dikonsumsi
   */
  @Override
  public double countConsumedVeggie() {
    return weight*getVegRatio();
  }

  /**
   * Mengembalikan jumlah daging yang dikonsumsi
   * @return jumlah daging yang dikonsumsi
   */
  @Override
  public double countConsumedMeat() {
    return weight*getMeatRatio();
  }

  /**
   * Mengembalikan habitat pertama, didefinisikan pada kelas yang mengimplemen.
   * @return karakter yang merepresentasikan habitat
   */
  @Override
  public char getFirstHabitat() {
    return 'L';
  }

  /**
   * Mengembalikan habitat kedua, didefinisikan pada kelas yang mengimplemen.
   * @return karakter yang merepresentasikan habitat
   */
  @Override
  public char getSecondHabitat() {
    return 'W';
  }

  /**
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang berlari
   */
  @Override
  public void run() {
    System.out.println("I'm running!");
  }

  /**
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang berenang
   */
  @Override
  public void swim() {
    System.out.println("I'm swimming!");
  }
}
