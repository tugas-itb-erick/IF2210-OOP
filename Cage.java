/* NIM/Nama : 13515057 / Erick Wijaya */
/* File     : Cage.java */

import java.io.*;
import java.util.*;
import java.lang.*;

public class Cage implements Renderable {
  private int size; // size of cage
  private int n_animal; // total animals in cage
  private int[] row; // row position of ith animal
  private int[] col; // column position of ith animal
  private Animal[] animal;
  private char habitat;

  /******* CONSTRUCTOR *******/
  Cage(){
    size = 10;
    n_animal = 0;
    row = new int[size];
    col = new int[size];
    animal = new Animal[size];
    habitat = '?';
  }

  Cage(int s){
    size = s;
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

  public int getAnimal(int i){
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

}
