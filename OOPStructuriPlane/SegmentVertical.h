//pentru segmentul vertical, se va face aproape acelasi procedeu ca si pentru segmentul orionat
#pragma once
#include "Figura.h"
class SegmentVertical :
    public Figura
{
    int x, yj, ys;//in primul rand se va defini x ca si absisa comuna iar yj reprezinta ordonata capatului de jos iar ys celui de sus, date private ale clasei

public:
    SegmentVertical(int xc, int y1, int y2)//astfel, constructorul acestei clase va prelua parametrii dati 
    {
        x = xc;
        yj = y1;
        ys = y2;
        tip = 2;//tipul potrivit
    }

    void translatie(const Coordonate& vec) override
    {
        x += vec.x;
        yj += vec.y;
        ys += vec.y;
    }//ex: segmentul de coordonate (1,-4,4) va fi adunat cu (3, 2) asftel se va muta la dreapta cu 3 unitati si se va muta putin in sus cu 2 unitati, pastrand lungimea

    void scalare(const Coordonate& scalar) override
    {
        x *= scalar.x;
        yj *= scalar.y;
        ys *= scalar.y;
    }//ex:acelasi segment anterior imultit cu (3,2), va fii mutat la dreapta cu 3 unitati, iar lungimea segmentului se va dubla intindu-se pana ordonatele -8 si 8

    void afisare() const override
    {
        std::cout << "Segmentul vertical care se afla pe abscisa " << x << " si are capatul de jos in " << yj << " si capatul de sus in " << ys << std::endl;
    }
};

