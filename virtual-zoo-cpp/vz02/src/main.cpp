/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Zoo_driver.cpp          */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "zoo/zoo.h"
#include "cage/cage.h"
#include "cell/cell.h"
#include "animal/animal.h"
using namespace std;

int main(){
	int i,j,k,n;
	ifstream fin, f2;
	Zoo z;
	Animal * a;

	int NeffA, NeffC;

	int indeks,ia,ic;
	int temp;
	int size;

	fin.open("zoo.txt");
	if (fin.is_open())
	{
		fin >> z;
		fin.close();
	}

	int ncage = 21;

	fin.open("animal.txt");
	if (fin.is_open()){
		fin >> NeffA;
		a = new Animal [NeffA];

		for (j =0;j<NeffA;j++)
		{
			fin >> a[j];
		}

		fin.close();
	}

	f2.open("cage.txt");
	if (f2.is_open()){
		fin >> NeffC;
		//z.t_cage = new Cage [NeffC];
		for(j=0;j<NeffC;j++)
		{
			fin >> size;
			z.t_cage[j] = Cage(size);
			for (indeks =0 ; indeks<(size*2) ; indeks++)
			{
				fin >> temp;
				z.t_cage[j].setValue(indeks,temp);
			}
		}

		f2.close();
	}

	for (indeks = 0; indeks<NeffA; indeks++)
	{
		bool set = false;
		bool buas = false;
		j = 0;
		while ((j < NeffC) &&!set)
		{
			//if (z.t_cage[j].Search(a[indeks].getM(), a[indeks].getN()))
			cout <<"2"<<endl;
				if (!z.t_cage[j].isFull())
				{cout <<"3"<<endl;
					if ((a[indeks].getHabitat() == z.getCell(a[indeks].getM(), a[indeks].getN()).getId()) || (a[indeks].getHabitat() == 'Q' && (z.getCell(a[indeks].getM(), a[indeks].getN()).getId()=='X' || z.getCell(a[indeks].getM(), a[indeks].getN()).getId()=='#')))
					{cout <<"4"<<endl;
						if (a[indeks].getWild())
						{cout <<"5"<<endl;
							k = 0;
							while(k<z.t_cage[j].getSize() && !set)
							{cout <<"6"<<endl;
								//if ((z.t_cage[j].getAnimal(k).getSpecies() == a[indeks].getSpecies()) || (z.t_cage[j].getAnimal(k).getSpecies()==NONE))
								cout <<a[indeks].getId()<<endl;
									z.t_cage[j].setAnimal(a[indeks]);
									set = true;

								k++;
							}
						}
						else
						{
							k = 0;
							buas = false;
							while(k<z.t_cage[j].getSize() && !buas)
							{

								if (z.t_cage[j].getAnimal(k).getWild()&&z.t_cage[j].getAnimal(k).getSpecies()!=NONE)
								{
									buas= true;
								}
								k++;
							}
							if (!buas && k!=0)
							{
								z.t_cage[j].setAnimal(a[indeks]);
								set = true;
							}
						}
					}

			}
			j++;
			set = false;
			buas = false;
		}
	}

	/*for (j=0; j<0; j++)
	{
		ia = 0;
		ic = 0;

		while (ic<z.t_cage[j].getSize()*2 && ia<z.t_cage[j].getSize()){
			cout<< j << " " << z.t_cage[j].getAnimal(ia).getM() <<" "<< z.t_cage[j].getAnimal(ia).getN() << " " << z.t_cage[j].getAnimal(ia).getId()<< endl;
			ic += 2;
			ia++;
		}
	}*/

	bool found;
	int pilihan;
	cout << "Masukkan angka: " << endl;
	cout << "1: Dislay kebun binatang " << endl;
	cout << "2: Tour " << endl;
	cout << "3: Hitung makanan" << endl;
	cin >> pilihan;
	if (pilihan ==1)
	{
		for (i=0; i<15;i++)
		{
			for (j=0;j<15;j++)
			{
				switch (z.c[i][j].getId())
				{
					case 'R' :
					case '*' :
					case '-' :
					case 'i' :
					case 'o' :	cout << z.c[i][j].getId() << " "; break;
					case 'X' :
					case '#' :
					case 'O' :
					{
						k =0; found = false;
						while(k<45 && !found)
						{
							if ((a[k].getM() == i) && (a[k].getN() == j)){found = true;}
							else {	k++; }
						}
						if (found){cout << a[k].getId() << " ";}
						else {cout << z.c[i][j].getId() << " ";}
						break;
					}
				}
			}
			cout << endl;
		}
	}
	else if (pilihan ==2)
	{
	int visited[15][15];
	for (i =0; i< 15; i++)
	{
		for (j=0;j<15;j++)
		{	if ((z.c[i][j].getId()) == 'i' || (z.c[i][j].getId()) == 'o' || (z.c[i][j].getId()) == '-')
			{
				visited[i][j] = 1;
			}
			else
			{
				visited[i][j] = 0;
			}
		}
	}

	int py;
	int px;
	srand(time(NULL));
	do
	{
		px = rand() % 15;
		py = rand() % 15;
	}
	while (z.getCell(px,py).getId() != 'i');

	visited[px][py] = 1;
	bool found = false;
	i = px;
	j = py;
	while ((z.getCell(i,j).getId() != 'o') && i<15 && j< 15 && i>=0 && j>=0)
	{
		visited[i][j] = 0;
		cout << "(" << i << "," << j << ") :" << endl;

		bool fcage = false;
		int icage = 0;
		while ((icage < ncage) && !fcage){
		  if (z.t_cage[icage].Search(i+1, j)){
			z.t_cage[icage].PrintInteract();
			fcage = true;
		  }else{
			icage++;
		  }
		}

		fcage = false;
		icage = 0;
		while ((icage < ncage) && !fcage){
		  if (z.t_cage[icage].Search(i-1, j)){
			z.t_cage[icage].PrintInteract();
			fcage = true;
		  }else{
			icage++;
		  }
		}

		fcage = false;
		icage = 0;
		while ((icage < ncage) && !fcage){
		  if (z.t_cage[icage].Search(i, j+1)){
			z.t_cage[icage].PrintInteract();
			fcage = true;
		  }else{
			icage++;
		  }
		}

		fcage = false;
		icage = 0;
		while ((icage < ncage) && !fcage){
		  if (z.t_cage[icage].Search(i, j-1)){
			z.t_cage[icage].PrintInteract();
			fcage = true;
		  }else{
			icage++;
		  }
		}

		if ((i+1<15) && visited[i+1][j])
		  i++;
		else if ((i-1>=0) && visited[i-1][j])
		  i--;
		else if ((j+1<15) && visited[i][j+1])
		  j++;
		else if ((j-1>=0) && visited[i][j-1])
		  j--;
		else
		  break;
		}
	}
	else if (pilihan==3)
	{
		cout << "Jumlah daging : " << z.ConsumedMeat() << " kg"<< endl;
		cout << "Jumlah sayuran : " << z.ConsumedVeg() << " kg"<< endl;
	}

	delete [] a;
	return 0;
}
