/**
*\file Polygone.h
*\author JHIDRI MOKHTARI 
*/ 
#pragma once
#include "FormeSimple.h"
#include <vector>
class Transformation;
class Polygone :
	public FormeSimple
{
protected :
	vector<Vecteur2D> points;
	Polygone();
	/**
	*\throw Exception  si le nombre de points dans le tableaux < 3
    *un polygone doit etre construit avec au minimum 3 points 
    */
	Polygone(unsigned int couleur, const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3);
public:

	Polygone(unsigned int couleur, const vector<Vecteur2D> & v);
	Polygone(const Polygone & s);
	Forme* Clone() const;

	virtual ~Polygone();

	const vector<Vecteur2D>& getPoints()const;
	const Vecteur2D & operator[](unsigned int index)const;
/**
 *  ajouter un point 
 *\param f le point à ajouter
 *\throw Exception si c'est un triangle 
*/
	virtual void addPoint(const Vecteur2D & p);
/**
 * supprimer  un point  à partir de son indice
 * \param i l'indice de point à supprimer
 * \throw Exception si c'est un triangle ou  si l'indice  cherché n'est pas dans le tableau points 
*/
	virtual void supPoint(unsigned int index);
/**
 *  supprimer  un point  
 * \param p le point à supprimer
 * \throw Exception si c'est un triangle ou  si le point cherché n'est pas dans le tableau points 
*/
	virtual void supPoint(const Vecteur2D & p);


	const Polygone & operator=(const Polygone & s);

	virtual double calculeAir() const;
	virtual operator string()const;
	Forme* transforme(const Transformation & t)const;


	string print() const;

};

