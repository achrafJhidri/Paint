/**
*\file Erreur.h
*\author JHIDRI MOKHTARI
*/ 

#pragma once
#include <exception>
#include <string>
using namespace std;
class Erreur :
	public exception
{
private:
	string msg;

public:
	Erreur();
	Erreur(const string& m);
	Erreur(const Erreur& e);
	virtual ~Erreur();

	virtual const char*  what() const;


};

