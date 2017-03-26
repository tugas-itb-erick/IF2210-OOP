/* NIM/Nama : 13515xxx / Abc Def */
/* File     : Driver.java */

import java.util.*;
import java.io.*;

public class Driver {
  public static Zoo myZoo;

  public static void CreateZoo(){
    try{
      Scanner inZoo = new Scanner(new File("zoo.txt"));
      Scanner inCage = new Scanner(new File("cage.txt"));
      Scanner inAnimal = new Scanner(new File("animal.txt"));
      Scanner in = new Scanner(System.in);
      Zoo myZoo = new Zoo();
      // Read Zoo from file
      myZoo.Read(inZoo);
      // Read Cage from file and add to Zoo
      int n_cage = inCage.nextInt();
      for(int i=0; i<n_cage; i++){
        Cage myCage = new Cage();
        myCage.Read(inCage);
        myZoo.AddCage(myCage);
      }
      // Read Animal from file and add to Zoo
      int n_animal = inAnimal.nextInt();
      for(int i=0; i<n_animal; i++){
        AnimalFactory af = new AnimalFactory();
        Animal myAnimal = af.Read(inAnimal);
        myZoo.AddAnimal(myAnimal);
      }
    }
    catch(FileNotFoundException e){
      System.out.println(e);
    }
  }

  public static void ShowMenu(){
    System.out.println("Selamat datang di Kebun Binatang Virtual Zoo!");
    System.out.println("1. Menampilkan peta Kebun Binatang");
    System.out.println("2. Menampilkan seluruh peta pada Kebun Binatang");
    System.out.println("3. Menampilkan total makanan yang dimakan seluruh hewan");
    System.out.println("4. Tour Kebun Binatang!");
    System.out.println("5. Quit");
    System.out.println("Pilih angka 1..5 :");
  }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    CreateZoo();
    int n;
    do{
      ShowMenu();
      n = in.nextInt();
      switch (n) {
        case 1:
          System.out.print("Input angka x1 y1 x2 y2 : ");
          int x1 = in.nextInt(), y1 = in.nextInt(), x2 = in.nextInt(), y2 = in.nextInt();
          myZoo.Display(x1, y1, x2, y2);
          break;
        case 2:
          myZoo.Display();
          break;
        case 3:
          myZoo.PrintConsumedFood();
          break;
        case 4:
          myZoo.Tour();
          break;
        case 5:
          System.out.print("Thank You For Visiting Our Zoo");
          break;
        default:
          break;
      }
      System.out.println();
    }while(n != 5);
  }
}
