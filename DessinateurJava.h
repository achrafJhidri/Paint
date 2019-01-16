/**
*\file DessinateurJava.h
*\author JHIDRI MOKHTARI
*\brief Class Abstraite qui prend une forme et la dessine avec Java
*/

#pragma once
#include "Dessinateur.h"
#include "MaSocket.h"
class DessinateurJava :
	public Dessinateur
{
	MaSocket sock;
public:
/**
*Constructeur
*cr�e un socket connect� � l'addresse IP & port donn�e en param�tre
*\param ip Adresse Ip du serveur Dessinateur 
*\param port port d'�coute du serveur Dessinateur
*/

	DessinateurJava(const string & ip,const int port);
	virtual ~DessinateurJava();
/**
*Constructeur
*cr�e un socket connect� � l'addresse IP & port donn�e en param�tre
*\param f la forme a dessiner
*/
	void visite(const Forme& f)const ;
	operator string() const;
};

