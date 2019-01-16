/**
*\file Traingle.h
*\author JHIDRI MOKHTARI
*/ 
#pragma once
#include "Polygone.h"
class Triangle :
	public Polygone
{
public:

	Triangle(unsigned int couleur ,const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3 );
	Triangle(const Triangle & t);
	Forme*Clone()const;
	virtual ~Triangle();


	double calculeAir() const;

	const Triangle * operator=(const Triangle & s);
	operator string()const;
	Forme* transforme(const Transformation & t)const;
	string print() const;
};


