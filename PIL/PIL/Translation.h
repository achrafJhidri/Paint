#pragma once
#include "Transformation.h"
#include "Vecteur2D.h"
class Translation :
	public Transformation
{
	Vecteur2D u;

public:

	Translation( const Vecteur2D & f);

	~Translation();


	const Vecteur2D & getU()const;

	
	
	 operator string()const;





	  Forme* visite(const Polygone & p)const ;
	  Forme* visite(const Segment & s)const ;
	  Forme* visite(const Cercle & c)const ;
	  Forme* visite(const FormeComplexe& f)const ;
	  Vecteur2D visite(const Vecteur2D& f)const ;
};

