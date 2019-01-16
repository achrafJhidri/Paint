/**
*\file ChargeurListeForme.h
*\author JHIDRI MOKHTARI
*/
#include "ChargeurListeForme.h"
#include <fstream>
static   ChargeurListeForme * chargeur = ChargeurListeForme::getInstance();

ChargeurListeForme * ChargeurListeForme::getInstance()
{
	return chargeur;
}

const string ChargeurListeForme::getDescription() 
{
	return "ce chargeur parcour un 'fichier' grace a un 'Parseur' et retourne un vector the Forme";

}

vector<Forme*> ChargeurListeForme::charge(const string filename, const ParseurForme * p)
{

	vector<Forme *> vecteurForme;
	ifstream myfile;
	myfile.open(filename, std::fstream::in);
	if (myfile.is_open()) {
		string  s;


		while (getline(myfile, s)) {

			Forme * f = NULL;

			try {
				f = p->resoudre(s);
			}
			catch (exception e) {
				cout << e.what();
			}
			if (f != NULL)
			{
				vecteurForme.push_back(f);

			}
		}
	}
	else
		throw Erreur ("Fichier non trouvé ");

	return vecteurForme;
}
