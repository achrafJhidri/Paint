/**
*\file Homotetie.h
*\author JHIDRI MOKHTARI
*/ 

#pragma once
#include "Transformation.h"
class Homotetie :
	public Transformation
{
	Vecteur2D facteurConstant;
	/*
	*fecteur rapport d'homothétie
	*/
    double facteur;
public:
	Homotetie(const Vecteur2D & centre , const double f);
	~Homotetie();


	
	double getFacteur() const {
		return facteur;
	}
   /*
	*appliquer un homothétie à un point 
	* \param f un point 
	* \return un point aprés avoir appliquer l'homothétie
	*/ 

	Vecteur2D visite(const Vecteur2D& f)const;
	/*
	*appliquer un homothétie à un cercle 
	* \param f un cercle  
	* \return un cercle aprés avoir appliquer l'homothétie
	*/ 
	Forme * visite(const Cercle & c) const;
};

