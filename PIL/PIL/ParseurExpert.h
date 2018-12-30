#pragma once
#include <string>
#include "Forme.h"

class ParseurExpert
{
public:

	virtual Forme*  resoudre(const string& c) const = 0;
};
