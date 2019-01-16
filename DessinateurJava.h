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
*crée un socket connecté à l'addresse IP & port donnée en paramètre
*\param ip Adresse Ip du serveur Dessinateur 
*\param port port d'écoute du serveur Dessinateur
*/

	DessinateurJava(const string & ip,const int port);
	virtual ~DessinateurJava();
/**
*Constructeur
*crée un socket connecté à l'addresse IP & port donnée en paramètre
*\param f la forme a dessiner
*/
	void visite(const Forme& f)const ;
	operator string() const;
};

