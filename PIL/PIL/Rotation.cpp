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


