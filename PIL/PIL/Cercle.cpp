#include "Cercle.h"
#include "Transformation.h"


Cercle::Cercle()
	:FormeSimple(), centre(0, 0), rayon(0)
{

}

Cercle::Cercle(int couleur,const Vecteur2D& c, double r)
	: FormeSimple(couleur), centre(c), rayon(r)
{

}



Cercle::Cercle(const Cercle &c)
	:FormeSimple(c.couleur), centre(c.centre), rayon(c.rayon)
{

}
Forme* Cercle::Clone() const
{
	return new Cercle(*this);

}

//destrcture
Cercle::~Cercle() {

}
//getters setters
const Vecteur2D& Cercle::getCentre()const
{
	return centre;
}




void Cercle::setCentre(const Vecteur2D &c) {

	centre = c;
}

double Cercle::getRayon()const {
	return rayon;
}
void Cercle::setRayon(const double r)
{
	rayon = r;
}


double Cercle::calculeAir()const
{
	return  M_PI * rayon*rayon;
}
Cercle::operator string() const {
	ostringstream os;
	os << FormeSimple::operator string() << "de type  Cercle[ centre " << centre << " ,rayan " << rayon << "]";
	return os.str();

}

const Cercle & Cercle:: operator= (const Cercle &c)
{
	rayon = c.rayon;
	centre = c.centre;
	couleur = c.couleur;
	return *this;
}

Forme * Cercle::transforme(const Transformation & t) const
{
	return t.visite(*this);
}



