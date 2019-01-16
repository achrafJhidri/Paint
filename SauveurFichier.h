
/**
*\file SauveurFichier.h
*\author JHIDRI MOKHTARI
*/
#pragma once
#include "Sauveur.h"
class SauveurFichier :
	public Sauveur
{
public:
	/** 
	 *\param f le nom de fichier 
	 */
	SauveurFichier(const string & f);
	virtual ~SauveurFichier();

	void visite(const Forme & f)const;
};

