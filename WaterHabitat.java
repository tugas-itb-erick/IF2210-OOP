/* NIM/Nama : 13515078 / Veren Iliana Kurniadi */
/* File     : WaterHabitat.java                */

import java.util.*;
import java.lang.*;

class WaterHabitat extends Habitat{
   /**
   * Constructor
   */
  public WaterHabitat(){
    super();
  }
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar
   * @return id bertipe char
   */
  public char Render(){
    return 'W';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}
