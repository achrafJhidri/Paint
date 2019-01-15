#pragma once
#include "FormeSimple.h"
#include <vector>
class Transformation;
class Polygone :
	public FormeSimple
{
protected :
	vector<Vecteur2D> points;
	Polygone();
	Polygone(unsigned int couleur, const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3);
public:

	Polygone(unsigned int couleur, const vector<Vecteur2D> & v);
	Polygone(const Polygone & s);
	Forme* Clone() const;

	virtual ~Polygone();

	const vector<Vecteur2D>& getPoints()const;
	const Vecteur2D & operator[](unsigned int index)const;
	virtual void addPoint(const Vecteur2D & p);
	virtual void supPoint(unsigned int index);
	virtual void supPoint(const Vecteur2D & p);


	const Polygone & operator=(const Polygone & s);

	virtual double calculeAir() const;
	virtual operator string()const;
	Forme* transforme(const Transformation & t)const;


	string print() const;

};

