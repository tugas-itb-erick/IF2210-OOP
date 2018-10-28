/**
 * @author NIM / Nama  : 13515144 / William
 *  Nama file  : Animal.java
 */

package animal;

import animal.sex.Sex;
import renderable.Renderable;


public abstract class Animal implements Renderable {
  protected String name;
  protected double weight;
  protected Sex sex;
  protected int row;
  protected int col;

  /**
   * Konstruktor.
   */
  public Animal() {
    name = "unnamed";
    weight = 0;
    sex = Sex.FEMALE;
    row = 0;
    col = 0;
  }

  /**
   * Konstruktor dengan parameter.
   * @param parName nama hewan
   * @param parWeight berat hewan
   * @param parSex jenis kelamin hewan (MALE/FEMALE)
   * @param parRow posisi hewan (baris)
   * @param parCol posisi hewan (kolom)
   */
  public Animal(String parName, double parWeight, Sex parSex, int parRow, int parCol) {
    name = parName;
    weight = parWeight;
    sex = parSex;
    row = parRow;
    col = parCol;
  }

  /**
   * Melakukan duplikasi binatang.
   * @return binatang yang diduplikasi
   */
  public abstract Animal clone();

  /**
   * Mengembalikan nama dari binatang.
   * @return nama binatang
   */
  public String getName() {
    return name;
  }

  /**
   * Mengembalikan berat dari binatang.
   * @return berat binatang
   */
  public double getWeight() {
    return weight;
  }

  /**
   * Mengembalikan jenis kelamin dari binatang.
   * @return jenis kelamin binatang
   */
  public Sex getSex() {
    return sex;
  }

  /**
   * Mengembalikan posisi baris dari binatang.
   * @return posisi baris binatang
   */
  public int getRow() {
    return row;
  }

  /**
   * Mengembalikan posisi kolom dari binatang.
   * @return posisi kolom binatang
   */
  public int getCol() {
    return col;
  }

  /**
   * Mengubah nama dari binatang.
   * @param n nama binatang
   */
  public void setName(String n) {
    name = n;
  }

  /**
   * Mengubah berat dari binatang.
   * @param w berat binatang
   */
  public void setWeight(double w) {
    weight = w;
  }

  /**
   * Mengubah jenis kelamin dari binatang.
   * @param ns jenis kelamin binatang
   */
  public void setSex(Sex ns) {
    sex = ns;
  }

  /**
   * Mengubah posisi baris dari binatang.
   * @param r posisi baris binatang
   */
  public void setRow(int r) {
    row = r;
  }

  /**
   * Mengubah posisi kolom dari binatang.
   * @param c posisi kolom binatang
   */
  public void setCol(int c) {
    col = c;
  }

  /**
   * Menampilkan data atribut dari binatang ke layar.
   */
  public void displayAnimalData() {
    System.out.println("Name: " + name);
    System.out.println("Weight: " + weight);
    System.out.println("Sex: " + sex);
    System.out.println("RowPosition: " + row);
    System.out.println("ColPosition: " + col);
    if (isWild()) {
      System.out.println("Wild: true");
    } else {
      System.out.println("Wild: false");
    }
  }

  /**
   * Mengembalikan liar/tidaknya binatang.
   * @return true jika liar, false jika tidak liar
   */
  public abstract boolean isWild();

  /**
   * Menampilkan interaksi dari binatang.
   */
  public abstract void interact();

  /**
   * Mengembalikan jumlah daging yang dikonsumsi.
   * @return jumlah daging yang dikonsumsi
   */
  public abstract double countConsumedMeat();

  /**
   * Mengembalikan jumlah makanan tumbuhan yang dikonsumsi.
   * @return jumlah makanan tumbuhan yang dikonsumsi
   */
  public abstract double countConsumedVeggie();

  /**
   * Mengembalikan habitat pertama, didefinisikan pada kelas yang mengimplemen.
   * @return karakter yang merepresentasikan habitat
   */
  public abstract char getFirstHabitat();

  /**
   * Mengembalikan habitat kedua, didefinisikan pada kelas yang mengimplemen.
   * @return karakter yang merepresentasikan habitat
   */
  public abstract char getSecondHabitat();
}
