/**
 * @author NIM / Nama : 13515144 / William
 *  Nama file : PuffFish.java
 */

import java.util.*;
import java.lang.*;

public class PuffFish extends Animal implements WaterAnimal, Omnivore, Pisces {
  /**
   * Constructor
   */
  public PuffFish() {
    super();
  }

  /**
   * Constructor dengan parameter
   * @param _name nama hewan
   * @param _weight berat hewan
   * @param _s jenis kelamin hewan (MALE/FEMALE)
   * @param _r posisi hewan (baris)
   * @param _c posisi hewan (kolom)
   */
  public PuffFish(String _name, double _weight, Sex _s, int _r, int _c) {
    super(_name, _weight, _s, _r, _c);
  }

  /**
   * Melakukan clone hewan
   * @return hewan yang ingin diduplikasi
   */
  @Override
  public PuffFish clone() {
    return new PuffFish(name,weight,sex,row,col);
  }

  /**
   * Menampilkan interaksi hewan
   */
  @Override
  public void interact() {
    System.out.println("This puff fish is fat!");
  }

  /**
   * Mengembalikan karakter dari binatang untuk ditampilkan
   * @return karakter dari binatang
   */
  @Override
  public char render() {
    return 'F';
  }

  /**
   * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan
   * @return kode warna dan karakter binatang
   */
  @Override
  public String renderWithColor() {
    return ANSI_CYAN + render() + ANSI_RESET;
  }

  /**
   * Mengembalikan liar/tidaknya binatang
   * @return true jika liar, false jika jinak
   */
  @Override
  public boolean isWild() {
    return false;
  }

  @Override
  public int getHeartChamber() {
    return 2;
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
    return 0.05;
  }

  /**
   * Mengembalikan jumlah ratio daging yang dibutuhkan terhadap berat hewan
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double getMeatRatio() {
    return 0.05;
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
    return 'W';
  }

  /**
   * Mengembalikan habitat kedua, didefinisikan pada kelas yang mengimplemen.
   * @return karakter yang merepresentasikan habitat
   */
  @Override
  public char getSecondHabitat(){
    return 'W';
  }

  /**
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang berenang
   */
  @Override
  public void swim() {
    System.out.println("I'm swimming!");
  }
}
