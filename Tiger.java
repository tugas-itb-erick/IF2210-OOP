/**
 * @author NIM / Nama	: 13515144 / William
 *	Nama file	: Tiger.java
 */

import java.util.*;
import java.lang.*;

public class Tiger extends Animal implements /*LandAnimal,*/ Carnivore, Mammalia {
	/**
	 * Constructor
	 */
	public Tiger() {
		super();
	}
	/**
	 * Constructor dengan parameter
	 * @param _name nama hewan
	 * @param _weight berat hewan
	 * @param _s jenis kelamin hewan (MALE/FEMALE)
	 * @param _r posisi hewan (baris)
	 * @param _c posisi hewan (kolom)
	 */
	public Tiger(String _name, double _weight, Sex _s, int _r, int _c) {
		super(_name, _weight, _s, _r, _c);
	}
	/**
	 * Melakukan clone hewan
	 * @return hewan yang ingin diduplikasi
	 */
	public Tiger clone() {
		Tiger out = new Tiger(name,weight,sex,row,col);
		return out;
	}
	/**
	 * Menampilkan interaksi hewan
	 */
	@Override
	public void Interact() {
		System.out.println("Grrrr...!! Grrr...!!");
	}
	/**
	 * Mengembalikan karakter dari binatang untuk ditampilkan
	 * @return karakter dari binatang
	 */
	@Override
	public char Render() {
		return 'T';
	}
	/**
	 * Mengembalikan string berisi kode warna dan karakter dari binatang untuk ditampilkan
	 * @return kode warna dan karakter binatang
	 */
	@Override
	public String RenderWithColor() {
		return ANSI_YELLOW + Render() + ANSI_RESET;
	}
	/**
	 * Mengembalikan liar/tidaknya binatang
	 * @return true jika liar, false jika jinak
	 */
	@Override
	public boolean IsWild() {
		return true;
	}
  @Override
  public int GetHeartChamber() {
    return 4;
  }
 /**
   * Mengembalikan jenis darah hewan ('h'/'c')
   * @return jenis darah hewan ('h'/'c')
   */
  @Override
  public char GetBloodTemperature() {
    return 'h';
  }
  /**
   * Mengembalikan jumlah ratio sayur yang dibutuhkan terhadap berat hewan
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double GetVegRatio() {
  	return 0;
  }
  /**
   * Mengembalikan jumlah ratio daging yang dibutuhkan terhadap berat hewan
   * @return ratio sayur yang dibutuhkan hewan
   */
  @Override
  public double GetMeatRatio() {
  	return 0.03;
  }
  /**
   * Mengembalikan jumlah sayur yang dikonsumsi
   * @return jumlah sayur yang dikonsumsi
   */
  @Override
  public double CountConsumedVeggie() {
    return weight*GetVegRatio();
  }
  /**
   * Mengembalikan jumlah daging yang dikonsumsi
   * @return jumlah daging yang dikonsumsi
   */
  @Override
  public double CountConsumedMeat() {
    return weight*GetMeatRatio();
  }
}
