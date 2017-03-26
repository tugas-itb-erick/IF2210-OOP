/** 
  * @author NIM/Nama: 13515144 / William
  * Nama file : Animal.java
  */

import java.util.*;
import java.lang.*;

public class Animal {
  private Species species;
  private String name;
  private double weight;
  private Sex sex;
  private int heart_chamber;
  private char blood;
  private double veg_ratio;
  private double meat_ratio;
  private char id;
  private int row;
  private int col;
  private Habitat habitat;
  private int wild;
  
  /** 
   * Konstruktor
   */
  public Animal() {
    name="unnamed";
    weight = 0;
    sex = Sex.FEMALE;
    heart_chamber=0;
    blood = '?';
    veg_ratio = 0;
    meat_ratio = 0;
    id = '?';
    row = 0;
    col = 0;
    habitat = Habitat.HABITAT_NONE;
    wild = 0;
  }
  
  /**
   * Konstruktor dengan parameter
   * @param _name nama hewan
   * @param _weight berat hewan
   * @param _sex jenis kelamin hewan (MALE/FEMALE)
   * @param _hc jumlah ruang jantung
   * @param _blood jenis darah ('h'/'c')
   * @param _veg rasio sayur
   * @param _meat rasio daging
   * @param _id karakter id hewan
   * @param _row posisi hewan (baris)
   * @param _col posisi hewan (kolom)
   * @param _habitat jenis hewan bedasarkan tempat hidup
   * @param _wild liar/tidaknya hewan
   */
  public Animal(String _name, double _weight, Sex _sex, int _hc, char _blood, 
                double _veg, double _meat, char _id, int _row, int _col, 
                Habitat _habitat,int _wild) {
    name = _name;
    weight = _weight;
    sex = _sex;
    heart_chamber = _hc;
    blood = _blood;
    veg_ratio = _veg;
    meat_ratio = _meat;
    id = _id;
    row = _row;
    col =_col;
    habitat = _habitat; 
    wild = _wild;
  }
  
  /**
   * Melakukan duplikasi binatang
   * @return binatang yang diduplikasi
   */
  public Animal Clone() {
    Animal out = new Animal(name, weight, sex, heart_chamber, blood, veg_ratio,
                            meat_ratio, id, row, col, habitat, wild);
    return out;
  }
  
  /**
   * Mengembalikan nama dari binatang
   * @return nama binatang
   */
  public String GetName() {
    return name;
  }

  /**
   * Mengembalikan berat dari binatang
   * @return berat binatang
   */
  public double GetWeight() {
    return weight;
  }

  /**
   * Mengembalikan jenis kelamin dari binatang
   * @return jenis kelamin binatang
   */
  public Sex GetSex() {
    return sex;
  }
  
  /**
   * Mengembalikan ruang jantung dari binatang
   * @return ruang jantung binatang
   */
  public int GetHeartChamber() {
    return heart_chamber;
  }
  
  /**
   * Mengembalikan jenis darah (panas/dingin) dari binatang
   * @return jenis darah (panas/dingin)  binatang
   */
  public char GetBlood() {
    return blood;
  }
  
  /**
   * Mengembalikan rasio konsumsi sayur dari binatang
   * @return rasio konsumsi sayur binatang
   */
  public double GetVegRat() {
    return veg_ratio;
  }
  
  /**
   * Mengembalikan rasio konsumsi daging dari binatang
   * @return rasio konsumsi daging binatang
   */
  public double GetMeatRat() {
    return meat_ratio;
  }

  /**
   * Mengembalikan id dari binatang
   * @return id binatang
   */
  public char GetId() {
    return id;
  }
  
  /**
   * Mengembalikan posisi baris dari binatang
   * @return posisi baris binatang
   */
  public int GetRow() {
    return row;
  }

  /**
   * Mengembalikan posisi kolom dari binatang
   * @return posisi kolom binatang
   */
  public int GetCol() {
    return col;
  }
  
  /**
   * Mengembalikan habitat dari binatang
   * @return id binatang
   */
  public Habitat GetHabitat() {
    return habitat;
  }
  
  /**
   * Memeriksa liar/tidaknya binatang
   * @return id binatang
   */
  public boolean IsWild() { 
    return (wild==1);
  }

