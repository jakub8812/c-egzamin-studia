#pragma once
#include <iostream>
using namespace std;

class Samochod
{
	int liczba_drzwi;
	int cena;
	string imie;
	string nazwisko;
	double procent;
	double wartosc_rynkowa;

public:

	void setDrzwi(int liczba_drzwi);
	void setCena(int cena);
	int getDrzwi();
	int getCena();
	void imieNazwisko(string imie, string nazwisko);

	Samochod(string imie, string nazwisko, int cena);
	Samochod(int cena);
	~Samochod();

	double podatek(double procent, double wartosc_rynkowa);
};