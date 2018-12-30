#pragma once
#include <string>
#include <vector>
#include "Forme.h"
#include "ParseurForme.h"

using namespace std;
class ChargeurListeForme
{
	ChargeurListeForme();
public:
	static ChargeurListeForme* getInstance();
	static	const string getDescription() ;
	static vector<Forme *> charge(const string f, const ParseurForme *p);

};

