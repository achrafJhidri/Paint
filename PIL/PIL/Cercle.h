#pragma once
#include "FormeSimple.h"

class Cercle :
	public FormeSimple
{

	Vecteur2D centre;
	double rayon;

public:

	//constructeur
	Cercle();
	Cercle(int couleur, const Vecteur2D &centre, double rayon);
	Cercle(const Cercle &c);
	Forme* Clone() const;
	//destrcture
	~Cercle();
	//getters setters
	const Vecteur2D& getCentre()const;
	void setCentre(const Vecteur2D &c);
	double getRayon()const;
	void setRayon(const double r);

	double calculeAir()const;
	operator string() const;
	//bool operator==(const Cercle &c)const;

	const Cercle & operator= (const Cercle &c);


};


