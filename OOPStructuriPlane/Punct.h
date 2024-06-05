#pragma once
#include "Figura.h"
class Punct : public Figura // aici clasa punct va deriva din clasa abstracta figura
{
	Coordonate coord;

	//urmeaza definirea constructorului
public:
	//!!! parametrii x si y sunt initializati cu 0 astfel acest constructorul putand avea constructor default, in cazul in care nu definesc parametrii, acestia sa fie de la baza 0
	Punct(int x = 0, int y = 0)//parametrii constructorului vor fii coordonatele ca tip de nr intregi
	{
		coord = {x,y}; //
		tip = 0;//aici mentionam ca tipul figurii este 0
	}

	void translatie(const Coordonate& vec) override
	{
		coord.x += vec.x;
		coord.y += vec.y;
	}
	//metoda translatie se va modifica astfel incat coordonatele acestui punct se vor aduna cu coordonatele punctului dat ca parametru

	void scalare(const Coordonate& scalar) override
	{
		coord.x *= scalar.x;
		coord.y *= scalar.y;
	}
	//acelasi lucru ca inainte doar ca pentru inmultire


	void afisare() const override
	{
		std::cout << "Punctul cu abscisa " << coord.x << " si ordonata "<<coord.y <<"." << std::endl;
	}
	//aceasta metoda va afisa coordonatele punctului

	void setAbs(int x)
	{
		coord.x = x;
	}

	void setOrd(int y)
	{
		coord.y = y;
	}
	int getAbs()
	{
		return coord.x;
	}
	int getOrd()
	{
		return coord.y;
	}
};

