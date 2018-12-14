#pragma once
#include<string>

#include"Polygone.h"
#include"Cercle.h"
#include"Segment.h"
#include"FormeComplexe.h"
#include "Triangle.h"
using namespace std;
class Transformation
{
public:

	virtual ~Transformation();
	virtual operator string()const;
	 Forme* visite(const Polygone & p)const;
	 Forme* visite(const Triangle & p)const;
	 Forme* visite(const Segment & s)const;
	virtual Forme* visite(const Cercle & s)const; // pour la rotation faut multiliplier le rayon avec le facteur de rotation 
	 Forme* visite(const FormeComplexe&f)const;
	virtual Vecteur2D visite(const Vecteur2D& f)const=0;
	friend ostream & operator << (ostream & f, const Transformation &t);



};

