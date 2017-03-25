/* NIM/Nama : 13515078 / Veren Iliana Kurniadi */
/* File     : Carnivore.java                   */

import java.util.*;
import java.lang.*;

abstract class Carnivore {
  private double meatRatio;
  private final double vegRatio = 0;
  
  /** 
   * Constructor.
   */
  public Carnivore() {
    meatRatio = 0.5;
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