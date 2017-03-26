/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi 
 * File : Cell.java     
 */

import java.util.*;
import java.lang.*;

public class Cell {
  private Place type;
  private char id;
  private Color color;
  private int m;
  private int n;

  /**
   * Constructor
   */
  public Cell() {
    type=PLACE_NONE;
	id='!';
	color=WHITE;
	m=0;
	n=0;
  }
  /** 
   * Consructor dengan parameter
   * @param  _type tipe sel 
   * @param _id karakter id sel
   * @param _color warna sel
   * @param _m baris
   * @param _n kolom
   */
  public Cell(Place _type, char _id,Color _color, int _m, int _n) {
    type=_type;
	id=_id;
	color=_color;
	m=_m;
	n=_n;
  }	
  /** 
   * Mengembalikan karakter id dari current cell 
   * @return karakter current cell
   */
  public char getId() {
  	return id;
  }
  /** @brief getColor
   * Mengembalikan warna dari current cell
   * @return warna current cell
   */
  public Color getColor() {
  	return color;
  }
}