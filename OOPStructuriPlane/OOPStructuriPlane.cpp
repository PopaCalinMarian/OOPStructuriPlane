// OOPStructuriPlane.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Punct.h"
#include "Dreptunghi.h"
#include "SegmentOrizontal.h"
#include "SegmentVertical.h"

int main()
{
    //intai vom testa tot ce tina de clasa punct
    Punct A;
    A.afisare();
    A.citire();
    A.afisare();//afisarea
   
    Coordonate fact = { 2,2 };
    Punct* rezA = A + fact;
    rezA->afisare();
    rezA->~Punct();//adunarea

    Figura* rezB = A * fact;
    rezB->afisare();
    rezB->~Figura();
    
    A.~Punct();

    //acum testam clasa dreptunghi

    Dreptunghi D;
    D.afisare();//testez constructorul default
    D.citire();
    Dreptunghi* rezD = D + fact;
    rezD->afisare();
    rezD->~Dreptunghi();//adunarea

    Dreptunghi* rezDD = D * fact;
    rezDD->afisare();
    rezDD->~Dreptunghi();

    D.~Dreptunghi();

    //acum testam clasa segmentului orizontal
    SegmentOrizontal SO;
    SO.afisare();
    SO.citire();
    SegmentOrizontal* rezSO = SO + fact;
    rezSO->afisare();
    rezSO->~SegmentOrizontal();

    SegmentOrizontal* rezSSO = SO * fact;
    rezSSO->afisare();
    rezSSO->~SegmentOrizontal();

    SO.~SegmentOrizontal();

    //acum testam clasa segmentului vertical
    SegmentVertical SV;
    SV.afisare();//again, testez constructorul normal
    SV.citire();

    SegmentVertical* rezSV = SV + fact;
    rezSV->afisare();
    rezSV->~SegmentVertical();

    SegmentVertical* rezSSV = SV * fact;
    rezSSV->afisare();
    rezSSV->~SegmentVertical();

    SV.~SegmentVertical();

    return 0;//inchidam programul

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
