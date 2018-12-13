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
	Polygone(int couleur, const Vecteur2D & p1, const Vecteur2D & p2, const Vecteur2D & p3);
public:

	Polygone(int couleur, const vector<Vecteur2D> & v);
	Polygone(const Polygone & s);
	Forme* Clone() const;

	virtual ~Polygone();

	const vector<Vecteur2D>& getPoints()const;
	const Vecteur2D & operator[](int index)const;
	virtual void addPoint(const Vecteur2D & p);
	virtual void supPoint(int index);
	virtual void supPoint(const Vecteur2D & p);

	//bool operator==(const Polygone &s)const;
	//bool operator!=(const Polygone & s)const { return !(*this == s); };
	const Polygone & operator=(const Polygone & s);

	virtual double calculeAir() const;
	virtual operator string()const;
	Forme* transforme(const Transformation & t)const;


};

