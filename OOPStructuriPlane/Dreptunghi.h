#pragma once
#include "Punct.h"
class Dreptunghi : public Punct
{
	//datele private ale clasei
	Punct stSus; //punctul din stanga sus de unde porneste generarea dreptunghiului
	int latime, lungime; // definirea latimii si lungimii

public:
	Dreptunghi(const Punct& varf, int l, int L);//ca in cerinta, parametrii sunt punctul de plecare, lungimea latimea
	Dreptunghi(const Dreptunghi& other); // Constructor de copiere
	Dreptunghi(); // constructorul care creaza un patrat de 10 x 10 cu vf stanga sus in origine
	~Dreptunghi(); // Destructor

	Dreptunghi* operator+(const Coordonate& vec) const override;
	Dreptunghi* operator*(const Coordonate& scalar) const override;
	void afisare() const override;
	void citire() override;

	void setLat(int l);
	void setLung(int l);
};