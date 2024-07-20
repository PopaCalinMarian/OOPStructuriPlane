#include "SegmentOrizontal.h"

SegmentOrizontal::SegmentOrizontal(int yc, int xs, int xd)
{
	y = yc;
	x1 = xs;
	x2 = xd;
	tip = 1;
} //constructorul normal al clasei

SegmentOrizontal::SegmentOrizontal(const SegmentOrizontal& other)
{
	y = other.y;
	x1 = other.x1;
	x2 = other.x2;
	tip = other.tip;
}//constructorul de copiere

SegmentOrizontal::SegmentOrizontal()
{
	y = 0;
	x1 = -10;
	x2 = 10;
	tip = 1;
}//acesta este constructorul default, care plaseaza ordonata la orignie(0) si pune abscisele in stanga si dreapta la distanta 10

SegmentOrizontal::~SegmentOrizontal()
{
}//destructorul default

SegmentOrizontal* SegmentOrizontal::operator+(const Coordonate& vec) const
{
	return new SegmentOrizontal(y + vec.y, x1 + vec.x, x2 + vec.x);
}//se va ridica segm cu o ordonata(sau scadea daca ordonata adaugata este negativa), iar abscisele se adauga, iar lungimea se pastreaza evident

SegmentOrizontal* SegmentOrizontal::operator*(const Coordonate& scalar) const
{
	return new SegmentOrizontal(y * scalar.y, x1 * scalar.x, x2 * scalar.x);
}
//se va modifica la inmultire atat ordonata cat se va lungi segmentul cu abscisa data(ex: la segm (1,-1,1) imultit cu (2,2), se dubleaza latimea segmentului si se ridica)

void SegmentOrizontal::afisare() const
{
	std::cout<<"Segmentul orizontal se afla pe ordonata " << y;
	std::cout << " , capatul din stanga fiind in " << x1;
	std::cout << " si capatul din dreapta in " << x2 << std::endl;
}

void SegmentOrizontal::citire()
{
	std::cout << "Ordonata segmentului este ";
	int yc; std::cin >> yc; setOrd(yc);
	std::cout << "Abscisa stanga este ";
	int xs; std::cin >> xs; setAbsSt(xs);
	std::cout << "iar abscisa dreapta este ";
	int xd; std::cin >> xd; setAbsDr(xd);
	//a trebuit sa implementam noi seteri pentru a putea construi cum trebuie metoda de citire
}

void SegmentOrizontal::setOrd(int yc)
{
	y = yc;
}

void SegmentOrizontal::setAbsSt(int xs)
{
	x1 = xs;
}

void SegmentOrizontal::setAbsDr(int xd)
{
	x2 = xd;
}
