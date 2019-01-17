/**
*\file Dessinateur.h
*\author JHIDRI MOKHTARI
*\brief Class Abstraite qui prend une forme et la dessine
*/

#pragma once
#include "Forme.h"
class Dessinateur
{
public:
	virtual ~Dessinateur() {};
	virtual void visite(const Forme& f)const = 0;
	
};

