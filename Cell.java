/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi 
 * File : Cell.java     
 */

import java.util.*;
import java.lang.*;

public class Cell {
  private Place type;
  private char id;
  private int m;
  private int n;

  /**
   * Constructor
   */
  public Cell() {
    type = Place.PLACE_NONE;
	  id = '!';
	  m = 0;
	  n = 0;
  }
  /** 
   * Consructor dengan parameter
   * @param  _type tipe sel 
   * @param _id karakter id sel
   * @param _m baris
   * @param _n kolom
   */
  public Cell(Place _type, char _id, int _m, int _n) {
    type =_type;
    id =_id;
    m =_m;
    n =_n;
  }	
  /** 
   * Mengembalikan karakter id untuk di render
   * @return karakter current cell
   */
  public char GetId() {
  	return id;
  }
  /** 
   * Mengembalikan karakter id dari current cell 
   * @return karakter current cell
   */
  public char Render() {
    return GetId();
  }
  /** 
   * Mengembalikan warna dari hewan
   * @return warna cetak hewan
   */
  public String RenderWithColor() {
    return Color.ANSI_WHITE + Render() + Color.ANSI_RESET;
  }
}