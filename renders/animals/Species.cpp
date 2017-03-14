#include <iostream>
#include <string>
#include "Species.h"
using namespace std;

Elephant::Elephant(std::string _name, double _weight, Sex _s, int _r, int _c) : Animal(_name,  _weight, _s,  _r, _c, 'E', YELLOW){

}
Elephant::Elephant(const Elephant& E) : Animal(E) {

}
Elephant& Elephant::operator=(const Elephant& E){
  Animal::operator=(E);
  return *this;
}
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

double Elephant::countConsumedMeat(){
  return weight*meatRatio;
}
double Elephant::countConsumedVeggie(){
  return weight*vegRatio;
}

Giraffe::Giraffe(string _name, double _weight, Sex _s, int _r, int _c) : Animal(_name, _weight, _s, _r, _c, 'G', YELLOW){

}
Giraffe::Giraffe(const Giraffe& G) : Animal(G) {

}
Giraffe& Giraffe::operator=(const Giraffe& E){
  Animal::operator=(E);
  return *this;
}
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
double Giraffe::countConsumedMeat(){
  return weight*meatRatio;
}
double Giraffe::countConsumedVeggie(){
  return weight*vegRatio;
}

Lion::Lion(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'L', YELLOW){

}
Lion::Lion(const Lion& L) : Animal(L) {

}
Lion& Lion::operator=(const Lion& E){
  Animal::operator=(E);
  return *this;
}
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
double Lion::countConsumedMeat(){
  return weight*meatRatio;
}
double Lion::countConsumedVeggie(){
  return weight*vegRatio;
}

Tiger::Tiger(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'T', YELLOW){

}
Tiger::Tiger(const Tiger& T) : Animal(T) {

}
Tiger& Tiger::operator=(const Tiger& E){
  Animal::operator=(E);
  return *this;
}
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
double Tiger::countConsumedMeat(){
  return weight*meatRatio;
}
double Tiger::countConsumedVeggie(){
  return weight*vegRatio;
}


Orangutan::Orangutan(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'O', YELLOW){

}
Orangutan::Orangutan(const Orangutan& O) : Animal(O) {

}
Orangutan& Orangutan::operator=(const Orangutan& E){
  Animal::operator=(E);
  return *this;
}
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
double Orangutan::countConsumedMeat(){
  return weight*meatRatio;
}
double Orangutan::countConsumedVeggie(){
  return weight*vegRatio;
}

Chimpanzee::Chimpanzee(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'C', YELLOW){

}
Chimpanzee::Chimpanzee(const Chimpanzee& C) : Animal(C) {

}
Chimpanzee& Chimpanzee::operator=(const Chimpanzee& E){
  Animal::operator=(E);
  return *this;
}
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
double Chimpanzee::countConsumedMeat(){
  return weight*meatRatio;
}
double Chimpanzee::countConsumedVeggie(){
  return weight*vegRatio;
}


Komodo::Komodo(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'K', YELLOW){

}
Komodo::Komodo(const Komodo& K) : Animal(K) {

}
Komodo& Komodo::operator=(const Komodo& E){
  Animal::operator=(E);
  return *this;
}
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
double Komodo::countConsumedMeat(){
  return weight*meatRatio;
}
double Komodo::countConsumedVeggie(){
  return weight*vegRatio;
}


Bear::Bear(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'B', YELLOW){

}
Bear::Bear(const Bear& B) : Animal(B) {

}
Bear& Bear::operator=(const Bear& E){
  Animal::operator=(E);
  return *this;
}
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
double Bear::countConsumedMeat(){
  return weight*meatRatio;
}
double Bear::countConsumedVeggie(){
  return weight*vegRatio;
}

Whale::Whale(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'W', CYAN){

}
Whale::Whale(const Whale& W) : Animal(W) {

}
Whale& Whale::operator=(const Whale& E){
  Animal::operator=(E);
  return *this;
}
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
double Whale::countConsumedMeat(){
  return weight*meatRatio;
}
double Whale::countConsumedVeggie(){
  return weight*vegRatio;
}

Dolphin::Dolphin(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'D', CYAN){

}
Dolphin::Dolphin(const Dolphin& D) : Animal(D) {

}
Dolphin& Dolphin::operator=(const Dolphin& E){
  Animal::operator=(E);
  return *this;
}
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
double Dolphin::countConsumedMeat(){
  return weight*meatRatio;
}
double Dolphin::countConsumedVeggie(){
  return weight*vegRatio;
}


Clownfish::Clownfish(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'C', CYAN){

}
Clownfish::Clownfish(const Clownfish& C) : Animal(C) {

}
Clownfish& Clownfish::operator=(const Clownfish& E){
  Animal::operator=(E);
  return *this;
}
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
double Clownfish::countConsumedMeat(){
  return weight*meatRatio;
}
double Clownfish::countConsumedVeggie(){
  return weight*vegRatio;
}


BlueTang::BlueTang(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'B', CYAN){

}
BlueTang::BlueTang(const BlueTang& B) : Animal(B) {

}
BlueTang& BlueTang::operator=(const BlueTang& E){
  Animal::operator=(E);
  return *this;
}
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
double BlueTang::countConsumedMeat(){
  return weight*meatRatio;
}
double BlueTang::countConsumedVeggie(){
  return weight*vegRatio;
}


