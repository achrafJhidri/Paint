/**
*\file formeSimple.h
*\author JHIDRI MOKHTARI
*\brief class mère de toute les formes Simple
*\brief \class Segment,\class Polygone,\class Cercle
*/
#pragma once
#include "Forme.h"
class FormeSimple :
	public Forme
{
public:
	/**
	* Constructeur de formeSimple
	*/
	FormeSimple();
	/**
	* Constructeur de formeSimple
	*\param couelur : la couleur de la forme
	*/
	FormeSimple(unsigned int couleur);
	/**
	* Constructeur par recopie d'une formeSimple
	*\param f : la formeSimple a recopié
	*/
	//FormeSimple(const FormeSimple & f);
	/**
	* Destructeur
	*/
	virtual ~FormeSimple();

	virtual operator string()const;
};

