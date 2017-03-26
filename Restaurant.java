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
  public char Render(){
    return 'R';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}
