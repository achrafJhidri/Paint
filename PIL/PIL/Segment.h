/**
*\file Segment.h
*\author JHIDRI MOKHTARI
*/
#pragma once
#include "FormeSimple.h"
class Transformation;
class Segment :
	public FormeSimple
{
	Vecteur2D depart;
	Vecteur2D fin;
public:
	/**
	* Constructeur de Segment
	*/
	/*Segment();*/
	/**
	* Constructeur de Segment
	*\param couleur : la couleur de la forme
	*\param depart : le point 2D de depart
	*\param fin : le point 2D de fin
	*/
	Segment(unsigned int couleur, const Vecteur2D & depart, const Vecteur2D & fin);

	/**
	* Clone le Segment
	*\return Forme * un nouveau Segment identique
	*/
	Forme* Clone() const;
	/**
	* Destructeur 
	*/
	 ~Segment();
	/**
	* retourne le point2D de depart
	* \return const Vecteur2D& 
	*/
	const  Vecteur2D&  getDepart()const; 
	/**
	* retourne le point2D de depart
	* \return const Vecteur2D&
	*/
	const Vecteur2D& getFin()const;

	/**
	* modifie le point de depart par le point reçu en paramètre
	*\param d : le point de depart
	*/
	void setDepart(const Vecteur2D & d);
	/**
	* modifie le point de fin par le point reçu en paramètre
	*\param f : le point de depart
	*/
	void setFin(const Vecteur2D & f);

	/**
	* affecte le Segment s au segment appelant
	*\param s : le Segment a recopié
	*\return Segement : le Segment après affecation
	*/
	const Segment & operator=(const Segment & s);

	/**
	* calcule l'air du Segement 0
	*\return 0
	*/
	double calculeAir() const;
	/**
	* cast le Segment en String

	*/
	 operator string()const;
	
	 Forme* transforme(const Transformation & t)const;
	/**
	* renvoi le Segement en format String
	*/
	 string print() const;
	

	
};

