#pragma once
#include "Figura.h"
class SegmentVertical : public Figura
{
	int xc, yj, ys; // xc este abscisa comuna, ys fiind ordonata de jos iar ys cea de sus, aceste date fiind private

public:
    SegmentVertical(int x, int y1, int y2);//astfel, constructorul acestei clase va prelua parametrii dati 
    SegmentVertical(const SegmentVertical& other); // constructor de copiere
    SegmentVertical();//constructor defualt
    ~SegmentVertical(); // destructor

    // Suprascrierea operatorului + pentru translatare
    SegmentVertical* operator+(const Coordonate& vec) const;

    // Suprascrierea operatorului * pentru scalare
    SegmentVertical* operator*(const Coordonate& scalar) const;

    void afisare() const override;
    void citire() override; // din nou, mentionez ca metoda citiere NU este const, deoarece trebuie modificate datele clasei

    void setX(int x);
    void setYs(int y);
    void setYj(int y);
};