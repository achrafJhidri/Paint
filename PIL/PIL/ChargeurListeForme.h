
/**
*\file ChargeurListeForme.h
*\author JHIDRI MOKHTARI
*\brief class singleton qui parcour un fichier et parse chaque ligne pour renvoyer un vector de formes
*\
*/


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
	static vector<Forme *> charge(const string filename, const ParseurForme *p);

};

