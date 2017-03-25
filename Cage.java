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
  Cage(){
    size = 10;
    used = 0;
    n_animal = 0;
    row = new int[size];
    col = new int[size];
    animal = new Animal[size];
    habitat = '?';
  }

  Cage(int s){
    size = s;
    used = 0;
    n_animal = 0;
    row = new int[size];
    col = new int[size];
    animal = new Animal[size];
    habitat = '?';
  }

  /******* GETTER *******/
  public int getSize(){
    return size;
  }

  public int getTotalAnimal(){
    return n_animal;
  }

  public int getRow(int i){
    return row[i];
  }

  public int getCol(int i){
    return col[i];
  }

  public Animal getAnimal(int i){
    return animal[i];
  }

  public char getHabitat(){
    return habitat;
  }

  /******* SETTER *******/
  public void setHabitat(char h){
    habitat = h;
  }

  /******* PREDICATE *******/
  public boolean isFull(){
    return (double)n_animal >= (double)size*0.3;
  }

  public boolean isWild(){
    int i = 0;
    boolean found = false;

    while ((i<n_animal) && (!found)){
      if (animal[i].getWild())
        found = true;
      else
        i++;
    }

    return found;
  }

  public boolean searchPosition(int r, int c){
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

  public boolean searchAnimal(int r, int c){
    int i = 0;
    boolean found = false;

    while ((i<n_animal) && (!found)){
      if ((animal[i].getRow() == r) && (animal[i].getCol() == c))
        found = true;
      else
        i++;
    }

    return found;
  }

  @Override
  public String renderWithColor(){
    return ANSI_WHITE + Character.toLowerCase(habitat) + ANSI_RESET;
  }

  @Override
  public char render(){
    return Character.toLowerCase(habitat);
  }

  void interact(){
    int i = 0;
    while (i < n_animal){
      animal[i].interact();
      i++;
    }
  }

  void print(){
    System.out.println("Total size: " + size);
    for(int i=0; i<used; i++){
      System.out.println(row[i] + " " + col[i]);
    }
    for(int i=0; i<n_animal; i++){
      animal[i].DisplayAnimalData();
    }
  }

  void addPosition(int r, int c){
    if (used < size){
      row[used] = r;
      col[used] = c;
      used++;
    }
  }

  void addAnimal(Animal in){
    if (!isFull()){
      boolean valid = !isWild();
      

      if (valid){
        animal[n_animal] = in/*.clone()*/;
        ++n_animal;
      }
    }
  }

}
