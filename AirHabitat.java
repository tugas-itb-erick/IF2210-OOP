/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : AirHabitat.java
 */

import java.util.*;
import java.lang.*;

public class AirHabitat extends Habitat {
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
  public char render(){
    return 'A';
  }
  /**
   * Mengembalikan warna untuk ditampilkan ke layar
   * @return color warna renderable
   */
  public String renderWithColor(){
    return ANSI_WHITE + render() + ANSI_RESET;
  }
}
