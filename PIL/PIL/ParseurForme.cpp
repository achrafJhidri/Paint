#include "ParseurForme.h"

#include "Erreur.h"


ParseurForme::ParseurForme(ParseurForme * s)
{
	suivant = s;
}

ParseurForme::~ParseurForme()
{
	delete suivant; // c'est d�j� r�cursif
}


Forme* ParseurForme::resoudre(const string& c) const
{
	Forme *s = this->resoudre1(c);        // cet expert tente de r�soudre le
									//  probl�me

	if (s != NULL) 			// cet expert a trouv� une solution 
		return s;

	else            			// �chec de cet expert

		if (this->suivant != NULL)  		// le probl�me est transmis �   
											// l�expert suivant
			return this->suivant->resoudre(c);
		else    // cet expert est le dernier de la cha�ne
			return NULL;// donc �chec de la cha�ne

}
