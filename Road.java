/* NIM/Nama : 13515087 / Audry Nyonata */
/* File : Road.java */

import java.util.*;
import java.lang.*;

class Road extends Facility{
   /**
   * Constructor
   */
  public Road(){
    super();
  }
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar
   * @return id bertipe char
   */
  public char Render(){
    return '-';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}