/**
*\file ParseurFormeComplexe.h
*\author JHIDRI MOKHTARI
*\brief prend une chaine ,verifie si elle contien le mot FormeComplexe puis renvoi soit Forme * ou bien null
*/


#pragma once
#include "ParseurForme.h"
class ParseurFormeComplexe :
	public ParseurForme
{
public:
	

	ParseurFormeComplexe(ParseurForme * f);
	~ParseurFormeComplexe();

	Forme* resoudre1(const string& d) const;

};