  /**
   * Menampilkan data atribut dari binatang ke layar
   */
  public void DisplayAnimalData() {
    System.out.println("Name: " + name);
    System.out.println("Weight: "+ weight);
    System.out.println("Sex: "+ sex);
    System.out.println("HeartChamber: " + heart_chamber);
    System.out.println("Blood: " + blood);
    System.out.println("VegRatio: " + veg_ratio);
    System.out.println("MeatRatio: " + meat_ratio);
    System.out.println("Id: " + id);
    System.out.println("RowPosition: "+ row);
    System.out.println("ColPosition: "+ col);
    System.out.println("Habitat: "+ habitat);
    if (IsWild())
      System.out.println("Wild: true");
    else
      System.out.println("Wild: false");
  }

  /**
   * Menampilkan interaksi dari binatang
   */
  public void Interact() {
    if (species == species.ELEPHANT)
    System.out.println("This elephant is trumpeting!!");
    else if (species == species.GIRAFFE)
      System.out.println("This girrafe is eating high tree leaves");
    else if (species == species.LION)
      System.out.println("Roarrrr..!!");
    else if (species == species.TIGER)
      System.out.println("Grrrr...!! Grrr...!!");
    else if (species == species.ORANGUTAN)
      System.out.println("This orangutan is playing on a tree!");
    else if (species == species.CHIMPANZEE)
      System.out.println("U u a a ... U u a a");
    else if (species == species.KOMODO)
      System.out.println("So amazing komodo!!");
    else if (species == species.BEAR)
      System.out.println("Growl.. Growl..");
    else if (species == species.WHALE)
      System.out.println("This whale created a huge splash!");
    else if (species == species.DOLPHIN)
      System.out.println("This dolphin loves to jump!");
    else if (species == species.CLOWNFISH)
      System.out.println("This clownfish lives among the anemone");
    else if (species == species.BLUETANG)
      System.out.println("This blue tang just keeps swimmming!");
    else if (species == species.PIRANHA)
      System.out.println("This piranha eats voraciously!");
    else if (species == species.PUFFFISH)
      System.out.println("This puff fish is fat!");
    else if (species == species.EAGLE)
      System.out.println("This eagle is soaring in the sky!");
    else if (species == species.CENDRAWASIH)
      System.out.println("This cendrawasih is resting gracefully!");
    else if (species == species.OWL)
      System.out.println("Hooo... Hooo...");
    else if (species == species.BAT)
      System.out.println("This bat is sleeping upside down!");
    else if (species == species.MACAU)
      System.out.println("This macau is very pretty!");
    else if (species == species.COCKATOO)
      System.out.println("This cockatoo is repeating what you're saying!");
    else if (species == species.FROG)
      System.out.println("Croag.... Croag.... Ribbet... Ribbet...");
    else if (species == species.ALLIGATOR)
      System.out.println("Hiss.....");
    else if (species == species.HIPPOPOTAMUS)
      System.out.println("This hippo is so big");
    else if (species == species.TURTLE)
      System.out.println("This turtle is walking slowly");
    else 
      System.out.println("ERROR: Nama spesies salah");
  }

  /**
   * Mengembalikan jumlah daging yang dikonsumsi
   * @return jumlah daging yang dikonsumsi
   */
  public double CountConsumedMeat() {
    return meat_ratio*weight;
  }

  /**
   * Mengembalikan jumlah makanan tumbuhan yang dikonsumsi
   * @return jumlah makanan tumbuhan yang dikonsumsi
   */
  public double CountConsumedVeggie() {
    return veg_ratio*weight;
  } 

  /**
   * Mengembalikan karakter id hewan untuk nantinya ditampilkan
   * @return karakter id hewan
   */
  public char Render() {
    return GetId();
  }
  
  /**
   * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan
   * @return kode warna dan karakter binatang
   */
  public String RenderWithColor() {
    if (habitat==habitat.LANDANIMAL)
      return Color.ANSI_YELLOW + Render() + Color.ANSI_RESET;
    else if (habitat==habitat.WATERANIMAL)
      return Color.ANSI_CYAN + GetId() + Color.ANSI_RESET;
    else if (habitat==habitat.FLYINGANIMAL)
      return Color.ANSI_RED + GetId() + Color.ANSI_RESET;
    else
      return Color.ANSI_WHITE + GetId() + Color.ANSI_RESET;
  }
}
