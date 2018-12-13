#pragma once
#include<string>

#include"Polygone.h"
#include"Cercle.h"
#include"Segment.h"
#include"FormeComplexe.h"
using namespace std;
class Transformation
{
public:

	virtual ~Transformation();
	virtual operator string()const;
	virtual Forme* visite(const Polygone & p)const=0;
	virtual Forme* visite(const Segment & s)const=0;
	virtual Forme* visite(const Cercle & s)const=0;
	virtual Forme* visite(const FormeComplexe&f)const=0;
	virtual Vecteur2D visite(const Vecteur2D& f)const=0;
	friend ostream & operator << (ostream & f, const Transformation &t);



};

