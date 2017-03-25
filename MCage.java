/* NIM/Nama : 13515057 / Erick Wijaya */
/* File     : MCage.java */

import java.io.*;
import java.util.*;
import java.lang.*;

class MCage {

  public static void main(String[] args) {
    Cage c = new Cage(12);

    c.AddPosition(1, 2);
    c.AddPosition(3, 4);
    c.AddAnimal(new Animal("Dipsy", 200, Sex.MALE, 2, 2, true));
    c.AddAnimal(new Animal("Lala", 10, Sex.FEMALE, 2, 2, false));
    c.Interact();
    c.Print();

  }
}
