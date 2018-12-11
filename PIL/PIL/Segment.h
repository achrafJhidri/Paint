#pragma once
#include "FormeSimple.h"

class Segment :
	public FormeSimple
{
	Vecteur2D depart;
	Vecteur2D fin;
public:
	Segment();
	Segment(int couleur, const Vecteur2D & depart, const Vecteur2D & fin);
	Segment(const Segment & s);
	Forme* Clone() const;

	 ~Segment();

	const  Vecteur2D&  getDepart()const; // mieux
	const Vecteur2D& getFin()const;

	void setDepart(const Vecteur2D & d);
	void setFin(const Vecteur2D & f);

	//bool operator==(const Segment &s)const;
	//bool operator!=(const Segment & s)const { return !(*this == s); };
	const Segment & operator=(const Segment & s);


	double calculeAir() const;
	 operator string()const;


	
};

