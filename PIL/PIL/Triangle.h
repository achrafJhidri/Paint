#pragma once
#include "Polygone.h"
class Triangle :
	public Polygone
{
public:

	Triangle(int couleur ,const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3 );
	Triangle(const Triangle & t);
	Forme*Clone()const;
	virtual ~Triangle();


	double calculeAir() const;
	//bool operator==(const Triangle &s)const;
	//bool operator!=(const Triangle & s)const { return !(*this == s); };
	const Triangle * operator=(const Triangle & s);
	operator string()const;

};


