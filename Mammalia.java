/** 
  * @author NIM/Nama: 13515144 / William
  * Nama file : Mammalia.java
  */

import java.util.*;
import java.lang.*;

public interface Mammalia {
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
