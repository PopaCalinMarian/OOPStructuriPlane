#include "Punct.h"
#pragma once
#include "Figura.h"
#include <iostream>

//constructorul principal
Punct::Punct(int x, int y) 
{
    coord = { x, y };
    tip = 0; // mentionam ca tipul figurii este 0
}

//constructorul de copiere
Punct::Punct(const Punct& other) 
{
    coord = other.coord;
    tip = other.tip;
}

// Supraincarcare operator+
Punct* Punct::operator+(const Coordonate& vec) const {
    return new Punct(coord.x + vec.x, coord.y + vec.y);
}

// Supraincarcare operator*
Punct* Punct::operator*(const Coordonate& scalar) const {
    return new Punct(coord.x * scalar.x, coord.y * scalar.y);
}

// Metoda pentru citirea coordonatelor și tipului de la consolă
void Punct::citire() {
    int ord, abs;
    std::cout << "Ordonata punctului este: ";
    std::cin >> ord;
    Punct::setOrd(ord);
    std::cout << "si abscisa este: ";
    std::cin >> abs;
    Punct::setAbs(abs);
    tip = 0;
}

// Metoda pentru afisarea coordonatelor punctului
void Punct::afisare() const {
    std::cout << "Punctul cu abscisa " << coord.x << " si ordonata " << coord.y << "." << std::endl;
}

// Setteri si getteri pentru coordonate
void Punct::setAbs(int x) {
    coord.x = x;
}

void Punct::setOrd(int y) {
    coord.y = y;
}

int Punct::getAbs() const {
    return coord.x;
}

int Punct::getOrd() const {
    return coord.y;
}

// Destructor
Punct::~Punct() {
}
