#include "SauveurTxt.h"
#include <fstream>
#include "Erreur.h"


using namespace std;
SauveurTxt::SauveurTxt(const string & f):Sauveur(f)
{
}

SauveurTxt::~SauveurTxt()
{
}

void SauveurTxt::visite(const Forme & f) const
{


	ofstream fichier(nomFichier, ios::out | ios::app);


	if (fichier) {
		fichier << f.print() << endl;
		fichier.close();
	}
	else
	{
		throw Erreur("impossible d'ouvrir le fichier ");
	}


}
