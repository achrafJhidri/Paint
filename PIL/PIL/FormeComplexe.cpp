#include "FormeComplexe.h"
#include <algorithm>
#include "CompareFormesPtr.h"
#include "Transformation.h"

using namespace std;

FormeComplexe::FormeComplexe()
	:Forme()
{
}

FormeComplexe::FormeComplexe(const FormeComplexe & f)
 : Forme(f.couleur)
{
	vector<Forme*>::const_iterator it;
	
	for (it = f.formes.begin(); it != f.formes.end(); it++)
		formes.push_back((*it)->Clone());
}


FormeComplexe::~FormeComplexe()
{
	
	int i;
	for (i=0; i < formes.size(); i++)
	{
		delete formes[i];
	}

	formes.clear();



}

Forme * FormeComplexe::Clone() const
{
	return new FormeComplexe(*this);
}

const vector<Forme*>& FormeComplexe::getFormes() const
{
	return formes;
}


FormeComplexe & FormeComplexe::addForme(const Forme & f)
{

	vector<Forme *>::const_iterator it = contient(&f);
	if (it == formes.end())
	{
		if (formes.size() == 0)
			setCouleur(f.getCouleur());
		Forme * f2 = f.Clone();
		formes.push_back(f2);
	}
	return *this;
}


vector<Forme*>::const_iterator FormeComplexe::contient(const Forme * f) const
{
	return find_if(formes.begin(), formes.end(), CompareFormesPtr(f));
}

const FormeComplexe & FormeComplexe::supForme(const Forme & f)
{
	vector<Forme *>::const_iterator it = contient(&f);
	if (it != formes.end())
	{
		delete *it;
		formes.erase(it);
	}

	return *this;
}

const FormeComplexe & FormeComplexe::supForme(const int i)
{
	if (i < 0 || i >= formes.size())
		throw "index hors bornes dans supression dans formecomplexe";

	delete formes[i];
	formes.erase(formes.begin() + i);

	return *this;

}


const FormeComplexe & FormeComplexe::operator=(const FormeComplexe & f)
{
	couleur = f.couleur;
	vector<Forme*>::const_iterator it;

	for (it = f.formes.begin(); it != f.formes.end(); it++)
		formes.push_back((*it)->Clone());
		


	return *this;
}

double FormeComplexe::calculeAir() const
{
	double airTotale=0;
	vector<Forme*>::const_iterator it;
	for (it = formes.begin(); it != formes.end(); it++)
		airTotale += (*it)->calculeAir();

	return airTotale;
}

FormeComplexe::operator string() const
{
	ostringstream os;
	os << "FormeComplexe [" << Forme::operator string() << "] compos� de " << endl << "[" << endl;


	for (int i = 0; i < formes.size(); i++)
		os << "" << i << "-" << *(formes[i]) << endl;

	os << "]";



	return os.str();
}

Forme * FormeComplexe::transforme(const Transformation & t) const
{
	return t.visite(*this);
}

