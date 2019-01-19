/**
*\file Erreur.cpp
*\author JHIDRI MOKHTARI
*/

#include "Erreur.h"



Erreur::Erreur()
{
}

Erreur::Erreur(const string & m)
	:msg(m)
{}

Erreur::Erreur(const Erreur & e)	: exception(e.what())
{
}


Erreur::~Erreur()
{
}

const char * Erreur::what() const
{
	return msg.c_str();
}
