/**
*\file ParseurExpert.h
*\author JHIDRI MOKHTARI
*\brief Class Abstraite qui prend une forme et la dessine
*/

#pragma once
#include "Forme.h"
class Dessinateur
{
public:
	~Dessinateur();
	virtual void visite(const Forme& f)const = 0;
	virtual operator string() const;
};

