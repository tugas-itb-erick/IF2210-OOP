/**
 * @author NIM / Nama : 13515144 / William
 *  Nama file : Owl.java
 */

package animal.species;

import animal.Animal;
import animal.diet.Carnivore;
import animal.diet.Herbivore;
import animal.diet.Omnivore;
import animal.habitat.FlyingAnimal;
import animal.habitat.LandAnimal;
import animal.habitat.WaterAnimal;
import animal.sex.Sex;
import animal.vertebrate.Amphibia;
import animal.vertebrate.Aves;
import animal.vertebrate.Mammalia;
import animal.vertebrate.Pisces;
import animal.vertebrate.Reptilia;
import java.util.*;

public class Owl extends Animal implements FlyingAnimal, Omnivore, Aves {
  /**
   * Constructor.
   */
  public Owl() {
    super();
  }

  /**
   * Constructor. dengan parameter.
   * @param parName nama hewan
   * @param parWeight berat hewan
   * @param parSex jenis kelamin hewan (MALE/FEMALE)
   * @param parRow posisi hewan (baris)
   * @param parCol posisi hewan (kolom)
   */
  public Owl(String parName, double parWeight, Sex parSex, int parRow, int parCol) {
    super(parName, parWeight, parSex, parRow, parCol);
  }

  /**
   * Melakukan clone hewan.
   * @return hewan yang ingin diduplikasi
   */
  @Override
  public Owl clone() {
    return new Owl(name,weight,sex,row,col);
  }

  /**
   * Menampilkan interaksi hewan.
   */
  @Override
  public void interact() {
    System.out.println("Hooo... Hooo...");
  }

  /**
   * Mengembalikan karakter dari binatang untuk ditampilkan.
   * @return karakter dari binatang
   */
  @Override
  public char render() {
    return 'O';
  }

  /**
   * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan.
   * @return kode warna dan karakter binatang
   */
  @Override
  public String renderWithColor() {
    return ANSI_RED + render() + ANSI_RESET;
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
    return 3;
  }

  /**
   * Mengembalikan jenis darah hewan ('h'/'c').
   * @return jenis darah hewan ('h'/'c')
   */
  @Override
  public char getBloodTemperature() {
    return 'h';
  }

  /**
   * Mengembalikan jumlah ratio sayur yang dibutuhkan terhadap berat hewan.
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double getVegRatio() {
    return 0.02;
  }

  /**
   * Mengembalikan jumlah ratio daging yang dibutuhkan terhadap berat hewan.
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double getMeatRatio() {
    return 0.02;
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
    return 'A';
  }

  /**
   * Mengembalikan habitat kedua, didefinisikan pada kelas yang mengimplemen.
   * @return karakter yang merepresentasikan habitat
   */
  @Override
  public char getSecondHabitat() {
    return 'A';
  }

  /**
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang flying.
   */
  @Override
  public void fly() {
    System.out.println("I'm flying!");
  }
}


