/**
*\file SauveurFichier.h
*\author JHIDRI MOKHTARI
*\brief class  qui prend une forme et la sauve sous un format particulier TXT
*/
#pragma once
#include "Sauveur.h"
class SauveurFichier :
	public Sauveur
{
public:
	/*
	*\brief Constructeur de SauveurFichier
	*\param filename : le nom du fichier dans le quel on veut enregistrer
	*/
	SauveurFichier(const string & f);
	/*
	*\brief Destructeur
	*/
	virtual ~SauveurFichier();
	/*
	*\brief Constructeur de SauveurFichier
	*\param filename : le nom du fichier dans le quel on veut enregistrer
	*/
	void visite(const Forme & f)const;
};

