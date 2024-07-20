#pragma once
#include <iostream>
//asta e directiva de preprocesor,pt a include functiile de iesire si intrare
struct Coordonate
{
	int x, y;
};

class Figura
{
protected:
	int tip;//definesc tipul figurii 0,1,2
public: 
	virtual Figura* operator+(const Coordonate& vec) const = 0;
	//aceasta metoda pur virtuala va urma sa fie supraincarce operatorul de adunare pentru fiecare tip de figura
	virtual Figura* operator*(const Coordonate& scalar) const = 0;
	//acelasi lucru ca mai devreme doar ca va supraincarca operatorul de inmulitre
	virtual void afisare() const = 0;
	//metoda de afisare care se va suprascrie pt tipul de figura definit
	virtual void citire();

	virtual ~Figura() {}; // destructorul clasei derivate
};

