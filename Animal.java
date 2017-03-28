/**
 * @author NIM / Nama	: 13515144 / William
 *	Nama file	: Animal.java
 */

import java.util.*;
import java.lang.*;

abstract public class Animal implements Renderable {
	protected String name;
	protected double weight;
	protected Sex sex;
	protected int row;
	protected int col;

	/**
	 * Konstruktor
	 */
	public Animal() {
		name = "unnamed";
		weight = 0;
		sex = Sex.FEMALE;
		row = 0;
		col = 0;
	}
	/**
	 * Konstruktor dengan parameter
	 * @param _name nama hewan
	 * @param _weight berat hewan
	 * @param _s jenis kelamin hewan (MALE/FEMALE)
	 * @param _r posisi hewan (baris)
	 * @param _c posisi hewan (kolom)
	 */
	public Animal(String _name, double _weight, Sex _s, int _r, int _c) {
		name = _name;
		weight = _weight;
		sex = _s;
		row =_r;
		col =_c;
	}

	/**
	 * Melakukan duplikasi binatang
	 * @return binatang yang diduplikasi
	 */
	abstract public Animal clone();

	/**
	 * Mengembalikan nama dari binatang
	 * @return nama binatang
	 */
	public String getName() {
		return name;
	}

	/**
	 * Mengembalikan berat dari binatang
	 * @return berat binatang
	 */
	public double getWeight() {
		return weight;
	}

	/**
	 * Mengembalikan jenis kelamin dari binatang
	 * @return jenis kelamin binatang
	 */
	public Sex getSex() {
		return sex;
	}

	/**
	 * Mengembalikan posisi baris dari binatang
	 * @return posisi baris binatang
	 */
	public int getRow() {
		return row;
	}

	/**
	 * Mengembalikan posisi kolom dari binatang
	 * @return posisi kolom binatang
	 */
	public int getCol() {
		return col;
	}

	/**
	 * Mengubah nama dari binatang
	 * @param nama binatang
	 */
	public void setName(String n) {
		name = n;
	}

	/**
	 * Mengubah berat dari binatang
	 * @param berat binatang
	 */
	public void setWeight(double w) {
		weight = w;
	}

	/**
	 * Mengubah jenis kelamin dari binatang
	 * @param jenis kelamin binatang
	 */
	public void setSex(Sex ns) {
		sex = ns;
	}

	/**
	 * Mengubah posisi baris dari binatang
	 * @param posisi baris binatang
	 */
	public void setRow(int r) {
		row = r;
	}

	/**
	 * Mengubah posisi kolom dari binatang
	 * @param posisi kolom binatang
	 */
	public void setCol(int c) {
		col = c;
	}

	/**
	 * Menampilkan data atribut dari binatang ke layar
	 */
	public void displayAnimalData() {
		System.out.println("Name: " + name);
		System.out.println("Weight: "+ weight);
		System.out.println("Sex: "+ sex);
		System.out.println("RowPosition: "+ row);
		System.out.println("ColPosition: "+ col);
		if (isWild())
			System.out.println("Wild: true");
		else
			System.out.println("Wild: false");
	}

	/**
	 * Mengembalikan liar/tidaknya binatang
	 * @return true jika liar, false jika tidak liar
	 */
	abstract public boolean isWild();

	/**
	 * Menampilkan interaksi dari binatang
	 */
	abstract public void interact();

	/**
   * Mengembalikan jumlah daging yang dikonsumsi
   * @return jumlah daging yang dikonsumsi
   */
  abstract public double countConsumedMeat();

  /**
   * Mengembalikan jumlah makanan tumbuhan yang dikonsumsi
   * @return jumlah makanan tumbuhan yang dikonsumsi
   */
  abstract public double countConsumedVeggie();

	/**
	 * Mengembalikan habitat pertama, didefinisikan pada kelas yang mengimplemen.
	 * @return karakter yang merepresentasikan habitat
	 */
	abstract public char getFirstHabitat();

	/**
	 * Mengembalikan habitat kedua, didefinisikan pada kelas yang mengimplemen.
	 * @return karakter yang merepresentasikan habitat
	 */
	abstract public char getSecondHabitat();
}
