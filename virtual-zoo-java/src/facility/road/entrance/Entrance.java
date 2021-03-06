/**
 * @author NIM / Nama : 13515087 / Audry Nyonata
 *  Nama file : Entrance.java
 */

package facility.road.entrance;

import facility.road.Road;

public class Entrance extends Road {
  /**
   * Constructor.
   */
  public Entrance() {
    super();
  }
  
  /**
   * Mengembalikan karakter untuk ditampilkan ke layar.
   * @return id bertipe char
   */
  public char render() {
    return 'i';
  }
  
  /**
   * Mengembalikan warna untuk ditampilkan ke layar.
   * @return color warna renderable
   */
  public String renderWithColor() {
    return ANSI_WHITE + render() + ANSI_RESET;
  }
}