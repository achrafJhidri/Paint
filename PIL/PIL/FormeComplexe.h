/**
*\file formeComplexe.h
*\author JHIDRI MOKHTARI
*/
#pragma once
#include "Forme.h"
#include <vector>
class Transformation;
class FormeComplexe :
	public Forme
{
	vector<Forme *> formes;
public:
	/**
	* Constructeur de FormeComplexe vide
	*/
	FormeComplexe();
	/**
	* Constructeur par copie de FormeComplexe
	*\param f la FormeComplexe à recopié
	*/
	FormeComplexe(const FormeComplexe & f);
	/**
	* Destructeur
	*/
	~FormeComplexe();
	/**
	* Clone la FormeComplexe
	*\return Forme * une nouvelle FormeComplexe identique
	*/
	Forme * Clone()const;
	/**
	* les Formes qui compose  la FormeComplexe
	*\return const vector<Forme*>& : le tableau des Formes qui compose la FormeComplexe
	*/
	const vector<Forme *>& getFormes()const;
	/**
	* ajoute une nouvelle Forme au tableau des formes de la FormeComplexe, si celle-ci n y est pas déjà
	*\param f : la forme à ajouter à la formeComplexe
	*/
	FormeComplexe & addForme(const Forme & f);
	/**
	* supprime la forme f du tableau des formes de la  FormeComplexe, si celle là est déjà dans le tableau biensur
	*\param f : la forme à supprimer de la formeComplexe
	*/
	const FormeComplexe & supForme(const Forme & f);
	/**
	* supprime la ieme forme   du tableau des formes de la  FormeComplexe
	*\param i : l'indice de la forme à supprimer de la formeComplexe
	*\throw Erreur : si i < 0 ou >= a la taille du tableau de formes
	*/
	const FormeComplexe & supForme(const unsigned int i);
	/**
	* verifie si la forme f est déjà dans le tableau ou pas  
	*\param f : la forme concerné
	*\return vector<Forme*>::const_iterator : iterator constant sur la forme recherché ou la fin du tableau des formes
	*/
	vector<Forme*>::const_iterator  contient(const Forme * f )const;

	/**
	* affecte le FormeComplexe f au FormeComplexe appelant
	*\param f : le FormeComplexe a recopié
	*\return FormeComplexe : le FormeComplexe après affecation
	*/
	const FormeComplexe & operator = (const FormeComplexe & f);

	/**
	* calcule l'air de la formeComplexe
	*\return double
	*/
	 double calculeAir() const;

	 /**
	* cast la formeComplexe en String
	*/
	 operator string()const;

	 Forme* transforme(const Transformation & t)const;
	 /**
	* renvoi la formeComplexe en format String
	*/
	 string print() const;


};

