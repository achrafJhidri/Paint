#include "Transformation.h"



Transformation::~Transformation()
{
}

Transformation::operator string() const
{
	ostringstream  os;
	os << "Transformation de type [ ";
	return os.str();
}

ostream & operator<<(ostream & f, const Transformation & t)
{
return	f << string(t);
	
}
