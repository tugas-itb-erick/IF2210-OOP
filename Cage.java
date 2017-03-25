/* NIM/Nama : 13515057 / Erick Wijaya */
/* File     : Cage.java */

import java.io.*;
import java.util.*;
import java.lang.*;

public class Cage implements Renderable {
  private int size; // size of cage
  private int used; // space used in cage
  private int n_animal; // total animals in cage
  private int[] row; // row position of ith animal
  private int[] col; // column position of ith animal
  private Animal[] animal;
  private char habitat;

  /******* CONSTRUCTOR *******/
  public Cage(){
    size = 10;
    used = 0;
    n_animal = 0;
    row = new int[size];
    col = new int[size];
    animal = new Animal[size];
    habitat = '?';
  }

  public Cage(int s){
    size = s;
    used = 0;
    n_animal = 0;
    row = new int[size];
    col = new int[size];
    animal = new Animal[size];
    habitat = '?';
  }

  /******* GETTER *******/
  public int GetSize(){
    return size;
  }

  public int GetTotalAnimal(){
    return n_animal;
  }

  public int GetRow(int i){
    return row[i];
  }

  public int GetCol(int i){
    return col[i];
  }

  public Animal GetAnimal(int i){
    return animal[i];
  }

  public char GetHabitat(){
    return habitat;
  }

  /******* SETTER *******/
  public void SetHabitat(char h){
    habitat = h;
  }

  // only use this if you want to recreate the cage i.e. input cage
  // WARNING all existing cage data will be lost
  // f.s. cage is empty with new size s
  public void SetNewCage(int s){
    size = s;
    row = new int[size];
    col = new int[size];
    animal = new Animal[size];
  }

  /******* PREDICATE *******/
  public boolean IsFull(){
    return (double)n_animal >= (double)size*0.3;
  }

  public boolean IsWild(){
    int i = 0;
    boolean found = false;

    while ((i<n_animal) && (!found)){
      if (animal[i].IsWild())
        found = true;
      else
        i++;
    }

    return found;
  }

  public boolean SearchPosition(int r, int c){
    int i = 0;
    boolean found = false;

    while ((i<size) && (!found)){
      if ((row[i] == r) && (col[i] == c))
        found = true;
      else
        i++;
    }

    return found;
  }

  public boolean SearchAnimal(int r, int c){
    int i = 0;
    boolean found = false;

    while ((i<n_animal) && (!found)){
      if ((animal[i].GetRow() == r) && (animal[i].GetCol() == c))
        found = true;
      else
        i++;
    }

    return found;
  }

  void AddPosition(int r, int c){
    if (used < size){
      row[used] = r;
      col[used] = c;
      used++;
    }
  }

  void AddAnimal(Animal in){
    if (!IsFull()){
      boolean valid = !IsWild();


      if (valid){
        animal[n_animal] = in/*.clone()*/;
        ++n_animal;
      }
    }
  }

  @Override
  public char Render(){
    return Character.toLowerCase(habitat);
  }

  @Override
  public String RenderWithColor(){
    return ANSI_WHITE + Render() + ANSI_RESET;
  }

  void Print(){
    System.out.println("Total size: " + size);
    for(int i=0; i<used; i++){
      System.out.println(row[i] + " " + col[i]);
    }
    for(int i=0; i<n_animal; i++){
      animal[i].DisplayAnimalData();
    }
  }

  void Interact(){
    int i = 0;
    while (i < n_animal){
      animal[i].Interact();
      i++;
    }
  }

  void MoveAnimal(){
    int i = 0;

    while (i<n_animal){
      Random rand = new Random();
      int rd = rand.nextInt(4) + 1;
      switch (rd){ // 1-up, 2-right, 3-down, 4-left
        case 1:
        if (SearchPosition(animal[i].GetRow()-1, animal[i].GetCol()) && !SearchAnimal(animal[i].GetRow()-1, animal[i].GetCol()))
          animal[i].SetRow(animal[i].GetRow()-1);
        break;

        case 2:
        if (SearchPosition(animal[i].GetRow(), animal[i].GetCol()+1) && !SearchAnimal(animal[i].GetRow(), animal[i].GetCol()+1))
          animal[i].SetCol(animal[i].GetCol()+1);
        break;

        case 3:
        if (SearchPosition(animal[i].GetRow()+1, animal[i].GetCol()) && !SearchAnimal(animal[i].GetRow()+1, animal[i].GetCol()))
          animal[i].SetRow(animal[i].GetRow()+1);
        break;

        case 4:
        if (SearchPosition(animal[i].GetRow(), animal[i].GetCol()-1) && !SearchAnimal(animal[i].GetRow(), animal[i].GetCol()-1))
          animal[i].SetCol(animal[i].GetCol()-1);
        break;
      }

      i++;
    }
  }

  double CountConsumedMeat(){
    double sum = 0;
    for(int i=0; i<n_animal; i++){
      //sum += animal[i].CountConsumedMeat();
    }
    return sum;
  }

  double CountConsumedVeggie(){
    double sum = 0;
    for(int i=0; i<n_animal; i++){
      //sum += animal[i].CountConsumedMeat();
    }
    return sum;
  }

  Cage Clone(Cage in){
    Cage out = new Cage(in.GetSize());

    out.SetHabitat(in.GetHabitat());

    for(int i=0; i<out.GetSize(); i++){
      out.AddPosition(in.GetRow(i), in.GetCol(i));
    }
    for(int i=0; i<in.GetTotalAnimal(); i++){
      out.AddAnimal(in.GetAnimal(i));
    }

    return out;
  }

  void Read(Scanner in){
    int s = in.nextInt();
    SetNewCage(s);
    for(int i=0; i<s; i++){
      int x = in.nextInt();
      int y = in.nextInt();
      AddPosition(x, y);
    }
  }


}
