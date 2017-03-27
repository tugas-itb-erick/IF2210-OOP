/** @author NIM / Nama	: 13515144 / William	
  * Nama file	: MElephant.java			
  */

import java.util.*;
import java.lang.*;

public class MElephant {
	public static void main(String[] args) {
    Elephant Elephant1 = new Elephant("Elephant1",2000, Sex.MALE, 2, 2);
    Elephant1.displayAnimalData();
    
    System.out.println();
    System.out.println("Test fungsi clone()");
    Elephant Elephant2 = new Elephant();
    Elephant2 = Elephant1.clone();
    Elephant2.displayAnimalData();
  }
}
