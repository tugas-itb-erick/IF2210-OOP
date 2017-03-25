/* NIM / Nama	: 13515144 / William	*/
/* Nama file	: Whale.java			*/

import java.util.*;
import java.lang.*;

class Whale extends Animal/*, WaterAnimal, Carnivore, Mammalia*/ {
	/**
	 * Constructor
	 */
	public Whale() {
		super();
	}
	
	/**
	 * Constructor dengan parameter
	 * @param _name nama hewan
	 * @param _weight berat hewan
	 * @param _s jenis kelamin hewan (MALE/FEMALE)
	 * @param _r posisi hewan (baris)
	 * @param _c posisi hewan (kolom)
	 * @param _w buas atau jinaknya hewan (true=buas, false=jinak)
	 */
	public Whale(String _name, double _weight, Sex _s, int _r, int _c) {
		super(_name, _weight, _s, _r, _c);
	}
	
	/**
	 * Melakukan clone hewan
	 * @return hewan yang ingin diduplikasi
	 */
	public Whale Clone()
	{
		Whale E = new Whale(name,weight,sex,row,col);
		return E;
	}
		
	/**
	 * Menampilkan interaksi hewan
	 */
	@Override
	public void Interact() {
		System.out.println("This whale created a huge splash!");
	}
	
	/**
	 * Mengembalikan karakter dari binatang untuk ditampilkan
	 * @return karakter dari binatang
	 */
	@Override
	public char Render() {
		return 'W';
	}
	
	/**
	 * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan
	 * @return kode warna dan karakter binatang
	 */
	@Override
	public String RenderWithColor() {
		return ANSI_CYAN + Render() + ANSI_RESET;
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

