/* NIM/Nama : 13515078 / Veren Iliana Kurniadi */
/* File     : Herbivore.java                   */

import java.util.*;
import java.lang.*;

abstract class Herbivore {
  private final double meatRatio = 0;
  private double vegRatio; 
  
  /** 
   * Constructor.
   */
  public Herbivore() {
    vegRatio = 0.3;
  }
  /** 
   * Mengembalikan nilai rasio daging.
   * @return nilai rasio daging
   */
  public double GetMeatRatio() final {
    return meatRatio;
  }

  /** 
   * Mengembalikan nilai rasio sayur.
   * @return nilai rasio sayur
   */
  public double GetVegRatio() final {
    return vegRatio;
  }
}