/**
*\file Rotation.cpp
*\author JHIDRI MOKHTARI
*/ 
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

