/**
*\file Homotetie.h
*\author JHIDRI MOKHTARI
*\brief applique une homtetie sur la forme 
*/
#pragma once
#include "Transformation.h"
class Homotetie :
	public Transformation
{
	Vecteur2D facteurConstant;
    double facteur;
public:
	/**
	*\brief Construit une Homotetie a base d'un centre et un facteur f
	*\param centre : le centre de l'homotetie
	*\param f : le facteur de l'homotetie
	*/
	Homotetie(const Vecteur2D & centre , const double f);
	/**
	*Destructeur
	*/
	~Homotetie();


	
	double getFacteur() const {
		return facteur;
	}
	/**
	*\brief applique l'homotetie sur un Point2D
	*\param point2D :le point qui subbit l'homotetie
	*/
	Vecteur2D visite(const Vecteur2D& point2D)const;
	/**
	*\brief applique l'homotetie sur un Cercle
	*\param c : le cercle qui subbit l'homotetie
	*/
	Forme * visite(const Cercle & c) const;
};

