/**
*\file SauveurTxt.h
*\author JHIDRI MOKHTARI
*\brief class  qui prend une forme et la sauve sous un format particulier TXT
*/
#pragma once
#include "Sauveur.h"
class SauveurTxt :
	public Sauveur
{
public:
	/*
	*\brief Constructeur de SauveurTxt
	*\param filename : le nom du fichier dans le quel on veut enregistrer
	*/
	SauveurTxt(const string & f);
	/*
	*\brief Destructeur
	*/
	virtual ~SauveurTxt();
	/*
	*\brief Constructeur de SauveurTxt
	*\param filename : le nom du fichier dans le quel on veut enregistrer
	*/
	void visite(const Forme & f)const;
};

