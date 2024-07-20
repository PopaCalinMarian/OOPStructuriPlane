#include "SegmentVertical.h"

SegmentVertical::SegmentVertical(int x, int y1, int y2)
{
	xc = x;
	ys = y1;
	yj = y2;
	tip = 2;
}//setarea parametrilor pentru constructorul normal

SegmentVertical::SegmentVertical(const SegmentVertical& other)
{
	xc = other.xc;
	ys = other.ys;
	yj = other.yj;
	tip = other.tip;
}//constructorul de copiere

SegmentVertical::SegmentVertical()
{
	xc = 0;
	ys = 10;
	yj = -10;
	tip = 2;
}//constructorul default

SegmentVertical::~SegmentVertical()
{
}//destructorul default

SegmentVertical* SegmentVertical::operator+(const Coordonate& vec) const
{
	return new SegmentVertical(xc + vec.x, ys + vec.y, yj + vec.y);
}//suprascrierea operatorului + cu adunarea similara ca la segm oriz

SegmentVertical* SegmentVertical::operator*(const Coordonate& scalar) const
{
	return new SegmentVertical(xc * scalar.x, ys * scalar.y, yj * scalar.y);
}

void SegmentVertical::afisare() const
{
	std::cout << "Segmentul vertical se afla pe abscisa " << xc;
	std::cout << " , capatul de sus fiind in " << ys;
	std::cout << " si capatul de jos in " << yj << std::endl;
}

void SegmentVertical::citire()
{
	std::cout << "Absicsa segmentului este ";
	int x; std::cin >> x; setX(x);
	std::cout << " , ordonata de sus fiind ";
	int ys; std::cin >> ys; setYs(ys);
	std::cout << " iar ordonata de jos fiind ";
	int yj; std::cin >> yj; setYj(yj);
}

void SegmentVertical::setX(int x)
{
	xc = x;
}

void SegmentVertical::setYs(int y)
{
	ys = y;
}

void SegmentVertical::setYj(int y)
{
	yj = y;
}
