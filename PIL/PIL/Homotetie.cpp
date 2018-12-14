#include "Homotetie.h"





Homotetie::Homotetie(const Vecteur2D & c, const double f)
	:	facteurConstant(c-c*f),facteur(f)
{
}

Homotetie::~Homotetie()
{
}

Vecteur2D Homotetie::visite(const Vecteur2D & f) const
{
	return f * facteur + facteurConstant;
}
Forme * Homotetie::visite(const Cercle & c) const
{
	return new Cercle(c.getCouleur(), visite(c.getCentre()), c.getRayon()*facteur);
}

