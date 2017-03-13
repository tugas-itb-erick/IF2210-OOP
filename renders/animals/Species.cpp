#include <iostream>
#include "Species.h"
using namespace std;

Elephant::Elephant(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'E', YELLOW){}

void Elephant::interact(){
	cout<< "This elephant is trumpeting!!" << endl;
}
Elephant* Elephant::clone() const{
	return new Elephant(*this);
}
char Elephant::render(){
	return id;
}
Color Elephant::getColor(){
	return color;
}

Giraffe::Giraffe(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'G', YELLOW){}

void Giraffe::interact(){
	cout<< "This girrafe is eating high tree leaves" << endl;
}
Giraffe* Giraffe::clone() const{
	return new Giraffe(*this);
}
char Giraffe::render(){
	return id;
}
Color Giraffe::getColor(){
	return color;
}

Lion::Lion(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'L', YELLOW){}

void Lion::interact(){
	cout<< "Roarrrr..!!" << endl;
}
Lion* Lion::clone() const{
	return new Lion(*this);
}
char Lion::render(){
	return id;
}
Color Lion::getColor(){
	return color;
}


Tiger::Tiger(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'T', YELLOW){}

void Tiger::interact(){
	cout<< "Grrrr...!! Grrr...!!" << endl;
}
Tiger* Tiger::clone() const{
	return new Tiger(*this);
}
char Tiger::render(){
	return id;
}
Color Tiger::getColor(){
	return color;
}


Orangutan::Orangutan(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'O', YELLOW){}

void Orangutan::interact(){
	cout<< "This orangutan is playing on a tree!" << endl;
}
Orangutan* Orangutan::clone() const{
	return new Orangutan(*this);
}
char Orangutan::render(){
	return id;
}
Color Orangutan::getColor(){
	return color;
}


Chimpanzee::Chimpanzee(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'C', YELLOW){}

void Chimpanzee::interact(){
	cout<< "U u a a ... U u a a" << endl;
}
Chimpanzee* Chimpanzee::clone() const{
	return new Chimpanzee(*this);
}
char Chimpanzee::render(){
	return id;
}
Color Chimpanzee::getColor(){
	return color;
}


Komodo::Komodo(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'K', YELLOW){}

void Komodo::interact(){
	cout<< "So amazing komodo!!" << endl;
}
Komodo* Komodo::clone() const{
	return new Komodo(*this);
}
char Komodo::render(){
	return id;
}
Color Komodo::getColor(){
	return color;
}


Bear::Bear(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'B', YELLOW){}

void Bear::interact(){
	cout<< "Growl.. Growl.." << endl;
}
Bear* Bear::clone() const{
	return new Bear(*this);
}
char Bear::render(){
	return id;
}
Color Bear::getColor(){
	return color;
}


Whale::Whale(string _name, double _weight, Sex _s, int _r, int _c): WaterAnimal(_name, _weight, _s, _r, _c, 'W', CYAN){}

void Whale::interact(){
	cout<< "This whale created a huge splash!" << endl;
}
Whale* Whale::clone() const{
	return new Whale(*this);
}
char Whale::render(){
	return id;
}
Color Whale::getColor(){
	return color;
}


Dolphin::Dolphin(string _name, double _weight, Sex _s, int _r, int _c): WaterAnimal(_name, _weight, _s, _r, _c, 'D', CYAN){}

void Dolphin::interact(){
	cout << "This dolphin loves to jump!" << endl;
}
Dolphin* Dolphin::clone() const{
	return new Dolphin(*this);
}
char Dolphin::render(){
	return id;
}
Color Dolphin::getColor(){
	return color;
}


Clownfish::Clownfish(string _name, double _weight, Sex _s, int _r, int _c): WaterAnimal(_name, _weight, _s, _r, _c, 'C', CYAN){}
void Clownfish::interact(){
	cout << "This Clownfish lives among the anemone" << endl;
}
Clownfish* Clownfish::clone() const{
	return new Clownfish(*this);
}
char Clownfish::render(){
	return id;
}
Color Clownfish::getColor(){
	return color;
}


BlueTang::BlueTang(string _name, double _weight, Sex _s, int _r, int _c): WaterAnimal(_name, _weight, _s, _r, _c, 'B', CYAN){}

void BlueTang::interact(){
	cout << "This blue tang just keeps swimmming!" << endl;
}
BlueTang* BlueTang::clone() const{
	return new BlueTang(*this);
}
char BlueTang::render(){
	return id;
}
Color BlueTang::getColor(){
	return color;
}


Piranha::Piranha(string _name, double _weight, Sex _s, int _r, int _c): WaterAnimal(_name, _weight, _s, _r, _c, 'P', CYAN){}

void Piranha::interact(){
	cout << "This piranha eats voraciously!" << endl;
}
Piranha* Piranha::clone() const{
	return new Piranha(*this);
}
char Piranha::render(){
	return id;
}
Color Piranha::getColor(){
	return color;
}

