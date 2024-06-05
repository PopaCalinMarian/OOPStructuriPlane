#pragma once
#include "Figura.h"
class SegmentOrizontal : public Figura // clasa va deriva din clasa abstracta figura
{
	int y, x1, x2; // valori private al acestei clase
	// y va fii valoarea ordonatei comune, x1 este val abscisei din stanga si x2 este val abscisei din dreapta
public:
	//vom stabili yc la ordonata comuna y, abscisa stanga(xs) pentru x1 iar absisa dreapta(xd) pentru x2
	SegmentOrizontal(int yc, int xs, int xd) // constructorul clasei segm oriz
	{
		y = yc;
		x1 = xs;
		x2 = xd;
		tip = 1; // tipul potrivit
	}

	void translatie(const Coordonate& vec) override // aici pentru segmentul respectiv vom adauga valorea ordonate si aceeasi valoare al absciselor
	{
		y += vec.y;
		x1 += vec.x;
		x2 += vec.y;
	}//de exemplu pentru segmentul (0,-3,3) adaugam coordonatele (0,3), ramane segmentul pe aceeasi ordonata, dar segmentul se va muta la dreapta cu 3 unitati, devenind(0,0,6) si pastram evident lungimea

	void scalare(const Coordonate& scalar) override // aici vom muta segmentul prin imutirea coordonatelor, totusi nu sunt sigur daca se va muta si ordonata segmentului
	{
		y *= scalar.y;
		x1 *= scalar.x;
		x2 *= scalar.x;
	}//ex: segmentul (1, -2, 2) se inmulteste cu (2,2), astfel segmentul devenind(2, -4, 4) adica se muta mai sus si se dubleaza latimea segmentului

	void afisare() const override
	{
		std::cout << "Segmentul orizontal care se afla pe ordonata " << y << " si are capatul din stanga in " << x1 << " si capatul din dreapta in " << x2 << std::endl;
	}
};

