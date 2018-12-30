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

