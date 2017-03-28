/**
 * @author NIM/Nama : 13515078 / Veren Iliana Kurniadi
 * File : Omnivore.java
 */

package animal.diet;

public interface Omnivore {
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
