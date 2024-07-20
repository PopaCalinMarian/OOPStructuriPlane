#pragma once
#include "Figura.h"
class SegmentOrizontal : public Figura // clasa va deriva din clasa abstracta figura
{
	int y, x1, x2; // valori private al acestei clase
	// y va fii valoarea ordonatei comune, x1 este val abscisei din stanga si x2 este val abscisei din dreapta
public:
	//vom stabili yc la ordonata comuna y, abscisa stanga(xs) pentru x1 iar absisa dreapta(xd) pentru x2
	SegmentOrizontal(int yc, int xs, int xd); // constructorul clasei segm oriz

	// Constructor de copiere
	SegmentOrizontal(const SegmentOrizontal& other);

	// Constructor care plaseaza un segment la origine si ii da o lungime de 10
	SegmentOrizontal();

	// Destructor
	~SegmentOrizontal();

	// aici pentru segmentul respectiv vom adauga valorea ordonate si aceeasi valoare al absciselor
	SegmentOrizontal* operator+(const Coordonate& vec) const;

	// aici vom muta segmentul prin imutirea coordonatelor, totusi nu sunt sigur daca se va muta si ordonata segmentului
	SegmentOrizontal* operator*(const Coordonate& scalar) const;

	void afisare() const override;
	void citire() override;

	void setOrd(int yc);
	void setAbsSt(int xs);
	void setAbsDr(int xd);
};


