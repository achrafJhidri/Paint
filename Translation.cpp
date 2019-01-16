/**
*\file Translation.cpp
*\author JHIDRI MOKHTARI
*/ 
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

Vecteur2D Translation::visite(const Vecteur2D & f) const
{
	return  f + getU();
}
