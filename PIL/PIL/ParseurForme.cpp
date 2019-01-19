#include "ParseurForme.h"


ParseurForme::ParseurForme(ParseurForme * s)
	: suivant(s)
{
}

ParseurForme::~ParseurForme()
{
	delete suivant;
}

Forme * ParseurForme::resoudre(const string & c) const
{
	Forme *f = this->resoudre1(c);        // cet expert tente de r�soudre le
										  //  probl�me
	if (f != NULL) 			// cet expert a trouv� une solution 
		return f;
	else            			// �chec de cet expert
		if (this->suivant != NULL)  		// le probl�me est transmis �   
											// l�expert suivant
			return this->suivant->resoudre(c);
		else    // cet expert est le dernier de la cha�ne
			return NULL;// donc �chec de la cha�ne
}


vector <string> ParseurForme::split(string chaine, char delim) {
	vector<string> tab;
	istringstream f(chaine.c_str());
	string s;
	while (getline(f, s, delim)) {
		tab.push_back(s);
	}
	return tab;
}