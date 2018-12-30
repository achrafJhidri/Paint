#include "Polygone.h"
#include <iterator>
#include <algorithm>
#include "Triangle.h"
#include "Transformation.h"




Polygone::Polygone()
	:FormeSimple()
{
	
}

Polygone::Polygone(int couleur, const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3)
	:FormeSimple(couleur)
{
	points.push_back(p1);
	points.push_back(p2);
	points.push_back(p3);
}



Polygone::Polygone(int couleur, const vector<Vecteur2D>& v)
	:FormeSimple(couleur),points(v)
{
	if (v.size() < 3)
		throw "Polygone c'est minimum 3 points";
}

Polygone::Polygone(const Polygone & s)
	:FormeSimple(s.couleur),points(s.points)
{
	

}

Forme * Polygone::Clone() const
{
	return new Polygone(*this);
}

Polygone::~Polygone()
{
}

const vector<Vecteur2D> &Polygone::getPoints() const
{
	return points;
}

const Vecteur2D & Polygone::operator[](int index) const
{
	return points[index];
}

void Polygone::addPoint(const Vecteur2D & p)
{
	if (typeid(*this) == typeid(Triangle))
		throw "vous ne pouvez pas ajouter de point a un triangle";
	points.push_back(p);
}

void Polygone::supPoint(int index)
{
	if (typeid(*this) == typeid(Triangle))
		throw "vous ne pouvez pas ajouter de point a un triangle";
	if (index < 0 || index >= points.size())
		throw 44;
	points.erase(points.begin()+index);
}

void Polygone::supPoint(const Vecteur2D & p)
{
	if (typeid(*this) == typeid(Triangle))
		throw "vous ne pouvez pas ajouter de point a un triangle";

	vector<Vecteur2D>::iterator it = find(points.begin(), points.end(), p) ;

	if (it != points.end())
		points.erase(it);
	else
		throw "j'ai pas r�ussi a trouve ton objet p dans mon vecteur lors de la suppression ";
}



const Polygone & Polygone::operator=(const Polygone & s)
{
     points=s.points;
	 return *this;
}

double Polygone::calculeAir() const
{
	double air ;
	int i;
	for ( i = 2 , air = 0; i < points.size(); i++)
		air += Triangle(couleur,points[0], points[i - 1], points[i]).calculeAir();

	return air;
}

Polygone::operator string() const
{
	ostringstream os;
	os << FormeSimple::operator string() + " de type polygone [";

	for (int i = 0; i < points.size()-1 ; i++)
		os << " p" << i << " " << points[i] << ",";
	os << " p" << points.size()-1 << " " << points[points.size()-1] << "]";

	return os.str();
}


Forme * Polygone::transforme(const Transformation & t) const
{
	return t.visite(*this);
}

