#include "Species.h"
#include "Color.h"
#include <iostream>
using namespace std;


void Elephant::interact(){
	cout<< "This elephant is trumpeting!!" << endl;
}

void Elephant::render(){
	cout<<FYEL("E");
}

void Giraffe::interact(){
	cout<< "This girrafe is eating high tree leaves" << endl;
}

void Giraffe::render(){
	cout<<FYEL("G");
}

void Lion::interact(){
	cout<< "Roarrrr..!!" << endl;
}

void Lion::render(){
	cout<<FYEL("L");
}

void Tiger::interact(){
	cout<< "Grrrr...!! Grrr...!!" << endl;
}

void Tiger::render(){
	cout<<FYEL("T");
}

void Orangutan::interact(){
	cout<< "This orangutan is playing on a tree!" << endl;
}

void Orangutan::render(){
	cout<<FYEL("O");
}

void Chimpanzee::interact(){
cout<< "U u a a ... U u a a" << endl;
}

void Chimpanzee::render(){
cout<<FYEL("C");
}

void Komodo::interact(){
cout<< "So amazing komodo!!" << endl;
}

void Komodo::render(){
cout<<FYEL("K");
}

void Bear::interact(){
cout<< "Growl.. Growl.." << endl;
}

void Bear::render(){
cout<<FYEL("B");
}

void Whale::interact()
{
	cout<< "This whale created a huge splash!" << endl;
}
void Whale::render()
{
	cout << FCYN("W");
}
void Dolphin::interact()
{
	cout << "This dolphin loves to jump!" << endl;
}
void Dolphin::render()
{
	cout << FCYN("D");
}
void ClownFish::interact()
{
	cout << "This clownfish lives among the anemone" << endl;
}

void ClownFish::render()
{
	cout << FCYN("C");
}
void BlueTang::interact()
{
	cout << "This blue tang just keeps swimmming!" << endl;
}
void BlueTang::render()
{
	cout << FCYN("B");
}
void Piranha::interact()
{
	cout << "This piranha eats voraciously!" << endl;
}

void Piranha::render()
{
	cout << FCYN("P");
}	

void PuffFish::interact()
{
	cout << "This puff fish is fat!"<< endl;
}
void PuffFish::render()
{
	cout << FCYN("F");
}
void Eagle::interact()
{
	cout << "This eagle is soaring in the sky!" << endl;
}

void Eagle::render()
{
	cout << FRED("E");
}
void Cendrawasih::interact()
{
	cout << "This cendrawasih is resting gracefully!"<< endl;
}

void Cendrawasih::render()
{
	cout << FRED("W");
}

void Owl::interact()
{
	cout << "Hooo... Hooo..." << endl;
}

void Owl::render()
{
	cout << FRED("O");
}

void Bat::interact()
{
	cout << "This bat is sleeping upside down!" << endl;
}

void Bat::render()
{
	cout << FRED("B");
}

void Macau::interact()
{
	cout << "This macau is very pretty!" << endl;
}

void Macau::render()
{
	cout << FRED("M");
}
void Cockatoo::interact()
{
	cout << "This cockatoo is repeating what " << endl;
}

void Cockatoo::render()
{
	cout << FRED("C");
}

void Frog::interact(){
	cout<< "Croag.... Croag.... Ribbet... Ribbet..." << endl;
}

void Frog::render(){
	cout<<FGRN("F");
}

void Alligator::interact(){
	cout<< "Hiss....." << endl;
}

void Alligator::render(){
	cout<<FGRN("A");
}

void Hippopotamus::interact(){
	cout<< "This hippo is so big" << endl;
}

void Hippopotamus::render(){
	cout<<FGRN("H");
}

void Turtle::interact(){
	cout<< "This turtle is walking slowly" << endl;
}

void Turtle::render(){
	cout<<FGRN("T");
}
