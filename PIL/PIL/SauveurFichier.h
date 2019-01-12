#pragma once
#include "Sauveur.h"
class SauveurFichier :
	public Sauveur
{
public:
	SauveurFichier(const string & f);
	virtual ~SauveurFichier();

	void visite(const Forme & f)const;
};

