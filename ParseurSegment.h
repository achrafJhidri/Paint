/**
*\file ParseurSegement.h
*\author JHIDRI MOKHTARI
*\brief prend une chaine ,verifie si elle contien le mot Segment puis renvoi soit Forme * ou bien null
*/
#pragma once
#include "ParseurForme.h"
class ParseurSegment :
	public ParseurForme
{
public:
	ParseurSegment(ParseurForme* f);
	~ParseurSegment();

	Forme* resoudre1(const string& d) const;
};

