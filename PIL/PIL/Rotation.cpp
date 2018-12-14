#include "Rotation.h"





Rotation::Rotation(const double & alpha, Vecteur2D c)
	: R(Matrice2D::creeRotationMultiplePi(alpha)),vecteurCanstant(c-R*c)
{

}

Rotation::~Rotation()
{
}

Vecteur2D Rotation::visite(const Vecteur2D & f) const
{
	return  R*f + vecteurCanstant;
}
Rotation::operator string() const
{
	ostringstream os;
	os << Transformation::operator string() << "Rotation de  degré : " << acos(R.getLigneHaut().x) << "radian ]" << endl;
	return os.str();
}

//Forme * Rotation::visite(const Polygone & p) const
//{
//	vector<Vecteur2D>::const_iterator it;
//	vector<Vecteur2D> nouveauPoints;
//	for (it = p.getPoints().begin(); it != p.getPoints().end(); it++) {
//		nouveauPoints.push_back(visite(*it));
//	}
//	return new Polygone(p.getCouleur(), nouveauPoints);
//	
//}
//
//Forme * Rotation::visite(const Segment & s) const
//{
//	return new Segment(s.getCouleur(), this->visite(s.getDepart()), this->visite(s.getFin()));
//}
//
//Forme * Rotation::visite(const Cercle & s) const
//{
//	return new Cercle(s.getCouleur(), this->visite(s.getCentre()) , s.getRayon());
//}
//
//Forme * Rotation::visite(const FormeComplexe & f) const
//{
//	return nullptr;
//}
