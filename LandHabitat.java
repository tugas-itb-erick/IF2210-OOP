/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : LandHabitat.java
 */

import java.util.*;
import java.lang.*;

public class LandHabitat extends Habitat{
   /**
   * Constructor
   */
  public LandHabitat(){
    super();
  }
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar
   * @return id bertipe char
   */
  public char Render(){
    return 'L';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}
