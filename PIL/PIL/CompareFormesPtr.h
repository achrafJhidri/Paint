#pragma once
#include "Forme.h"
class CompareFormesPtr
{
	Forme * original;
public:
	CompareFormesPtr(const Forme * f)
	{
		original = const_cast <Forme *> (f);
	}
	~CompareFormesPtr() {};
	bool operator()(const Forme * f)const {
		return (string(*f)) == (string(*original));			
	}

	
};

