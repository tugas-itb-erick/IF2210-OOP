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

  int GetRow(){
    return row;
  }

  int GetCol(){
    return col;
  }

  int GetTotalCage(){
    return n_cage;
  }

  Cell GetCell(int i, int j){
    return cell[i][j];
  }

  Cage GetCage(int i){
    return cage[i];
  }

  // only use this if you want to recreate the zoo i.e. input zoo
  // WARNING all existing zoo data (cells and animals) will be lost
  // f.s. zoo is empty with new size rxc with
  void SetNewZoo(int r, int c){
    row = r;
    col = c;
    cell = new Cell[row][col];
    cage = new Cage[row*col];
    n_cage = 0;
  }

  void AddCage(Cage c){
    boolean valid = true;
    int i = 0;

    while ((i < C.GetSize()) && valid){
      if ((C.GetRow(i) < 0) || (C.GetCol(i) < 0))
        valid = false;
      else{
        int j = 0;
        while ((j < n_cage) && valid){
          int k = 0;
          while ((k < cg[j].GetSize()) && valid){
            if ((C.GetRow(i) == cage[j].GetRow(k)) && (C.GetCol(i) == cage[j].GetCol(k)))
              valid = false;
            else
              k++;
          }
          j++;
        }
      }
      i++;
    }

    if (valid){
      i = 0;
      while ((i<row*col) && (cage[i].GetHabitat() != '?'))
        i++;
      if (i<row*col){
        cage[i] = C.Clone();
        ++n_cage;
      }
    }
  }

  void Display(int x1, int y1, int x2, int y2){
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

  void Display(){
    Display(0, 0, row-1, col-1);
  }

  void Tour(){
    int x = ThreadLocalRandom.current().nextInt(10, 100 + 1);
  }

  void Read(Scanner in){
    int r = in.nextInt();
    int c = in.nextInt();

    SetNewZoo(r, c);
    for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
        int k = in.nextChar();
        /*switch (k){
          case 'W' : cell[i][j] = new WaterHabitat(); break;
          case 'A' : cell[i][j] = new AirHabitat(); break;
          case 'L' : cell[i][j] = new LandHabitat(); break;
          case '*' : cell[i][j] = new Park(); break;
          case 'R' : cell[i][j] = new Restaurant(); break;
          case '-' : cell[i][j] = new Road(); break;
          case 'i' : cell[i][j] = new Entrance(); break;
          case 'o' : cell[i][j] = new Exit(); break;*/
      }
    }
  }

  void PrintConsumedFood(){
    double countm = 0, countv = 0;
    for(int i=0; i<ncage; i++){
      countm += cage[i].CountConsumedMeat();
      countv += cage[i].CountConsumedVeggie();
    }
    System.out.println("Total Daging yang dikonsumsi: " + countm);
    System.out.println("Total Sayur yang dikonsumsi: " + countv);
  }


}
