/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : Omnivore.java
 */

import java.util.*;
import java.lang.*;

public interface Omnivore {
  /**
   * Mengembalikan nilai rasio daging.
   * @return nilai rasio daging
   */
  abstract public double GetMeatRatio();

  /**
   * Mengembalikan nilai rasio sayur.
   * @return nilai rasio sayur
   */
  abstract public double GetVegRatio();
}
