/**
 * @author NIM / Nama : 13515087 / Audry Nyonata
 *  Nama file : Park.java
 */

import java.util.*;
import java.lang.*;

public class Park extends Facility{
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
  public char render(){
    return '*';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String renderWithColor(){
    return ANSI_WHITE + render() + ANSI_RESET;
  }
}
