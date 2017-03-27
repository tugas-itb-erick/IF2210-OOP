/**
 * @author NIM / Nama : 13515087 / Audry Nyonata
 *  Nama file : Restaurant.java
 */

import java.util.*;
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
