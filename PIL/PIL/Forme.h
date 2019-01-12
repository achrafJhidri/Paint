#pragma once
#include <string>
#include <vector>
#include <sstream>
#include "Vecteur2D.h"
#include <iostream>


class Dessinateur;
class Sauveur;
#define M_PI (3.14159265358979323846)
class Transformation;
class ParseurForme;

using namespace std;
class Forme
{
protected:
	int couleur;
public:



	Forme();
	Forme(int couleur);
	Forme(const Forme& f);
	virtual Forme* Clone() const = 0;
	virtual ~Forme();

	int getCouleur() const;
	void setCouleur(const int c) ;



	friend ostream & operator <<(ostream & f, const Forme & o);

	virtual operator string()const;

	virtual double calculeAir() const = 0;

	virtual Forme* transforme(const Transformation & t)const = 0;

	void accepte(const Dessinateur & d)const;

	void save(const Sauveur & s)const;
	virtual string print() const = 0;
	
};

