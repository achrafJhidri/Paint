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
	Segment();
	Segment(unsigned int couleur, const Vecteur2D & depart, const Vecteur2D & fin);
	Segment(const Segment & s);
	Forme* Clone() const;

	 ~Segment();

	const  Vecteur2D&  getDepart()const; 
	const Vecteur2D& getFin()const;

	void setDepart(const Vecteur2D & d);
	void setFin(const Vecteur2D & f);

	const Segment & operator=(const Segment & s);


	double calculeAir() const;
	 operator string()const;

	 Forme* transforme(const Transformation & t)const;
	 string print() const;
	

	
};

