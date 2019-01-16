/**
*\file Translation.h
*\author JHIDRI MOKHTARI
*/
#pragma once
#include "Transformation.h"
#include "Vecteur2D.h"
class Translation :
	public Transformation
{
	/**
	*u vecteur de translation 
	*/
	Vecteur2D u;

public:

	Translation( const Vecteur2D & f);

	~Translation();


	const Vecteur2D & getU()const;

	
	
	 operator string()const;
	/*
	*appliquer une translation  à un point 
	* \param f un point 
	* \return un point aprés avoir appliquer la translation
	*/ 
	  Vecteur2D visite(const Vecteur2D& f)const ;
};

