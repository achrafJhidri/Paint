/**
*\file ParseurTriangle.h
*\author JHIDRI MOKHTARI
*\brief prend une chaine ,verifie si elle contien le mot Triangle puis renvoi soit Forme * ou bien null
*/
#pragma once
#include "ParseurForme.h"
class ParseurTriangle :
	public ParseurForme
{
public:
	ParseurTriangle(ParseurForme*);
	~ParseurTriangle();
	Forme * resoudre1(const string & d) const;
};

