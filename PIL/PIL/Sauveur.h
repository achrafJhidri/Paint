#pragma once
#include "Forme.h"


class Sauveur
{
protected :
	string nomFichier;
public:
	Sauveur(const string & fileName);
	virtual ~Sauveur();



	virtual void visite(const Forme & f)const = 0;




};

