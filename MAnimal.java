/* Nama / NIM	: William / 13515144	*/
/* Nama file	: MAnimal.java			*/

import java.util.*;
import java.lang.*;

public class MAnimal {
	public static void main(String[] args) {
    Animal tesAnimal = new Piranha("GreyElephant",200, Sex.MALE, 2, 2);
    tesAnimal.displayAnimalData();
		System.out.println(tesAnimal.countConsumedVeggie());
  }
}
