/* NIM / Nama	: 13515144 / William	*/
/* Nama file	: Elephant.java			*/

import java.util.*;
import java.lang.*;

class Elephant extends Animal /*implements LandAnimal, Herbivore, Mammalia*/ {
	/**
	 * Constructor
	 */
	public Elephant() {
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
	public Elephant(String _name, double _weight, Sex _s, int _r, int _c, boolean _w) {
		super(_name, _weight, _s, _r, _c, _w);
		wild=false;
	}
	/**
	 * Menampilkan interaksi hewan
	 */
	void Interact(){
		System.out.println("This elephant is trumpeting!!");
	}
	
	char Render(){
		return 'e';
	}
	
	void RenderWithColor(){
		System.out.println(/*ANSI_YELLOW + */Render() /*+ ANSI_RESET*/);
	}

	/*
	double CountConsumedMeat(){
		return weight*meatRatio;
	}
	double CountConsumedVeggie(){
		return weight*vegRatio;
	}	
	*/
}
