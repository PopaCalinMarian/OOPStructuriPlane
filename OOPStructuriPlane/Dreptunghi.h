//acum definirea devine mai ciudata
#pragma once
#include "Punct.h"
class Dreptunghi : public Punct
{
	//datele private ale clasei
	Punct stSus; //punctul din stanga sus de unde porneste generarea dreptunghiului
	int latime, lungime; // definirea latimii si lungimii

public:
	Dreptunghi(const Punct& varf, int l, int L)//ca in cerinta, parametrii sunt punctul de plecare, lungimea latimea
	{
		stSus = varf;
		latime = l;
		lungime = L;
		tip = 3;
	}

	void translatie(const Coordonate& vec) override
	{
		stSus.translatie(vec); // datorita faptului ca stSus este un obiect de tip Punct, va prelua metodele clasei punct
	}

	void scalare(const Coordonate& scalar) override
	{
		stSus.scalare(scalar); // acelasi lucru aici pentru *
		latime *= scalar.x; //aici latimea este latura orizontala, deci se va inmulti cu abscisa scalarului
		lungime *= scalar.y; //similar, lungimea fiind latura verticala, se va inmulti cu ordonata scalarului
	}

	void afisare() const override
	{
		std::cout << "Dreptunghiul care coltul din stanga sus in: ";
		stSus.afisare();
		std::cout << " , iar latimea dreptunghiul are masura: " << latime;
		std::cout << " si lungimea are masura: " << lungime << std::endl;
	}//aici functia de afisare va apela metoda de afisare al clasei Punct pentru obiectul stSus 
};

