/**
*\file ParseurForme.h
*\author JHIDRI MOKHTARI
*\brief prend une chaine de caract�re et renvoi la forme ad�quate
*/
#pragma once
#include "ParseurExpert.h"




class ParseurForme :
	public ParseurExpert
{
protected :
	ParseurForme * suivant;
public:
	ParseurForme(ParseurForme * s);
	virtual ~ParseurForme();

	 Forme*  resoudre(const string& c) const ;
	 virtual Forme* resoudre1(const string& d) const = 0;
};

