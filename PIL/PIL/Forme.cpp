#include "Forme.h"
#include <fstream>
#include <exception>


Forme::Forme()
	: couleur(255)
{
}

Forme::Forme(int c)
	:couleur(c)
{
}

Forme::Forme(const Forme & f)
	:couleur(f.couleur)
{
	
}

Forme::operator string() const
{
	ostringstream os;
	os << "Couleur : " << couleur ;
	return os.str();
}

vector<Forme*> Forme::chargeAll(const string &filename )
{

	vector<Forme *> vecteurForme;
	ifstream myfile;
	myfile.open(filename, std::fstream::in);
	if (myfile.is_open()) {
		string  s;


		while (getline(myfile, s)) {

			Forme * f = NULL;

			try {
				//f = Parseur.resoudre(s);
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
		throw "File not Found";

	return vecteurForme;
}

Forme * Forme::charge(int i, const string &filename )
{
	return nullptr;
}




Forme::~Forme()
{
}

int Forme::getCouleur() const
{
	return couleur;
}

void Forme::setCouleur(const int c) 
{

	couleur = c;
}

ostream & operator<<(ostream & f, const Forme & o)
{
	f<<(string)o;
	return f;
}
