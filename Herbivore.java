/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : Herbivore.java
 */

import java.util.*;
import java.lang.*;

public interface Herbivore {
  /**
   * Mengembalikan nilai rasio daging.
   * @return nilai rasio daging
   */
  public double getMeatRatio();

  /**
   * Mengembalikan nilai rasio sayur.
   * @return nilai rasio sayur
   */
  public double getVegRatio();
}
