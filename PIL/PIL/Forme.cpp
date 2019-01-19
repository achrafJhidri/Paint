#include "Forme.h"
#include <fstream>
#include <exception>
#include"ParseurForme.h"
#include "Dessinateur.h"
#include "Sauveur.h"

Forme::Forme()
	: couleur(255)
{
}

Forme::Forme(unsigned int c)
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

void Forme::dessine(const Dessinateur & d) const
{
	d.visite(*this);
}

void Forme::save(const Sauveur & s) const
{
	s.visite(*this);
}





Forme::~Forme()
{
}

unsigned int Forme::getCouleur() const
{
	return couleur;
}

void Forme::setCouleur(const unsigned int c)
{

	couleur = c;
}

ostream & operator<<(ostream & f, const Forme & o)
{
	f<<(string)o;
	return f;
}
