/* NIM/Nama : 13515078 / Veren Iliana Kurniadi */
/* File     : Omnivore.java                    */

import java.util.*;
import java.lang.*;

public interface Omnivore {
  private double meatRatio;
  private double vegRatio; 
  
  /** 
   * Constructor.
   */
  public Omnivore() {
    meatRatio = 0.3;
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