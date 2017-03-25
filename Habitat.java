/* NIM/Nama : 13515078 / Veren Iliana Kurniadi */
/* File : Habitat.java */

import java.util.*;
import java.lang.*;

abstract class Habitat extends Cell {
  /** 
   * Constructor.
   */
  public Habitat() {
    super();
  }
  /** 
   * Constructor dengan parameter.
   * Menciptakan Habitat dengan parameter id dan color
   * @param id char renderable
   * @param color warna renderable
   */
  public Habitat(char _id, Color _color) {
    super(_id,_color);
  }
}