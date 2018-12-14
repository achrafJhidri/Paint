#include "Translation.h"
#include "Cercle.h"
#include "Polygone.h"
#include "FormeComplexe.h"
#include "Segment.h"


Translation::Translation(const Vecteur2D &d)
	: u(d)
{};

Translation::~Translation()
{
}

const Vecteur2D & Translation::getU() const
{
	return u;
}



Translation::operator string() const
{
	ostringstream os;
	os << Transformation::operator string() << "Translation de  :" << Vecteur2D(0,0) << " à "<< u << " ]" << endl;
	return os.str();
}

//Forme * Translation::visite(const Polygone& p) const
//{
//	vector<Vecteur2D>::const_iterator it;
//	vector<Vecteur2D> nouveauPoints;
//	for (it = p.getPoints().begin(); it != p.getPoints().end(); it++) {
//		nouveauPoints.push_back(visite(*it));
//	}
//	return new Polygone(p.getCouleur(), nouveauPoints);
//}
//
//Forme * Translation::visite(const Segment & s) const
//{
//	return new Segment(s.getCouleur(), visite(s.getDepart()) , visite(s.getFin()));
//}
//
//Forme * Translation::visite(const Cercle & c) const
//{
//	return new Cercle(c.getCouleur(), visite(c.getCentre()), c.getRayon());
//}
//
//Forme * Translation::visite(const FormeComplexe & f) const
//{
//	FormeComplexe * res = new FormeComplexe();
//	res->setCouleur(f.getCouleur());
//
//	vector<Forme*>::const_iterator it;
//
//	for (it = f.getFormes().begin(); it != f.getFormes().end(); it++)
//	{
//		res->addForme( *( (*it)->transforme(*this)));
//	}
//
//
//
//	return res;
//}

Vecteur2D Translation::visite(const Vecteur2D & f) const
{
	return  f + getU();
}
