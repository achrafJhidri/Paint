/**
*\file Triangle.h
*\author JHIDRI MOKHTARI
*/
#pragma once
#include "Polygone.h"
class Triangle :
	public Polygone
{
public:
	/**
	* Constructeur de Triangle
	*\param couleur : la couleur de la forme
	*\param p1 p2 p3 : les 3 points formant le triangle
	*/
	Triangle(unsigned int couleur ,const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3 );
	/*Triangle(const Triangle & t);*/
	/**
	* Clone le Triangle
	*\return Forme * un nouveau Triangle identique
	*/
	Forme*Clone()const;
	/**
	* Destructeur
	*/
	virtual ~Triangle();

	/**
	* calcule l'air du Triangle
	*\return double
	*/
	double calculeAir() const;
	/**
	* affecte le Triangle s au Triangle appelant
	*\param s : le Triangle a recopié
	*\return Triangle : le Triangle après affecation
	*/
	const Triangle * operator=(const Triangle & s);
	/**
	* cast le Triangle en String
	*/
	operator string()const;
	Forme* transforme(const Transformation & t)const;
	/**
	* renvoi le Triangle en format String
	*/
	string print() const;
};


