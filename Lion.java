/**
 * @author NIM / Nama	: 13515144 / William
 *	Nama file	: Lion.java
 */

import java.util.*;
import java.lang.*;

public class Lion extends Animal/*implements LandAnimal, Carnivore, Mammalia*/ {
	/**
	 * Constructor
	 */
	public Lion() {
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
	public Lion(String _name, double _weight, Sex _s, int _r, int _c) {
		super(_name, _weight, _s, _r, _c);
	}

	/**
	 * Melakukan clone hewan
	 * @return hewan yang ingin diduplikasi
	 */
	public Lion Clone()
	{
		Lion out = new Lion(name,weight,sex,row,col);
		return out;
	}

	/**
	 * Menampilkan interaksi hewan
	 */
	@Override
	public void Interact() {
		System.out.println("Roarrrr..!!");
	}

	/**
	 * Mengembalikan karakter dari binatang untuk ditampilkan
	 * @return karakter dari binatang
	 */
	@Override
	public char Render() {
		return 'L';
	}

	/**
	 * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan
	 * @return kode warna dan karakter binatang
	 */
	@Override
	public String RenderWithColor() {
		return ANSI_YELLOW + Render() + ANSI_RESET;
	}

	/**
	 * Mengembalikan liar/tidaknya binatang
	 * @return true jika liar, false jika jinak
	 */
	@Override
	public boolean IsWild() {
		return false;
	}

	/*
	public double CountConsumedMeat(){
		return weight*meatRatio;
	}
	public double CountConsumedVeggie(){
		return weight*vegRatio;
	}
	*/
}
