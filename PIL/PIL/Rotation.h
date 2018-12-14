#pragma once
#include "Transformation.h"
#include "Matrice2D.h"
class Rotation :
	public Transformation
{
	Matrice2D R;
	Vecteur2D vecteurCanstant;
public:
	/**
	*cr�e la rotation d'ongle coef*pi
	*le coef < > 0
	*si coef = +0.25 cr�e la rotation d'ongle directe 45� // Pi/4
	*/
	Rotation(const double & alpha,Vecteur2D c );
	virtual ~Rotation();

	 Vecteur2D visite(const Vecteur2D& f)const;

	 operator string() const;
	

};

