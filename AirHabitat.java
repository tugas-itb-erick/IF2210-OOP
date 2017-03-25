/* NIM/Nama : 13515078 / Veren Iliana Kurniadi */
/* File     : AirHabitat.java                  */

import java.util.*;
import java.lang.*;

class AirHabitat extends Habitat{
  /** 
   * Constructor
   */
  public AirHabitat(){
    super('A', WHITE);
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
  public Color RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }
}