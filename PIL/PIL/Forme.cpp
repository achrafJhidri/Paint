#include "Forme.h"



Forme::Forme()
	: couleur(255)
{
}

Forme::Forme(int c)
	:couleur(c)
{
}

Forme::Forme(const Forme & f)
	:couleur(f.couleur)
{
	
}

Forme::operator string() const
{
	ostringstream os;
	os << "Couleur : " << couleur ;
	return os.str();
}


Forme::~Forme()
{
}

int Forme::getCouleur() const
{
	return couleur;
}

void Forme::setCouleur(const int c) 
{

	couleur = c;
}

ostream & operator<<(ostream & f, const Forme & o)
{
	f<<(string)o;
	return f;
}
