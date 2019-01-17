/**
*\file Vecteur2D.h
*\author MICHEL
*\brief Vecteur2D est un point2D (double x , double y)
*/
#pragma once
#include<string>
#include <sstream>

class Transformation;

#define M_PI (3.14159265358979323846)
using namespace std;


template <class T>
inline const T operator - (const T & u, const T & v) {
	return u + -v;
}

class Vecteur2D
{
public:
	double x, y;
	 Vecteur2D(const double & x = 0, const double & y = 0);
	 Vecteur2D(const Vecteur2D & v);
	 Vecteur2D(const char* s);
	virtual ~Vecteur2D();
	/**
	*DONNEES:s respectant le format "(nombre réel ,nombre réel)"
	**/
	
	 const Vecteur2D operator +(const Vecteur2D & u)const;
	 const Vecteur2D operator*(const double & a)const {
		 return Vecteur2D(x*a, y*a);
	 }

	 
	 const Vecteur2D operator -()const;
	 double operator * (const Vecteur2D & b)const {
		 return x * b.x + y * b.y;
	 }

	 bool operator==(const Vecteur2D & v)const ;
	 bool operator!=(const Vecteur2D & v)const { return !(*this == v); };

	operator string()const;

	friend	ostream & operator <<(ostream & os, const Vecteur2D &u);
	
	static double det(const Vecteur2D & a, const Vecteur2D & b, const Vecteur2D & c);

	Vecteur2D transforme(const Transformation & f) const;
;
	
};

inline const Vecteur2D Vecteur2D::operator+(const Vecteur2D &u)const
{
	return Vecteur2D(x + u.x, y + u.y);
}