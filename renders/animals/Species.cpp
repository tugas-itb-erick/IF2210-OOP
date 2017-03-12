#include <iostream>
#include "Species.h"
using namespace std;

Elephant::Elephant(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('E'), color(YELLOW){}
void Elephant::interact(){
	cout<< "This elephant is trumpeting!!" << endl;
}
Elephant* Elephant::clone() const{
	return new Elephant(*this);
}

Giraffe::Giraffe(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('G'), color(YELLOW){}
void Giraffe::interact(){
	cout<< "This girrafe is eating high tree leaves" << endl;
}
Giraffe* Giraffe::clone() const{
	return new Giraffe(*this);
}

Lion::Lion(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('L'), color(YELLOW){}
void Lion::interact(){
	cout<< "Roarrrr..!!" << endl;
}
Lion* Lion::clone() const{
	return new Lion(*this);
}

Tiger::Tiger(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('T'), color(YELLOW){}
void Tiger::interact(){
	cout<< "Grrrr...!! Grrr...!!" << endl;
}
Tiger* Tiger::clone() const{
	return new Tiger(*this);
}

Orangutan::Orangutan(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('O'), color(YELLOW){}
void Orangutan::interact(){
	cout<< "This orangutan is playing on a tree!" << endl;
}
Orangutan* Orangutan::clone() const{
	return new Orangutan(*this);
}

Chimpanzee::Chimpanzee(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('C'), color(YELLOW){}
void Chimpanzee::interact(){
	cout<< "U u a a ... U u a a" << endl;
}
Chimpanzee* Chimpanzee::clone() const{
	return new Chimpanzee(*this);
}

Komodo::Komodo(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('K'), color(YELLOW){}
void Komodo::interact(){
	cout<< "So amazing komodo!!" << endl;
}
Komodo* Komodo::clone() const{
	return new Komodo(*this);
}

Bear::Bear(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('B'), color(YELLOW){}
void Bear::interact(){
	cout<< "Growl.. Growl.." << endl;
}
Bear* Bear::clone() const{
	return new Bear(*this);
}

Whale::Whale(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('W'), color(CYAN){}
void Whale::interact(){
	cout<< "This whale created a huge splash!" << endl;
}
Whale* Whale::clone() const{
	return new Whale(*this);
}

Dolphin::Dolphin(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('D'), color(CYAN){}
void Dolphin::interact(){
	cout << "This dolphin loves to jump!" << endl;
}
Dolphin* Dolphin::clone() const{
	return new Dolphin(*this);
}

ClownFish::ClownFish(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('C'), color(CYAN){}
void ClownFish::interact(){
	cout << "This clownfish lives among the anemone" << endl;
}
ClownFish* ClownFish::clone() const{
	return new ClownFish(*this);
}

BlueTang::BlueTang(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('B'), color(CYAN){}
void BlueTang::interact(){
	cout << "This blue tang just keeps swimmming!" << endl;
}
BlueTang* BlueTang::clone() const{
	return new BlueTang(*this);
}

Piranha::Piranha(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('P'), color(CYAN){}
void Piranha::interact(){
	cout << "This piranha eats voraciously!" << endl;
}
Piranha* Piranha::clone() const{
	return new Piranha(*this);
}

PuffFish::PuffFish(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('F'), color(CYAN){}
void PuffFish::interact(){
	cout << "This puff fish is fat!"<< endl;
}
PuffFish* PuffFish::clone() const{
	return new PuffFish(*this);
}

Eagle::Eagle(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('E'), color(RED){}
void Eagle::interact(){
	cout << "This eagle is soaring in the sky!" << endl;
}
Eagle* Eagle::clone() const{
	return new Eagle(*this);
}

Cendrawasih::Cendrawasih(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('W'), color(RED){}
void Cendrawasih::interact(){
	cout << "This cendrawasih is resting gracefully!"<< endl;
}
Cendrawasih* Cendrawasih::clone() const{
	return new Cendrawasih(*this);
}

Owl::Owl(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('O'), color(RED){}
void Owl::interact(){
	cout << "Hooo... Hooo..." << endl;
}
Owl* Owl::clone() const{
	return new Owl(*this);
}

Bat::Bat(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('B'), color(RED){}
void Bat::interact(){
	cout << "This bat is sleeping upside down!" << endl;
}
Bat* Bat::clone() const{
	return new Bat(*this);
}

Macau:: Macau(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('M'), color(RED){}
void Macau::interact(){
	cout << "This macau is very pretty!" << endl;
}
Macau* Macau::clone() const{
	return new Macau(*this);
}

Cockatoo::Cockatoo(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('C'), color(RED){}
void Cockatoo::interact(){
	cout << "This cockatoo is repeating what " << endl;
}
Cockatoo* Cockatoo::clone() const{
	return new Cockatoo(*this);
}

Frog::Frog(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('F'), color(GREEN){}
void Frog::interact(){
	cout<< "Croag.... Croag.... Ribbet... Ribbet..." << endl;
}
Frog* Frog::clone() const{
	return new Frog(*this);
}

Alligator::Alligator(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('A'), color(GREEN){}
void Alligator::interact(){
	cout<< "Hiss....." << endl;
}
Alligator* Alligator::clone() const{
	return new Alligator(*this);
}

Hippopotamus::Hippopotamus(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('H'), color(GREEN){}
void Hippopotamus::interact(){
	cout<< "This hippo is so big" << endl;
}
Hippopotamus* Hippopotamus::clone() const{
	return new Hippopotamus(*this);
}

Turtle::Turtle(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name, _weight, _s, _r, _c), id('T'), color(GREEN){}
void Turtle::interact(){
	cout<< "This turtle is walking slowly" << endl;
}
Turtle* Turtle::clone() const{
	return new Turtle(*this);
}
