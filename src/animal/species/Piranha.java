/**
 * @author NIM / Nama : 13515144 / William
 *  Nama file : Piranha.java
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

public class Piranha extends Animal implements WaterAnimal, Carnivore, Mammalia {
  /**
   * Constructor.
   */
  public Piranha() {
    super();
  }

  /**
   * Constructor dengan parameter.
   * @param parName nama hewan
   * @param parWeight berat hewan
   * @param parSex jenis kelamin hewan (MALE/FEMALE)
   * @param parRow posisi hewan (baris)
   * @param parCol posisi hewan (kolom)
   */
  public Piranha(String parName, double parWeight, Sex parSex, int parRow, int parCol) {
    super(parName, parWeight, parSex, parRow, parCol);
  }

  /**
   * Melakukan clone hewan.
   * @return hewan yang ingin diduplikasi
   */
  @Override
  public Piranha clone() {
    return new Piranha(name,weight,sex,row,col);
  }

  /**
   * Menampilkan interaksi hewan.
   */
  @Override
  public void interact() {
    System.out.println("This piranha eats voraciously!");
  }

  /**
   * Mengembalikan karakter dari binatang untuk ditampilkan.
   * @return karakter dari binatang
   */
  @Override
  public char render() {
    return 'P';
  }

  /**
   * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan.
   * @return kode warna dan karakter binatang
   */
  @Override
  public String renderWithColor() {
    return ANSI_CYAN + render() + ANSI_RESET;
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
    return 2;
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
    return 0.05;
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
    return 'W';
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
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang berenang.
   */
  @Override
  public void swim() {
    System.out.println("I'm swimming!");
  }
}
