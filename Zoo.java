/* NIM/Nama : 13515057 / Erick Wijaya */
/* File     : Zoo.java */

import java.io.*;
import java.util.*;
import java.lang.*;

public class Zoo {
  private static final int DEFROW = 50;
  private static final int DEFCOL = 50;
  private int row;
  private int col;
  private int n_cage;
  private Cell[][] cell;
  private Cage[] cage;

  Zoo(){
    row = DEFROW;
    col = DEFCOL;
    cell = new Cell[row][col];
    cage = new Cage[row*col];
    n_cage = 0;
  }

  Zoo(int r, int c){
    row = r;
    col = c;
    cell = new Cell[row][col];
    cage = new Cage[row*col];
    n_cage = 0;
  }

  int getRow(){
    return row;
  }

  int getCol(){
    return col;
  }

  int getTotalCage(){
    return n_cage;
  }

  Cell getCell(int i, int j){
    return cell[i][j]
  }

  Cage getCage(int i){
    return cage[i];
  }

  void addCage(Cage c){

  }

  void display(int x1, int y1, int x2, int y2){
    if ((x1 < 0) || (x2 >= row) || (y1 < 0) || (y2 >=col) || (x1 > x2) || (y1 > y2)){
      System.out.println("Indeks posisi zoo tidak boleh negatif atau lebih besar dari ukuran sebenarnya.");
    }
    else{
      for(int i=x1; i<=x2; i++){
        for(int j=y1; j<y2; j++){

        }
        System.out.println();
      }
    }
  }

  void display(){
    display(0, 0, row-1, col-1);
  }

  void tour(){
    int x = ThreadLocalRandom.current().nextInt(min, max + 1);
  }


}
