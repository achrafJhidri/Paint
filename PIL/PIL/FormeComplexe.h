#pragma once
#include "Forme.h"
#include <vector>
class Transformation;
class FormeComplexe :
	public Forme
{
	vector<Forme *> formes;
public:
	FormeComplexe();
	FormeComplexe(const FormeComplexe & f);
	/*on derivera pas  donc inutile le virtual*/
	~FormeComplexe();

	Forme * Clone()const;

	const vector<Forme *>& getFormes()const;
	FormeComplexe & addForme(const Forme & f);
	const FormeComplexe & supForme(const Forme & f);
	const FormeComplexe & supForme(const int i);

	vector<Forme*>::const_iterator  contient(const Forme *)const;

	const FormeComplexe & operator = (const FormeComplexe & f);

		
	 double calculeAir() const;


	 operator string()const;

	 Forme* transforme(const Transformation & t)const;



};

