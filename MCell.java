/* NIM/Nama : 13515057 / Erick Wijaya */
/* File     : MCell.java */

import java.util.*;
import java.lang.*;

class MCell extends Cell {
  public MCell(){}

  @Override
  public char Render(){
    return 'c';
  }

  @Override
  public String RenderWithColor(){
    return ANSI_BOLD + ANSI_UNDERLINE + ANSI_GREEN + Render() + ANSI_RESET;
  }

  public static void main(String[] args) {
    MCell tes = new MCell();

    System.out.println("tes");
    System.out.println(tes.Render());
    System.out.println(tes.RenderWithColor());
    System.out.println("tes");

  }
}
