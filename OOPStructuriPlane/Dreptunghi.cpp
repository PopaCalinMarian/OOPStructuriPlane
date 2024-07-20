#include "Dreptunghi.h"

Dreptunghi::Dreptunghi(const Punct& varf, int l, int L)
{
	stSus = varf;
	latime = l;
	lungime = L;
	tip = 3;
}

Dreptunghi::Dreptunghi(const Dreptunghi& other)  //constructorul de copiere
{
	stSus = other.stSus;
	latime = other.latime;
	lungime = other.lungime;
	tip = other.tip;
}

Dreptunghi::Dreptunghi() //contructorul default care genereaza un patrat cu l = 10
{
	stSus = Punct(0, 0);
	latime = 10;
	lungime = 10;
	tip = 3;
}

Dreptunghi::~Dreptunghi() //aici este destructorul default, nu sunt date dinamice
{
}

Dreptunghi* Dreptunghi::operator+(const Coordonate& vec) const
{
	Punct nouVarf = *(stSus + vec);
	return new Dreptunghi(nouVarf, latime, lungime);
}

Dreptunghi* Dreptunghi::operator*(const Coordonate& scalar) const
{
	Punct nouVarf = *(stSus * scalar);
	return new Dreptunghi(nouVarf, latime * scalar.x, lungime * scalar.y);
}

void Dreptunghi::afisare() const
{
	std::cout << "Dreptunghiul porneste din dreapta sus la ";
	stSus.afisare();
	std::cout << ", iar latimea este de " << latime;
	std::cout << " si lungimea este de " << lungime << " ."<<std::endl;
}


void Dreptunghi::citire() 
{
	std::cout << "Punctul din stanga sus de unde pleaca dreptunghiul :" << std::endl;
	stSus.citire();
	int lat, lung;
	std::cout << "Latimea dreptunghiului este: ";
	std::cin >> lat; std::cout << std::endl;
	setLat(lat);
	std::cout << "Lungimea dreptunghiului este: ";
	std::cin >> lung;
	setLat(lat); std::cout << std::endl;

}

void Dreptunghi::setLat(int l)
{
	latime = l;
}

void Dreptunghi::setLung(int l)
{
	lungime = l;
}






