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

