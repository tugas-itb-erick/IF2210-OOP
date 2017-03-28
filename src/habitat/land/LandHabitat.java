/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : LandHabitat.java
 */

package habitat.land;

import java.util.*;

import habitat.Habitat;

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
  public char render(){
    return 'L';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String renderWithColor(){
    return ANSI_WHITE + render() + ANSI_RESET;
  }
}
