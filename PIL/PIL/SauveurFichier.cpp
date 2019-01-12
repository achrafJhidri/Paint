#include "SauveurFichier.h"
#include <fstream>


using namespace std;
SauveurFichier::SauveurFichier(const string & f):Sauveur(f)
{
}

SauveurFichier::~SauveurFichier()
{
}

void SauveurFichier::visite(const Forme & f) const
{


	ofstream fichier(nomFichier, ios::out | ios::app);


	if (fichier) {
		fichier << f.print() << endl;
		fichier.close();
	}
	else
	{
		throw "impossible d'ouvrir le fichier ";
	}


}