Piranha::Piranha(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'P', CYAN){

}
Piranha::Piranha(const Piranha& P) : Animal(P) {

}
Piranha& Piranha::operator=(const Piranha& E){
  Animal::operator=(E);
  return *this;
}
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
double Piranha::countConsumedMeat(){
  return weight*meatRatio;
}
double Piranha::countConsumedVeggie(){
  return weight*vegRatio;
}

PuffFish::PuffFish(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'F', CYAN){

}
PuffFish::PuffFish(const PuffFish& P) : Animal(P) {

}
PuffFish& PuffFish::operator=(const PuffFish& E){
  Animal::operator=(E);
  return *this;
}
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
double PuffFish::countConsumedMeat(){
  return weight*meatRatio;
}
double PuffFish::countConsumedVeggie(){
  return weight*vegRatio;
}


Eagle::Eagle(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'E', RED){

}
Eagle::Eagle(const Eagle& E) : Animal(E) {

}
Eagle& Eagle::operator=(const Eagle& E){
  Animal::operator=(E);
  return *this;
}
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
double Eagle::countConsumedMeat(){
  return weight*meatRatio;
}
double Eagle::countConsumedVeggie(){
  return weight*vegRatio;
}


Cendrawasih::Cendrawasih(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'W', RED){

}
Cendrawasih::Cendrawasih(const Cendrawasih& C) : Animal(C) {

}
Cendrawasih& Cendrawasih::operator=(const Cendrawasih& E){
  Animal::operator=(E);
  return *this;
}
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
double Cendrawasih::countConsumedMeat(){
  return weight*meatRatio;
}
double Cendrawasih::countConsumedVeggie(){
  return weight*vegRatio;
}


Owl::Owl(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'O', RED){

}
Owl::Owl(const Owl& O) : Animal(O) {

}
Owl& Owl::operator=(const Owl& E){
  Animal::operator=(E);
  return *this;
}
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
double Owl::countConsumedMeat(){
  return weight*meatRatio;
}
double Owl::countConsumedVeggie(){
  return weight*vegRatio;
}


Bat::Bat(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'B', RED){

}
Bat::Bat(const Bat& B) : Animal(B) {

}
Bat& Bat::operator=(const Bat& E){
  Animal::operator=(E);
  return *this;
}
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
double Bat::countConsumedMeat(){
  return weight*meatRatio;
}
double Bat::countConsumedVeggie(){
  return weight*vegRatio;
}

Macau::Macau(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'M', RED){

}
Macau::Macau(const Macau& M) : Animal(M) {

}
Macau& Macau::operator=(const Macau& E){
  Animal::operator=(E);
  return *this;
}
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
double Macau::countConsumedMeat(){
  return weight*meatRatio;
}
double Macau::countConsumedVeggie(){
  return weight*vegRatio;
}

Cockatoo::Cockatoo(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'C', RED){

}
Cockatoo::Cockatoo(const Cockatoo& C) : Animal(C) {

}
Cockatoo& Cockatoo::operator=(const Cockatoo& E){
  Animal::operator=(E);
  return *this;
}
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
double Cockatoo::countConsumedMeat(){
  return weight*meatRatio;
}
double Cockatoo::countConsumedVeggie(){
  return weight*vegRatio;
}

Frog::Frog(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'F', GREEN){

}
Frog::Frog(const Frog& F) : Animal(F) {

}
Frog& Frog::operator=(const Frog& E){
  Animal::operator=(E);
  return *this;
}
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
double Frog::countConsumedMeat(){
  return weight*meatRatio;
}
double Frog::countConsumedVeggie(){
  return weight*vegRatio;
}


Alligator::Alligator(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'A', GREEN){

}
Alligator::Alligator(const Alligator& A) : Animal(A) {

}
Alligator& Alligator::operator=(const Alligator& E){
  Animal::operator=(E);
  return *this;
}
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
double Alligator::countConsumedMeat(){
  return weight*meatRatio;
}
double Alligator::countConsumedVeggie(){
  return weight*vegRatio;
}

Hippopotamus::Hippopotamus(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'H', GREEN){

}
Hippopotamus::Hippopotamus(const Hippopotamus& H) : Animal(H) {

}
Hippopotamus& Hippopotamus::operator=(const Hippopotamus& E){
  Animal::operator=(E);
  return *this;
}
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
double Hippopotamus::countConsumedMeat(){
  return weight*meatRatio;
}
double Hippopotamus::countConsumedVeggie(){
  return weight*vegRatio;
}

Turtle::Turtle(string _name, double _weight, Sex _s, int _r, int _c): Animal(_name,  _weight, _s,  _r, _c, 'T', GREEN){

}
Turtle::Turtle(const Turtle& T) : Animal(T) {

}
Turtle& Turtle::operator=(const Turtle& E){
  Turtle::operator=(E);
  return *this;
}
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
double Turtle::countConsumedMeat(){
  return weight*meatRatio;
}
double Turtle::countConsumedVeggie(){
  return weight*vegRatio;
}

istream& operator>>(istream& in, Animal* &A){
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
