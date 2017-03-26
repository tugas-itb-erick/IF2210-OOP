/**
 * @author NIM / Nama : 13515087 / Audry Nyonata
 *  Nama file : Entrance.java
 */

import java.util.*;
import java.lang.*;

public class Entrance extends Road{
   /**
   * Constructor
   */
  public Entrance(){
    super();
  }
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar
   * @return id bertipe char
   */
  public char Render(){
    return 'i';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}
