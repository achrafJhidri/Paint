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

