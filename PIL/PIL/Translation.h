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
	  Vecteur2D visite(const Vecteur2D& f)const ;
};

