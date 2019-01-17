/**
*\file Transformation.h
*\author JHIDRI MOKHTARI
*\brief Class Abstraite applique une transformation Geome trique sur une Forme
*/
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
	/**
	*Destructeur	
	*/
	virtual ~Transformation();
	/**
	*\brief applique la transformation sur un polygone
	*\param p : le polygone en question
	*/
	 Forme* visite(const Polygone & p)const;
	 /**
	*\brief applique la transformation sur un Triangle
	*\param t : le Triangle en question
	*/
	 Forme* visite(const Triangle & t)const;
	 /**
	*\brief applique la transformation sur un Segment
	*\param s : le Segment en question
	*/
	 Forme* visite(const Segment & s)const;
	 /**
	*\brief applique la transformation sur un Cercle
	*\param c : le Cercle en question
	*/
	virtual Forme* visite(const Cercle & c)const;
	/**
   *\brief applique la transformation sur la FormeComplexe
   *\param f : la FormeComplexe en question
   */
	Forme* visite(const FormeComplexe& f)const;
	virtual Vecteur2D visite(const Vecteur2D& f)const=0;
	
	

};

