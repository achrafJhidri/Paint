#pragma once
#include "Forme.h"
class FormeSimple :
	public Forme
{
public:
	FormeSimple();
	FormeSimple(unsigned int couleur);
	FormeSimple(const FormeSimple & f);
	virtual ~FormeSimple();

	virtual operator string()const;
};

