/**
*\file ParseurPolygone.h
*\author JHIDRI MOKHTARI
*/
#include "ParseurPolygone.h"
#include <regex>
#include "Polygone.h"
#include "Vecteur2D.h"
#include <cstring>
#include <iostream>



template<typename Out>
void splitA(const std::string &s, char delim, Out result) {
	std::stringstream ss(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		*(result++) = item;
	}
}
std::vector<std::string> split1(const std::string &s, char delim) {
	std::vector<std::string> elems;
	splitA(s, delim, std::back_inserter(elems));
	return elems;
}

ParseurPolygone::ParseurPolygone(ParseurForme *s)
	:ParseurForme(s)
{
}

ParseurPolygone::~ParseurPolygone()
{
}

Forme * ParseurPolygone::resoudre1(const string & d) const
{

	int indicePolygone = d.find("Polygone", 0);

	if (indicePolygone == std::string::npos)
		return NULL;
	else {	
		const char * chaine = d.c_str();
		// récupération de la couleur
		int couleur;
		sscanf_s(chaine, "Polygone couleur %d", &couleur);

		int indiceAccolladeO = d.find("{");

		int indiceAccolladeF = d.find("}");

		string ligne = d.substr(indiceAccolladeO + 1,indiceAccolladeF-indiceAccolladeO-1);

		vector<Vecteur2D> v;
		vector<string> res = split1(ligne, ';');
		for (unsigned int i = 0; i < res.size(); i++)
		{
			v.push_back(Vecteur2D(res[i].c_str()));
		}
		
	

		return new Polygone(couleur, v);
	}
}

