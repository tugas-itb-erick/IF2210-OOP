#include "Species.h"
#include "Color.h"
#include <iostream>
using namespace std;


Elephant::Elephant(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='E';
	color=YELLOW;
}
void Elephant::interact(){
	cout<< "This elephant is trumpeting!!" << endl;
}

Giraffe::Giraffe(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='E';
	color=YELLOW;
}
void Giraffe::interact(){
	cout<< "This girrafe is eating high tree leaves" << endl;
}

Lion::Lion(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='L';
	color=YELLOW;
}
void Lion::interact()
{
	cout<< "Roarrrr..!!" << endl;
}


Tiger::Tiger(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='T';
	color=YELLOW;
}
void Tiger::interact()
{
	cout<< "Grrrr...!! Grrr...!!" << endl;
}

Orangutan::Orangutan(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='O';
	color=YELLOW;
}
void Orangutan::interact()
{
	cout<< "This orangutan is playing on a tree!" << endl;
}


Chimpanzee::Chimpanzee(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='C';
	color=YELLOW;
}
void Chimpanzee::interact()
{
	cout<< "U u a a ... U u a a" << endl;
}

Komodo::Komodo(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='K';
	color=YELLOW;
}
void Komodo::interact(){
cout<< "So amazing komodo!!" << endl;
}


Bear::Bear(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='B';
	color=YELLOW;
}
void Bear::interact(){
cout<< "Growl.. Growl.." << endl;
}

Whale::Whale(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='W';
	color=CYAN;
}
void Whale::interact()
{
	cout<< "This whale created a huge splash!" << endl;
}

Dolphin::Dolphin(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='D';
	color=CYAN;
}
void Dolphin::interact()
{
	cout << "This dolphin loves to jump!" << endl;
}

ClownFish::ClownFish(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='C';
	color=CYAN;
}
void ClownFish::interact()
{
	cout << "This clownfish lives among the anemone" << endl;
}

BlueTang::BlueTang(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='B';
	color=CYAN;
}
void BlueTang::interact()
{
	cout << "This blue tang just keeps swimmming!" << endl;
}

Piranha::Piranha(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='P';
	color=CYAN;
}
void Piranha::interact()
{
	cout << "This piranha eats voraciously!" << endl;
}

PuffFish::PuffFish(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='F';
	color=CYAN;
}
void PuffFish::interact()
{
	cout << "This puff fish is fat!"<< endl;
}

Eagle::Eagle(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='E';
	color=RED;
}
void Eagle::interact()
{
	cout << "This eagle is soaring in the sky!" << endl;
}

Cendrawasih::Cendrawasih(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='W';
	color=RED;
}
void Cendrawasih::interact()
{
	cout << "This cendrawasih is resting gracefully!"<< endl;
}

Owl::Owl(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='O';
	color=RED;
}
void Owl::interact()
{
	cout << "Hooo... Hooo..." << endl;
}

Bat::Bat(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='B';
	color=RED;
}
void Bat::interact()
{
	cout << "This bat is sleeping upside down!" << endl;
}

Eagle::Eagle(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='M';
	color=RED;
}
void Macau::interact()
{
	cout << "This macau is very pretty!" << endl;
}

Cockatoo::Cockatoo(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='C';
	color=RED;
}
void Cockatoo::interact()
{
	cout << "This cockatoo is repeating what " << endl;
}

Frog::Frog(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='F';
	color=GREEN;
}
void Frog::interact()
{
	cout<< "Croag.... Croag.... Ribbet... Ribbet..." << endl;
}

Frog::Frog(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='A';
	color=GREEN;
}
void Alligator::interact(){
	cout<< "Hiss....." << endl;
}

Hippopotamus::Hippopotamus(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='H';
	color=GREEN;
}
void Hippopotamus::interact(){
	cout<< "This hippo is so big" << endl;
}

Turtle::Turtle(string _name, double _weight, Sex _s): Animal(string _name, double _weight, Sex _s)
{
	id='T';
	color=GREEN;
}
void Turtle::interact(){
	cout<< "This turtle is walking slowly" << endl;
}
