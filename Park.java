/* NIM/Nama : 13515087 / Audry Nyonata */
/* File : Park.java */

import java.util.*;
import java.lang.*;

class Park extends Facility{
   /**
   * Constructor
   */
  public Park(){
    super();
  }
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar
   * @return id bertipe char
   */
  public char Render(){
    return '*';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}