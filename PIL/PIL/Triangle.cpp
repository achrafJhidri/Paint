#include "Triangle.h"
#include "Transformation.h"





Triangle::Triangle(int couleur, const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3)
	: Polygone(couleur,p1,p2,p3)
{

}

Triangle::Triangle(const Triangle & t)
	:Polygone(t)
{

}

Forme * Triangle::Clone() const
{
	return new Triangle(*this);
}

Triangle::~Triangle()
{
}

double Triangle::calculeAir() const
{
	return abs(Vecteur2D::det(points[0], points[1], points[2])) / 2;
}

const Triangle * Triangle::operator=(const Triangle & s)
{
	couleur = s.couleur;
	points = s.points;
	return this;
}

Triangle::operator string() const
{
	ostringstream os;
	os << FormeSimple::operator string() + " de type Triangle [points : ";

	for (int i = 0; i < points.size() -1 ; i++)
		os << "p" << i << points[i] << ",";

	os << "p" << points.size() - 1 <<  points[points.size() - 1] << "]";


	return os.str();
}

Forme * Triangle::transforme(const Transformation & t) const
{
	return t.visite(*this);
}


