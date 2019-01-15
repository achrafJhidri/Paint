#pragma once
#include "FormeSimple.h"
class Transformation;
class Cercle :
	public FormeSimple
{

	Vecteur2D centre;
	double rayon;

public:
	//constructeur
	Cercle();
	Cercle(unsigned int couleur, const Vecteur2D &centre, double rayon);
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



	const Cercle & operator= (const Cercle &c);

	Forme* transforme(const Transformation & t)const;
	string print() const;


};


