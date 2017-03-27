/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : Cell.java
 */

import java.util.*;
import java.lang.*;

public class Cell {
  private Place type;
  private char id;

  /**
   * Constructor
   */
  public Cell() {
    type = Place.PLACE_NONE;
	  id = '?';
  }
  /**
   * Consructor dengan parameter
   * @param _type tipe sel
   * @param _id karakter id sel
   */
  public Cell(Place _type, char _id) {
    type =_type;
    id =_id;
  }
  /**
   * Mengembalikan tipe Place dari cell
   * @return Place dari cell
   */
  public Place GetType() {
    return type;
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
