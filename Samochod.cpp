#include "Samochod.h"

void Samochod::setDrzwi(int liczba_drzwi)
{
	this->liczba_drzwi = liczba_drzwi;
}

void Samochod::setCena(int cena)
{
	this->cena = cena;
}

int Samochod::getDrzwi()
{
	return liczba_drzwi;
}

int Samochod::getCena()
{
	return cena;
}

void Samochod::imieNazwisko(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

Samochod::Samochod(string imie, string nazwisko, int cena)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->cena = cena;
	this->liczba_drzwi = 4;
}

Samochod::Samochod(int cena)
{
	this->imie = "";
	this->nazwisko = "";
	this->cena = cena;
	this->liczba_drzwi = 4;
}

Samochod::~Samochod()
{
}

double Samochod::podatek(double procent, double wartosc_rynkowa)
{
	return wartosc_rynkowa * (procent / 100);
}
