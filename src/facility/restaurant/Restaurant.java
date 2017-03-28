/**
 * @author NIM / Nama : 13515087 / Audry Nyonata
 *  Nama file : Restaurant.java
 */

package facility.restaurant;

import java.util.*;

import facility.Facility;

import java.lang.*;

public class Restaurant extends Facility{
   /**
   * Constructor
   */
  public Restaurant(){
    super();
  }
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar
   * @return id bertipe char
   */
  public char render(){
    return 'R';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String renderWithColor(){
    return ANSI_WHITE + render() + ANSI_RESET;
  }
}
