/**
*\file Sauveur.h
*\author JHIDRI MOKHTARI
*/ 

#pragma once
#include "Forme.h"


class Sauveur
{
protected :
	string nomFichier;
public:
	Sauveur(const string & fileName);
	virtual ~Sauveur();
/*
 *sauvgarde une forme 
 * \param f la forme  à sauvgarder 
*/
	virtual void visite(const Forme & f)const = 0;




};

