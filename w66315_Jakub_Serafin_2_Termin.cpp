// w66315_Jakub_Serafin_2_Termin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Samochod.h"
#include <Windows.h>


int main()
{
	Samochod s1("Jakub", "Serafin", 45000);
	Samochod s2("Barbara", "Fryc", 249999);
	Samochod s3(149000);


	cout << "**********\nObecne wartosci dla obiektu s1\n**********" << endl;
	cout << "Cena samochodu: " << s1.getCena() << endl;
	cout << "Liczba drzwi w samochodzie: " << s1.getDrzwi() << endl;
	cout << "Podatek od samochodu: " << s1.podatek(2, s1.getCena()) << endl;

	// Zmieniamy pewne parametry dla obiektu s1.
	s1.setCena(350);
	s1.setDrzwi(5);

	Sleep(1000);
	cout << endl;
	cout << "**********\nWartosci dla obiektu s1 po pewnych zmianach\n**********" << endl;
	cout << "Cena samochodu: " << s1.getCena() << endl;
	cout << "Liczba drzwi w samochodzie: " << s1.getDrzwi() << endl;
	cout << "Podatek od samochodu: " << s1.podatek(2, s1.getCena()) << endl;

	// Obiekt s2
	Sleep(3000);
	cout << "**********\nObecne wartosci dla obiektu s2\n**********" << endl;
	cout << "Cena samochodu: " << s2.getCena() << endl;
	cout << "Liczba drzwi w samochodzie: " << s2.getDrzwi() << endl;
	cout << "Podatek od samochodu: " << s2.podatek(2, s2.getCena()) << endl;

	// Zmieniamy pewne parametry dla obiektu s2.
	s2.setCena(495000);
	s2.setDrzwi(3);

	Sleep(1000);

	cout << "**********\nWartosci dla obiektu s2 po pewnych zmianach\n**********" << endl;
	cout << "Cena samochodu: " << s2.getCena() << endl;
	cout << "Liczba drzwi w samochodzie: " << s2.getDrzwi() << endl;
	cout << "Podatek od samochodu: " << s2.podatek(2, s2.getCena()) << endl;

	// Obiekt s3
	Sleep(3000);
	cout << "**********\nObecne wartosci dla obiektu s3\n**********" << endl;
	cout << "Cena samochodu: " << s3.getCena() << endl;
	cout << "Liczba drzwi w samochodzie: " << s3.getDrzwi() << endl;
	cout << "Podatek od samochodu: " << s3.podatek(2, s3.getCena()) << endl;

	// Zmieniamy pewne parametry dla obiektu s3.
	s3.setCena(80000);
	s3.setDrzwi(1);

	Sleep(1000);

	cout << "**********\nWartosci dla obiektu s2 po pewnych zmianach\n**********" << endl;
	cout << "Cena samochodu: " << s3.getCena() << endl;
	cout << "Liczba drzwi w samochodzie: " << s3.getDrzwi() << endl;
	cout << "Podatek od samochodu: " << s3.podatek(2, s3.getCena()) << endl;
}