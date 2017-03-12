/* NIM/Nama  : 13515144 / William      */
/* File      : Animal.cpp              */

#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(){
	
}

Animal::Animal(string _name, double _weight, Sex _s, int _r, int _c,char _id, Color _color) : Renderable(_id,_color) {
	name=_name;
	weight=_weight;
	s=_s;
	row=_r;
	col=_c;
}

Animal::Animal(const Animal& A) : Renderable(A) {
	name=A.name;
	weight=A.weight;
	s=A.s;
	row=A.row;
	col=A.col;
}

Animal::~Animal(){
}

Animal& Animal::operator=(const Animal& A){
	Renderable::operator=(A);
	name=A.name;
	weight=A.weight;
	s=A.s;
	row=A.row;
	col=A.col;
	return *this;
}

istream& operator>>(istream& in, Animal& A){
	string kelas;
	string name;
	double weight;
	char sc;
	Sex s;
	int row, col;

	in >> kelas >> name >> weight >> sc >> row >> col;
	if (sc == 'm')
		s = male;
	else
		s = female;

	if (kelas == "Elephant")
	{
		A = new Elephant(name, weight, s, row, col);
	}
	else if (kelas == "Giraffe")
	{
		A = new Giraffe(name, weight, s, row, col);
	}
	else if (kelas == "Lion")
	{
		A = new Lion(name, weight, s, row, col);
	}
	else if (kelas == "Tiger")
	{
		A = new Tiger(name, weight, s, row, col);
	}
	else if (kelas == "Orangutan")
	{
		A = new Orangutan(name, weight, s, row, col);
	}
	else if (kelas == "Chimpanzee")
	{
		A = new Chimpanzee(name, weight, s, row, col);
	}
	else if (kelas == "Komodo")
	{
		A = new Komodo(name, weight, s, row, col);
	}
	else if (kelas == "Bear")
	{
		A = new Bear(name, weight, s, row, col);
	}
	else if (kelas == "Whale")
	{
		A = new Whale(name, weight, s, row, col);
	}
	else if (kelas == "Dolphin")
	{
		A = new Dolphin(name, weight, s, row, col);
	}
	else if (kelas == "Clownfish")
	{
		A = new Clownfish(name, weight, s, row, col);
	}
	else if (kelas == "BlueTang")
	{
		A = new BlueTang(name, weight, s, row, col);
	}
	else if (kelas == "Piranha")
	{
		A = new Piranha(name, weight, s, row, col);
	}
	else if (kelas == "PuffFish")
	{
		A = new PuffFish(name, weight, s, row, col);
	}
	else if (kelas == "Eagle")
	{
		A = new Eagle(name, weight, s, row, col);
	}
	else if (kelas == "Cendrawasih")
	{
		A = new Cendrawasih(name, weight, s, row, col);
	}
	else if (kelas == "Owl")
	{
		A = new Owl(name, weight, s, row, col);
	}
	else if (kelas == "Bat")
	{
		A = new Bat(name, weight, s, row, col);
	}
	else if (kelas == "Macau")
	{
		A = new Macau(name, weight, s, row, col);
	}
	else if (kelas == "Cockatoo")
	{
		A = new Cockatoo(name, weight, s, row, col);
	}
	else if (kelas == "Frog")
	{
		A = new Frog(name, weight, s, row, col);
	}
	else if (kelas == "Alligator")
	{
		A = new Alligator(name, weight, s, row, col);
	}
	else if (kelas == "Hippopotamus")
	{
		A = new Hippopotamus(name, weight, s, row, col);
	}
	else if (kelas == "Turtle")
	{
		A = new Turtle(name, weight, s, row, col);
	}
	else
	{

	}
}
