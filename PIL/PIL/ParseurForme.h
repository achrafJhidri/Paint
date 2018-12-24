#pragma once
#include <vector>
#include "Fraction.h"
#include "Parseur.h"
class ParseurForme : public ParseurExpert
{
protected:
	ParseurForme * suivant;
public:
	ParseurForme(ParseurForme *s);
	virtual ~ParseurForme();

	/**en cas d'echec renvoi Null

	*/
	Forme*  resoudre(const string & text) const;
	virtual Forme* resoudre1(const string& d) const = 0;

};

