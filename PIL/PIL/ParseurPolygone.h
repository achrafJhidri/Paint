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


