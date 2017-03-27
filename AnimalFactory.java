/** 
  * @author NIM/Nama : 13515057 / Erick Wijaya
  * Nama File        : AnimalFactory.java 
  */

import java.io.*;
import java.util.*;
import java.lang.*;

public class AnimalFactory {
  /** 
  * Konstruktor
  */
  public AnimalFactory(){}

  /** 
  * Mengembalikan objek binatang dari suatu input "Scanner"
  * @param in scanner input
  * @return binatang yang diciptakan
  */
  public Animal read(Scanner in){
    String s = in.next();
    String name = in.next();
    double weight = in.nextDouble();
    String sex_s = in.next();
    Sex sex = (sex_s.equalsIgnoreCase("MALE"))? Sex.MALE : Sex.FEMALE;
    int row = in.nextInt();
    int col = in.nextInt();

    if (s.equalsIgnoreCase("Elephant")){
      return new Elephant(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Giraffe")){
      return new Giraffe(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Lion")){
      return new Lion(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Tiger")){
      return new Tiger(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Orangutan")){
      return new Orangutan(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Chimpanzee")){
      return new Chimpanzee(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Komodo")){
      return new Komodo(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Bear")){
      return new Bear(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Whale")){
      return new Whale(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Dolphin")){
      return new Dolphin(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Clownfish")){
      return new ClownFish(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("BlueTang")){
      return new BlueTang(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Piranha")){
      return new Piranha(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("PuffFish")){
      return new PuffFish(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Eagle")){
      return new Eagle(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Cendrawasih")){
      return new Cendrawasih(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Owl")){
      return new Owl(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Bat")){
      return new Bat(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Macau")){
      return new Macau(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Cockatoo")){
      return new Cockatoo(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Frog")){
      return new Frog(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Alligator")){
      return new Alligator(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Hippopotamus")){
      return new Hippopotamus(name, weight, sex, row, col);
    }
    else if (s.equalsIgnoreCase("Turtle")){
      return new Turtle(name, weight, sex, row, col);
    }
    else{
      return new Elephant(name, weight, sex, row, col);
    }
  }
}
