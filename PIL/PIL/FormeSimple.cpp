#include "FormeSimple.h"



FormeSimple::FormeSimple()
	:Forme()
{
}

FormeSimple::FormeSimple(int couleur)
	:Forme(couleur)
{
}

FormeSimple::FormeSimple(const FormeSimple & f)
	:Forme(f)
{
}


FormeSimple::~FormeSimple()
{
}

FormeSimple::operator string() const
{
	ostringstream os;
	os << "FormeSimple [" << Forme::operator string() << "]";

	return os.str();
}
