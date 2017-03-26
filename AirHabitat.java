/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : AirHabitat.java
 */

import java.util.*;
import java.lang.*;

public class AirHabitat extends Habitat{
  /**
   * Constructor
   */
  public AirHabitat(){
    super();
  }
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar
   * @return id bertipe char
   */
  public char Render(){
    return 'A';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}
