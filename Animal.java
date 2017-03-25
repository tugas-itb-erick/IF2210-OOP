/* Nama / NIM	: William / 13515144	*/
/* Nama file	: Animal.java			*/

import java.util.*;
import java.lang.*;



/*abstract*/ class Animal {
	protected String name;
	protected double weight;
	protected Sex s;
	protected int row;
	protected int col;
	protected boolean wild;
	
	public Animal(){
		name="unnamed";
		weight=0;
		s=Sex.FEMALE;
		row=0;
		col=0;
		wild = false;
	}
	public Animal(String _name, double _weight, Sex _s, int _r, int _c, boolean _w) {
		name=_name;
		weight=_weight;
		s=_s;
		row=_r;
		col=_c;
		wild = _w;
	}
	public String getName() {
		return name;
	}
	public double getWeight() {
		return weight;
	}
	public Sex getSex() {
		return s;
	}
	public int getRow() {
		return row;
	}
	public int getCol() {
		return col;
	}
	public boolean getWild() {
		return wild;
	}
	public void setName(String n) {
		name = n;
	}
	public void setWeight(double w) {
		weight = w;
	}
	public void setSex(Sex ns) {
		s = ns;
	}
	public void setRow(int r) {
		row = r;
	}
	public void setCol(int c) {
		col = c;
	}
	public void DisplayAnimalData() {
		System.out.println("Name: " + name);
		System.out.println("Weight: "+ weight);
		System.out.println("Sex: "+ s);
		System.out.println("RowPosition: "+ row);
		System.out.println("ColPosition: "+ col);
	}
	/*public static void main(String[] args) {
		Animal tesAnimal = new Animal("GreyElephant",200, Sex.MALE, 2, 2, true);
		tesAnimal.DisplayAnimalData();
  }*/
}