PuffFish::PuffFish(string _name, double _weight, Sex _s, int _r, int _c): WaterAnimal(_name, _weight, _s, _r, _c, 'F', CYAN){}

void PuffFish::interact(){
	cout << "This puff fish is fat!"<< endl;
}
PuffFish* PuffFish::clone() const{
	return new PuffFish(*this);
}
char PuffFish::render(){
	return id;
}
Color PuffFish::getColor(){
	return color;
}


Eagle::Eagle(string _name, double _weight, Sex _s, int _r, int _c): FlyingAnimal(_name, _weight, _s, _r, _c, 'E', RED){}

void Eagle::interact(){
	cout << "This eagle is soaring in the sky!" << endl;
}
Eagle* Eagle::clone() const{
	return new Eagle(*this);
}
char Eagle::render(){
	return id;
}
Color Eagle::getColor(){
	return color;
}


Cendrawasih::Cendrawasih(string _name, double _weight, Sex _s, int _r, int _c): FlyingAnimal(_name, _weight, _s, _r, _c, 'W', RED){}

void Cendrawasih::interact(){
	cout << "This cendrawasih is resting gracefully!"<< endl;
}
Cendrawasih* Cendrawasih::clone() const{
	return new Cendrawasih(*this);
}
char Cendrawasih::render(){
	return id;
}
Color Cendrawasih::getColor(){
	return color;
}


Owl::Owl(string _name, double _weight, Sex _s, int _r, int _c): FlyingAnimal(_name, _weight, _s, _r, _c, 'O', RED){}

void Owl::interact(){
	cout << "Hooo... Hooo..." << endl;
}
Owl* Owl::clone() const{
	return new Owl(*this);
}
char Owl::render(){
	return id;
}
Color Owl::getColor(){
	return color;
}


Bat::Bat(string _name, double _weight, Sex _s, int _r, int _c): FlyingAnimal(_name, _weight, _s, _r, _c, 'B', RED){}

void Bat::interact(){
	cout << "This bat is sleeping upside down!" << endl;
}
Bat* Bat::clone() const{
	return new Bat(*this);
}
char Bat::render(){
	return id;
}
Color Bat::getColor(){
	return color;
}

Macau:: Macau(string _name, double _weight, Sex _s, int _r, int _c): FlyingAnimal(_name, _weight, _s, _r, _c, 'M', RED){}

void Macau::interact(){
	cout << "This macau is very pretty!" << endl;
}
Macau* Macau::clone() const{
	return new Macau(*this);
}
char Macau::render(){
	return id;
}
Color Macau::getColor(){
	return color;
}

Cockatoo::Cockatoo(string _name, double _weight, Sex _s, int _r, int _c): FlyingAnimal(_name, _weight, _s, _r, _c, 'C', RED){}

void Cockatoo::interact(){
	cout << "This cockatoo is repeating what you're saying!" << endl;
}
Cockatoo* Cockatoo::clone() const{
	return new Cockatoo(*this);
}
char Cockatoo::render(){
	return id;
}
Color Cockatoo::getColor(){
	return color;
}

Frog::Frog(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'F', GREEN), WaterAnimal(_name, _weight, _s, _r, _c, 'F', GREEN){}

void Frog::interact(){
	cout<< "Croag.... Croag.... Ribbet... Ribbet..." << endl;
}
Frog* Frog::clone() const{
	return new Frog(*this);
}
char Frog::render(){
	return id;
}
Color Frog::getColor(){
	return color;
}


Alligator::Alligator(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'A', GREEN), WaterAnimal(_name, _weight, _s, _r, _c, 'A', GREEN){}

void Alligator::interact(){
	cout<< "Hiss....." << endl;
}
Alligator* Alligator::clone() const{
	return new Alligator(*this);
}
char Alligator::render(){
	return id;
}
Color Alligator::getColor(){
	return color;
}


Hippopotamus::Hippopotamus(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'H', GREEN), WaterAnimal(_name, _weight, _s, _r, _c, 'H', GREEN){}

void Hippopotamus::interact(){
	cout<< "This hippo is so big" << endl;
}
Hippopotamus* Hippopotamus::clone() const{
	return new Hippopotamus(*this);
}
char Hippopotamus::render(){
	return id;
}
Color Hippopotamus::getColor(){
	return color;
}

Turtle::Turtle(string _name, double _weight, Sex _s, int _r, int _c): LandAnimal(_name, _weight, _s, _r, _c, 'T', GREEN), WaterAnimal(_name, _weight, _s, _r, _c, 'T', GREEN){}

void Turtle::interact(){
	cout<< "This turtle is walking slowly" << endl;
}
Turtle* Turtle::clone() const{
	return new Turtle(*this);
}
char Turtle::render(){
	return id;
}
Color Turtle::getColor(){
	return color;
}

istream& operator>>(istream& in, Animal* A){
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
		A = new Elephant(name, weight, s, row, col);
	}
	
	return in;
}
