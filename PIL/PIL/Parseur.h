#pragma once
#include <string>
#include "Forme.h"

class Expert
{
public:

	virtual Forme*  resoudre(const string& c) const = 0;
};

