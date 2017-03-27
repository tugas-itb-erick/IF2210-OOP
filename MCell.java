/** @author NIM/Nama : 13515057 / Erick Wijaya 
  * File     : MCell.java 
  */

import java.util.*;
import java.lang.*;

class MCell extends Cell {
  public MCell(){}

  @Override
  public char render(){
    return 'c';
  }

  @Override
  public String renderWithColor(){
    return ANSI_BOLD + ANSI_UNDERLINE + ANSI_GREEN + render() + ANSI_RESET;
  }

  public static void main(String[] args) {
    MCell tes = new MCell();

    System.out.println("tes");
    System.out.println(tes.render());
    System.out.println(tes.renderWithColor());
    System.out.println("tes");

  }
}
