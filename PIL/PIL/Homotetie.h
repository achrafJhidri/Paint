#pragma once
#include "Transformation.h"
class Homotetie :
	public Transformation
{
	Vecteur2D facteurConstant;
    double facteur;
public:
	Homotetie(const Vecteur2D & centre , const double f);
	~Homotetie();


	
	double getFacteur() const {
		return facteur;
	}

	Vecteur2D visite(const Vecteur2D& f)const;
	Forme * visite(const Cercle & c) const;
};

