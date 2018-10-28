/** 
  * @author NIM/Nama: 13515144 / William
  * Nama file : MAnimal.java
  */

import java.util.*;
import java.lang.*;

public class MAnimal {
  public static void main(String[] args) {
    Animal tesAnimal = new Animal("TestElephant1",200, Sex.MALE, 4, 'h', 0.2, 0.2, 'E', 2, 2, Habitat.LANDANIMAL, 0);
    tesAnimal.DisplayAnimalData();
    System.out.println();
    System.out.print("Test Render:");
    System.out.println(tesAnimal.RenderWithColor());
    System.out.println("VegConsumed:"+tesAnimal.GetWeight()+" x "+tesAnimal.GetVegRatio()+"= "+ tesAnimal.CountConsumedVeggie());
    System.out.println("MeatConsumed:"+tesAnimal.GetWeight()+" x "+tesAnimal.GetMeatRatio()+"= "+ tesAnimal.CountConsumedMeat());
  }
}