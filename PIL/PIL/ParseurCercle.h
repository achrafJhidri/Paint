/**
*\file ParseurCercle.h
*\author JHIDRI MOKHTARI
*\brief prend une chaine ,verifie si elle contien le mot Cercle puis renvoi soit Forme * ou bien null 
*/
#pragma once
#include "ParseurForme.h"
class ParseurCercle :
	public ParseurForme
{
public:
	ParseurCercle(ParseurForme* f);
	~ParseurCercle();

	Forme* resoudre1(const string& d) const;
};

