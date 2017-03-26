/* NIM/Nama : 13515078 / Veren Iliana Kurniadi */
/* File     : Hippopotamus.java                */

import java.util.*;
import java.lang.*;

class Hippopotamus extends Animal implements LandAnimal, WaterAnimal, Herbivore, Mammalia {
  /**
   * Constructor
   */
  public Hippopotamus() {
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
  public Hippopotamus(string _name, double _weight, Sex _s, int _r, int _c) {
  	super(_name,  _weight, _s,  _r, _c);
  }
  /**
   * Melakukan clone hewan
   * @return hewan yang ingin diduplikasi
   */
  public Hippopotamus Clone()
  {
    Hippopotamus out = new Hippopotamus(name,weight,sex,row,col);
    return out;
  }
  /** 
   * Menampilkan interaksi hewan ke layar
   */
  @Override
  public void Interact() {
  	System.out.println("This hippo is so big");
  }
  /** 
   * Mengembalikan karakter id tiap hewan
   * @return karakter tiap hewan
   */
  @Override
  public char Render() {
    return 'H';
  }
  /** 
   * Mengembalikan warna dari hewan
   * @return warna cetak hewan
   */
  @Override
  public String RenderWithColor() {
    return ANSI_GREEN + render() + ANSI_RESET;
  }
  /**
   * Mengembalikan liar/tidaknya binatang
   * @return true jika liar, false jika jinak
   */
  @Override
  public boolean IsWild() {
    return true;
  }
  /** 
   * Mengembalikan jumlah daging yang dikonsumsi
   * @return jumlah daging yang dikonsumsi
   */
  public double CountConsumedMeat() {
    return weight*meatRatio;
  }
  /** 
   * Mengembalikan jumlah makanan tumbuhan yang dikonsumsi
   * @return jumlah makanan tumbuhan yang dikonsumsi
   */
  public double CountConsumedVeggie() {
    return weight*vegRatio;
  }
}
