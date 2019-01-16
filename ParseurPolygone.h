
/**
*\file ParseurPolygone.h
*\author JHIDRI MOKHTARI
*\brief prend une chaine ,verifie si elle contien le mot Polygone puis renvoi soit Forme * ou bien null
*/

#pragma once
#include "ParseurForme.h"
class ParseurPolygone :
	public ParseurForme
{
public:
	ParseurPolygone(ParseurForme *);
	~ParseurPolygone();
	Forme* resoudre1(const string& d) const;
};


