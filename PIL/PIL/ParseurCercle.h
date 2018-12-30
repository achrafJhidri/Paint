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

