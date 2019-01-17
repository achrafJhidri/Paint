#include "Transformation.h"



Transformation::~Transformation()
{
}



Forme * Transformation::visite(const Polygone& p) const
{
	vector<Vecteur2D>::const_iterator it;
	vector<Vecteur2D> nouveauPoints;
	for (it = p.getPoints().begin(); it != p.getPoints().end(); it++) {
		nouveauPoints.push_back(visite(*it));
	}
	return new Polygone(p.getCouleur(), nouveauPoints);
}

Forme * Transformation::visite(const Triangle & p) const
{
	vector<Vecteur2D>::const_iterator it;
	vector<Vecteur2D> nouveauPoints;
	for (it = p.getPoints().begin(); it != p.getPoints().end(); it++) {
		nouveauPoints.push_back(visite(*it));
	}
	return new Triangle(p.getCouleur(), nouveauPoints[0],nouveauPoints[1],nouveauPoints[2]);
}

Forme * Transformation::visite(const Segment & s) const
{
	return new Segment(s.getCouleur(), visite(s.getDepart()), visite(s.getFin()));
}

Forme * Transformation::visite(const Cercle & c) const
{
	return new Cercle(c.getCouleur(), visite(c.getCentre()), c.getRayon());
}

Forme * Transformation::visite(const FormeComplexe & f) const
{
	FormeComplexe * res = new FormeComplexe();
	res->setCouleur(f.getCouleur());

	vector<Forme*>::const_iterator it;

	for (it = f.getFormes().begin(); it != f.getFormes().end(); it++)
	{
		res->addForme(*((*it)->transforme(*this)));
	}



	return res;
}
