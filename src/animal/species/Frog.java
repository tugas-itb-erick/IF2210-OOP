/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : Frog.java
 */

package animal.species;

import animal.Animal;
import animal.diet.Carnivore;
import animal.diet.Herbivore;
import animal.diet.Omnivore;
import animal.habitat.AirHabitat;
import animal.habitat.LandHabitat;
import animal.habitat.WaterHabitat;
import animal.sex.Sex;
import animal.vertebrate.Amphibia;
import animal.vertebrate.Aves;
import animal.vertebrate.Mammalia;
import animal.vertebrate.Pisces;
import animal.vertebrate.Reptilia;
import java.util.*;

public class Frog extends Animal implements LandAnimal, WaterAnimal, Carnivore, Amphibia {
  /**
   * Constructor.
   */
  public Frog() {
    super();
  }

  /**
   * Consructor dengan parameter.
   * @param parName nama binatang
   * @param parWeight berat
   * @param parSex jenis kelamin
   * @param parRow posisi hewan (baris)
   * @param parCol posisi hewan (kolom)
   */
  public Frog(String parName, double parWeight, Sex parSex, int parRow, int parCol) {
    super(parName,  parWeight, parSex,  parRow, parCol);
  }

  /**
   * Melakukan clone hewan.
   * @return hewan yang ingin diduplikasi
   */
  @Override
  public Frog clone() {
    return new Frog(name,weight,sex,row,col);
  }

  /**
    * Menampilkan interaksi hewan ke layar.
    */
  @Override
  public void interact() {
    System.out.println("Croag.... Croag.... Ribbet... Ribbet...");
  }

  /**
   * Mengembalikan karakter id tiap hewan.
   * @return karakter tiap hewan
   */
  @Override
  public char render() {
    return 'F';
  }

  /**
   * Mengembalikan warna dari hewan.
   * @return warna cetak hewan
   */
  @Override
  public String renderWithColor() {
    return ANSI_GREEN + render() + ANSI_RESET;
  }

  /**
   * Mengembalikan liar/tidaknya binatang.
   * @return true jika liar, false jika jinak
   */
  @Override
  public boolean isWild() {
    return false;
  }

  /**
   * Mengembalikan jumlah ruang jantung hewan.
   * @return jumlah ruang jantung hewan
   */
  @Override
  public int getHeartChamber() {
    return 4;
  }

  /**
   * Mengembalikan jenis darah hewan ('h'/'c').
   * @return jenis darah hewan ('h'/'c')
   */
  @Override
  public char getBloodTemperature() {
    return 'c';
  }

  /**
   * Mengembalikan jumlah ratio sayur yang dibutuhkan terhadap berat hewan.
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double getVegRatio() {
    return 0;
  }

  /**
   * Mengembalikan jumlah ratio daging yang dibutuhkan terhadap berat hewan.
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double getMeatRatio() {
    return 0.03;
  }

  /**
   * Mengembalikan jumlah sayur yang dikonsumsi.
   * @return jumlah sayur yang dikonsumsi
   */
  @Override
  public double countConsumedVeggie() {
    return weight * getVegRatio();
  }

  /**
   * Mengembalikan jumlah daging yang dikonsumsi.
   * @return jumlah daging yang dikonsumsi
   */
  @Override
  public double countConsumedMeat() {
    return weight * getMeatRatio();
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
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang berlari.
   */
  @Override
  public void run() {
    System.out.println("I'm running and jumping!");
  }

  /**
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang berenang.
   */
  @Override
  public void swim() {
    System.out.println("I can swim too!");
  }
}
