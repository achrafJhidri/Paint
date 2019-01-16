/**
*\file ParseurCercle.h
*\author JHIDRI MOKHTARI
*/
#include "ParseurCercle.h"
#include <regex>
#include "Cercle.h"
#include "Vecteur2D.h"




ParseurCercle::ParseurCercle(ParseurForme * f)
	:ParseurForme(f)
{
}

ParseurCercle::~ParseurCercle()
{
}

Forme * ParseurCercle::resoudre1(const string & d) const
{
	
	int indiceCercle = d.find("Cercle", 0);
	if (indiceCercle == std::string::npos)
		return NULL;
	else {
		int indiceRayon = d.find("rayon", 0);
		int indiceParentheseF = d.find(")", indiceRayon + 1);
		string chaine = d.substr(indiceRayon, indiceParentheseF);
		const char * c = chaine.c_str();
		double r, x, y;
		int couleur;
		sscanf_s(c, "rayon %lf couleur %d (%lf,%lf)", &r, &couleur, &x, &y);
		return new Cercle(couleur, Vecteur2D(x, y), r);
	}
}
