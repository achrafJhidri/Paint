#include "Dessinateur.h"

Dessinateur::~Dessinateur()
{
	cout << "destruction du dessinateur" << endl;
}

Dessinateur::operator string() const
{
	ostringstream os;
	os << "Dessinateur de forme g�omtrique avec la librairie ";
	return os.str();
 }
