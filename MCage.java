/* NIM/Nama : 13515057 / Erick Wijaya */
/* File     : MCage.java */

import java.io.*;
import java.util.*;
import java.lang.*;

class MCage {

  public static void main(String[] args) {
    Cage c = new Cage(12);

    c.addPosition(1, 2);
    c.addPosition(3, 4);
    c.addAnimal(new Animal("Dipsy", 200, Sex.MALE, 2, 2, true));
    c.addAnimal(new Animal("Lala", 10, Sex.FEMALE, 2, 2, false));
    c.interact();
    c.print();

  }
}
