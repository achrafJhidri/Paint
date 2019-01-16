/**
*\file forme.h
*\author JHIDRI MOKHTARI
*/
#pragma once
#include <string>
#include <vector>
#include <sstream>
#include "Vecteur2D.h"
#include <iostream>
#include "Erreur.h"


class Dessinateur;
class Sauveur;
#define M_PI (3.14159265358979323846)
class Transformation;
class ParseurForme;

using namespace std;
class Forme
{
protected:
	unsigned	int couleur;
public:



	Forme();
	Forme(unsigned int couleur);
	Forme(const Forme& f);
	virtual Forme* Clone() const = 0;
	virtual ~Forme();

	unsigned int getCouleur() const;
	void setCouleur(const unsigned int c) ;



	friend ostream & operator <<(ostream & f, const Forme & o);

	virtual operator string()const;
/**
 * calcule l'air d'une forme 
 *\return  l'air en double 
*/
	virtual double calculeAir() const = 0;

/**
 * transforme  une forme 
 *\return une forme 
*/
	virtual Forme* transforme(const Transformation & t)const = 0;

	void accepte(const Dessinateur & d)const;
/**
 *  sauvgarde une forme 
 * \param le type de sauvgarde
 */
	void save(const Sauveur & s)const;

/**
*\return string 
*/
	virtual string print() const = 0;
	
};

