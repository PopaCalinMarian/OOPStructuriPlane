#pragma once
#include "Figura.h"

class Punct : public Figura
{
	Coordonate coord;

public:
	Punct(int x = 0, int y = 0);
	//constructorul normal

	Punct(const Punct& other);
	//constructorul de copiere

	virtual Punct* operator+(const Coordonate& vec) const override;
	virtual Punct* operator*(const Coordonate& scalar) const override;

	//aceasta metoda va afisa coordonatele punctului
	void afisare() const override;
	// Metoda pentru citirea coordonatelor și tipului de la consolă
	void citire() override;

	// Metode pentru setarea si obtinerea coordonatelor
	void setAbs(int x);
	void setOrd(int y);
	int getAbs() const;
	int getOrd() const;

	~Punct();
};

