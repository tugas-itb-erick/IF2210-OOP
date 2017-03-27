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
  public char render(){
    return 'W';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String renderWithColor(){
    return ANSI_WHITE + render() + ANSI_RESET;
  }
}
