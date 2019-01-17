/**
*\file Sauveur.h
*\author JHIDRI MOKHTARI
*\brief class Abstraite qui prend une forme et la sauve sous un format particulier (XML,BDD,TXT)
*/
#pragma once
#include "Forme.h"


class Sauveur
{
protected :
	string nomFichier;
public:
	/*
	*\brief Constructeur du Sauveur
	*\param filename : le nom du fichier dans le quel on veut enregistrer
	*/
	Sauveur(const string & fileName);
	/*
	*\brief Destructeur
	*/
	virtual ~Sauveur();



	virtual void visite(const Forme & f)const = 0;




};

