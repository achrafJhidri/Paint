/**
*\file Cercle.h
*\author JHIDRI MOKHTARI
*/
#pragma once
#include "FormeSimple.h"
class Transformation;
class Cercle :
	public FormeSimple
{

	Vecteur2D centre;
	double rayon;

public:
	/**
	* Constructeur de Cercle
	*/
	Cercle();
	/**
	*Constructeur de Cercle
	*\param couleur : la couleur de la forme
	*\param centre : le centre du Cercle 
	*/
	Cercle(unsigned int couleur, const Vecteur2D &centre, double rayon);

	/**
	* Clone le Cercle
	*\return Forme * un nouveau Cercle identique
	*/
	Forme* Clone() const;
	/**
	* Destructeur
	*/
	~Cercle();
	/**
	* retourne le centre
	* \return const Vecteur2D&
	*/
	const Vecteur2D& getCentre()const;
	/**
	* modifie le centre du cercle par le centre reçu en paramètre
	*\param d : le nouveau centre
	*/
	void setCentre(const Vecteur2D &c);
	/**
	* retourne le rayon
	* \return double : le rayon du cercle 
	*/
	double getRayon()const;
	/**
	* modifie le rayon du cercle par le rayon reçu en paramètre
	*\param r : le nouveau rayon
	*/
	void setRayon(const double r);
	/**
	* retourne l'air du cercle
	* \return double : l'air du cercle
	*/
	double calculeAir()const;
	/**
	* cast le Cercle en String
	*/
	operator string() const;
	/**
	* affecte le Cercle s au Cercle appelant
	*\param s : le Cercle a recopié
	*\return Cercle : le Cercle après affecation
	*/
	const Cercle & operator= (const Cercle &c);

	Forme* transforme(const Transformation & t)const;
	/**
	* renvoi le Cercle en format String
	*/
	string print() const;


};


