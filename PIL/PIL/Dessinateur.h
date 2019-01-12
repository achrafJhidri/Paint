#pragma once
#include "Forme.h"
class Dessinateur
{
public:
	~Dessinateur();
	virtual void visite(const Forme& f)const = 0;
	virtual operator string() const;
};

