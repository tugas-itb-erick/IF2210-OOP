/** 
  * @author NIM/Nama: 13515144 / William
  * Nama file : Amphibia.java
  */

import java.util.*;
import java.lang.*;

public interface Amphibia {
  /** 
   * Mengembalikan jumlah ruang jantung hewan
   * @return jumlah ruang jantung hewan
   */
  abstract public int GetHeartChamber();

  /** 
   * Mengembalikan jenis darah hewan ('h'/'c')
   * @return jenis darah hewan ('h'/'c')
   */
  abstract public char GetBloodTemperature();
}
