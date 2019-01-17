
/**
*\file ChargeurListeForme.h
*\author JHIDRI MOKHTARI
*\brief class singleton qui parcour un fichier et parse chaque ligne pour renvoyer un vector de formes
*/


#pragma once
#include <string>
#include <vector>
#include "Forme.h"
#include "ParseurForme.h"

using namespace std;
class ChargeurListeForme
{
	/**
	*\brief Constructeur de ChargeurListeForme 
	*/
	ChargeurListeForme();
public:
	/**
	*\brief renvoi un pointeur sur le chargeurListeForme créer si il a déjà été instancier sinon renvoi un nouveau
	*\return static ChargeurListeForme * un nouveau ChargeurListeForme
	*/
	static ChargeurListeForme* getInstance();

	/**
	*\brief ce chargeur parcour un 'fichier' grace a un 'Parseur' et retourne un vector de Forme*
	*\param filename : le nom du fichier 
	*\param parseur : le parseur de forme
	*\return static vector<Forme *> 
	*/
	static vector<Forme *> charge(const string filename, const ParseurForme *p);

};

