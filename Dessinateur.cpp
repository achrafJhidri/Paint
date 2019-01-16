/**
*\file Dessinateur.h
*\author JHIDRI MOKHTARI
*\brief Class Abstraite qui prend une forme et la dessine
*/

#include "Dessinateur.h"

Dessinateur::~Dessinateur()
{
	cout << "destruction du dessinateur" << endl;
}

Dessinateur::operator string() const
{
	ostringstream os;
	os << "Dessinateur de forme géomtrique avec la librairie ";
	return os.str();
 }
