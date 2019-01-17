/**
*\file forme.h
*\author JHIDRI MOKHTARI
*\brief class abstraite mère de toute la formes	
*/
#pragma once
#include <string>
#include <vector>
#include <sstream>
#include "Vecteur2D.h"
#include <iostream>


class Dessinateur;
class Sauveur;
class Transformation;
class ParseurForme;


#define M_PI (3.14159265358979323846)


using namespace std;
class Forme
{
protected:
	unsigned	int couleur;
public:


	/**
	* Constructeur de forme
	*/
	Forme();
	/**
	* Constructeur de forme
	*\param couleur : la couleur de la forme
	*/
	Forme(unsigned int couleur);
	/**
	* Constructeur par recopie d'une forme
	*\param f : la forme a recopié
	*/
	Forme(const Forme& f);
	/**
	* clone la forme 
	*\return Forme * : une nouvelle forme identique à la forme appelante
	*/
	virtual Forme* Clone() const = 0;
	/**
	* Destructeur
	*/
	virtual ~Forme();
	/**
	* renvoi l'entier correspondant à la couleur de la forme
	*\return  unsigned int
	*/
	unsigned int getCouleur() const;
	/**
	* définit la couleur de la forme
	*\param c : la nouvelle couleur 
	*/
	void setCouleur(const unsigned int c) ;



	friend ostream & operator <<(ostream & f, const Forme & o);
	/**
	* imprime la couleur de la forme sous forme Text
	*/
	virtual operator string()const;
	/**
	* calcule l'air d'une forme
	*\return   en double
	*/
	virtual double calculeAir() const = 0;

	/**
	* transforme  une forme
	*\return une forme
	*\param t : la transformation à appliquer a la forme
	*/
	virtual Forme* transforme(const Transformation & t)const = 0;
	
	/**
	*  Dessine une forme 
	* \param d : le Dessinateur de la forme
	*/
	void accepte(const Dessinateur & d)const;
	/**
	*  sauvgarde une forme sous Forme Text
	* \param s : le Sauveur  
	*/
	void save(const Sauveur & s)const;
	/**
	*  imprime la forme sous un forme spécifique
	*/
	virtual string print() const = 0;
	
};

