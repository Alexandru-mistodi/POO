#include "pch.h"
#include "iostream"
using namespace System;
//clase si obiecte
using namespace std;
struct Persoane
{
	unsigned vs;
	char nume[20];
	char prenume[20];
};
class Pers {

	//sa cautati despre modificari private , public si protected;
private:
	unsigned vs;
	char nume[20];
	char prenume[20];
public:
	// avem 2 metode cu acelasi nume cu cel al clasei ,adica Pers, o metoda cu params si una fara
	Pers(unsigned vs1, char* num1, char* prenum1) {

		vs = vs1;
		strcpy_s(nume, 20, num1);
		strcpy_s(nume, 20, prenum1);
	}
	Pers() {}

	unsigned arata_vs() { return this->vs; }
	char* arata_nume() { return this->nume; }
	

};
int main(/*array<System::String^>^args*/)
//nu este necesar sa folosi m parametrii pentru main()
{
	unsigned a1;
	a1 = 17;
	Persoane p1;
	p1.vs = 20;
	strcpy_s(p1.nume, 4, "Ion");
	strcpy_s(p1.nume, 10 , "Doru");
	Console::WriteLine("Pitem face o apelare cu functia specifica CLR.");
	cout << p1.nume << "\t" << p1.prenume << "\t" << p1.vs << endl;
	cout <<  "Am folosit si o afisare standard C++"  << endl;
	Console::WriteLine("Utilizam clasa Pres:");
	Pers p2(20, "Ionescu", "Marius");// cream obiectul-> apel implicit 
	Pers* p3 = new Pers(21, "Gheorghita", "Bianca");
	cout << p2.arata_nume() << "\t" << p2.arata_vs()  << endl;
	cout << p3->arata_nume() << "\t" << p3->arata_vs() << endl;
	//In c++ am fi folosit getchar();
	//In CLR folosim;
	Console::ReadKey();
	return 0;
}