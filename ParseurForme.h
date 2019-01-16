/**
*\file ParseurForme.h
*\author JHIDRI MOKHTARI
*\brief prend une chaine de caractère et renvoi la forme adéquate
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

