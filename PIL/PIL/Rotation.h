/**
*\file Rotation.h
*\author JHIDRI MOKHTARI
*\brief applique une Rotation sur la forme
*/
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
	*crée la rotation d'ongle coef*pi
	*le coef < > 0
	*si coef = +0.25 crée la rotation d'ongle directe 45° // Pi/4
	*/
	Rotation(const double & alpha,Vecteur2D c );
	/**
	*Destructeur
	*/
	virtual ~Rotation();
	/**
	*\brief applique la rotation sur un Point2D
	*\param point2D :le point qui subbit la rotation
	*/

	 Vecteur2D visite(const Vecteur2D& f)const;

	
	

};

