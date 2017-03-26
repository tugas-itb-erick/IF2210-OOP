/** @author NIM / Nama	: 13515144 / William	
  * Nama file	: MElephant.java			
  */

import java.util.*;
import java.lang.*;

public class MElephant {
	public static void main(String[] args) {
    Elephant Elephant1 = new Elephant("Elephant1",2000, Sex.MALE, 2, 2);
    Elephant1.DisplayAnimalData();
    
    System.out.println();
    System.out.println("Test fungsi Clone()");
    Elephant Elephant2 = new Elephant();
    Elephant2 = Elephant1.Clone();
    Elephant2.DisplayAnimalData();
  }
}
