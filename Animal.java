/* Nama / NIM	: William / 13515144	*/
/* Nama file	: Animal.java			*/

import java.util.*;
import java.lang.*;

abstract class Animal implements Renderable {
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
	abstract public Animal Clone(); 
	
	/**
	 * Mengembalikan nama dari binatang
	 * @return nama binatang
	 */
	public String GetName() {
		return name;
	}

	/**
	 * Mengembalikan berat dari binatang
	 * @return berat binatang
	 */
	public double GetWeight() {
		return weight;
	}

	/**
	 * Mengembalikan jenis kelamin dari binatang
	 * @return jenis kelamin binatang
	 */
	public Sex GetSex() {
		return sex;
	}

	/**
	 * Mengembalikan posisi baris dari binatang
	 * @return posisi baris binatang
	 */
	public int GetRow() {
		return row;
	}
	
	/**
	 * Mengembalikan posisi kolom dari binatang
	 * @return posisi kolom binatang
	 */
	public int GetCol() {
		return col;
	}

	/**
	 * Mengatur nama dari binatang
	 * @param nama binatang
	 */
	public void SetName(String n) {
		name = n;
	}

	/**
	 * Mengatur berat dari binatang
	 * @param berat binatang
	 */
	public void SetWeight(double w) {
		weight = w;
	}

	/**
	 * Mengatur jenis kelamin dari binatang
	 * @param jenis kelamin binatang
	 */
	public void SetSex(Sex ns) {
		sex = ns;
	}

	/**
	 * Mengatur posisi baris dari binatang
	 * @param posisi baris binatang
	 */
	public void SetRow(int r) {
		row = r;
	}

	/**
	 * Mengatur posisi kolom dari binatang
	 * @param posisi kolom binatang
	 */
	public void SetCol(int c) {
		col = c;
	}

	/**
	 * Menampilkan data atribut dari binatang ke layar
	 */
	public void DisplayAnimalData() {
		System.out.println("Name: " + name);
		System.out.println("Weight: "+ weight);
		System.out.println("Sex: "+ sex);
		System.out.println("RowPosition: "+ row);
		System.out.println("ColPosition: "+ col);
		if (IsWild())
			System.out.println("Wild: true");
		else
			System.out.println("Wild: false");
	}
	
	/**
	 * Mengembalikan liar/tidaknya binatang
	 * @return true jika liar, false jika tidak liar
	 */
	abstract public boolean IsWild();
	
	/**
	 * Menampilkan interaksi dari binatang
	 */
	abstract public void Interact();

}
