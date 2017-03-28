/**
 * @author NIM / Nama : 13515144 / William
 *  Nama file : Eagle.java
 */

import java.util.*;
import java.lang.*;

public class Eagle extends Animal implements FlyingAnimal, Carnivore, Aves {
  /**
   * Constructor
   */
  public Eagle() {
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
  public Eagle(String _name, double _weight, Sex _s, int _r, int _c) {
    super(_name, _weight, _s, _r, _c);
  }

  /**
   * Melakukan clone hewan
   * @return hewan yang ingin diduplikasi
   */
  @Override
  public Eagle clone() {
    return new Eagle(name,weight,sex,row,col);
  }

  /**
   * Menampilkan interaksi hewan
   */
  @Override
  public void interact() {
    System.out.println("This eagle is soaring in the sky!");
  }

  /**
   * Mengembalikan karakter dari binatang untuk ditampilkan
   * @return karakter dari binatang
   */
  @Override
  public char render() {
    return 'E';
  }

  /**
   * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan
   * @return kode warna dan karakter binatang
   */
  @Override
  public String renderWithColor() {
    return ANSI_RED + render() + ANSI_RESET;
  }

  /**
   * Mengembalikan liar/tidaknya binatang
   * @return true jika liar, false jika jinak
   */
  @Override
  public boolean isWild() {
    return true;
  }

  @Override
  public int getHeartChamber() {
    return 3;
  }

 /**
   * Mengembalikan jenis darah hewan ('h'/'c')
   * @return jenis darah hewan ('h'/'c')
   */
  @Override
  public char getBloodTemperature() {
    return 'h';
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
  public char getFirstHabitat(){
    return 'A';
  }

  /**
   * Mengembalikan habitat kedua, didefinisikan pada kelas yang mengimplemen.
   * @return karakter yang merepresentasikan habitat
   */
  @Override
  public char getSecondHabitat(){
    return 'A';
  }

  /**
   * Mencetak tulisan yang merepresentasi objek pengimplemen sedang terbang
   */
  @Override
  public void fly() {
    System.out.println("I'm flying!");
  }
}
