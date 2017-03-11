#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;
int main ()
{
	//Animal *a;
	ifstream fin;
	string s, nama, gender;
	double x;
	fin.open("textspecies.txt");
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin >> s >> nama >> x >> gender;
			if (s == "Elephant")
			{ 
				cout << s << endl;
				cout << nama << endl;
				cout << x << endl;
				cout << gender << endl;
			}
			else if (s == "Giraffe")
			{
				cout << endl;
			}
			else if (s == "Lion")
			{
				cout << endl;
			}
			else if (s == "Tiger")
			{
				cout << endl;
			}
			else if (s == "Orangutan")
			{
				cout << endl;
			}		
			else if (s == "Chimpanzee")
			{
				cout << endl;
			}
			else if (s == "Komodo")
			{
				cout << endl;
			}
			else if (s == "Bear")
			{
				cout << endl;
			}
			else if (s == "Whale")
			{
				cout << endl;
			}
			else if (s == "Dolphin")
			{
				cout << endl;
			}
			else if (s == "Clownfish")
			{
				cout << endl;
			}
			else if (s == "BlueTang")
			{
				cout << endl;
			}
			else if (s == "Piranha")
			{
				cout << endl;
			}
			else if (s == "PuffFish")
			{
				cout << endl;
			}
			else if (s == "Eagle")
			{
				cout << endl;
			}
			else if (s == "Cendrawasih")
			{
				cout << endl;
			}
			else if (s == "Owl")
			{
				cout << endl;				
			}
			else if (s == "Bat")
			{
				cout << endl;	
			}
			else if (s == "Macau")
			{
				cout << endl;	
			}
			else if (s == "Cockatoo")
			{
				cout << endl;
			}
			else if (s == "Frog")
			{
				cout << endl;	
			}
			else if (s == "Alligator")
			{
				cout << endl;	
			}
			else if (s == "Hippopotamus")
			{	
				cout << endl;
			}
			else if (s == "Turtle")
			{
				cout << endl;	
			}
			else
			{
			}
			fin.ignore();
			s = "\0";
		}
	}
	fin.close();
	return 0;
}
