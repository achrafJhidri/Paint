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
	/**
	*une formecomplexe et composée d'une ou plusieurs formes disjointes
	*/
	vector<Forme *> formes;
public:
	FormeComplexe();
	FormeComplexe(const FormeComplexe & f);

	~FormeComplexe();

	Forme * Clone()const;

	const vector<Forme *>& getFormes()const;
/**
 *ajouter des formes 
 * \param f la forme à ajouter  
 *\return une FormeComplexe 
*/
	FormeComplexe & addForme(const Forme & f);
/**
 *supprime une forme 
 * \param f la forme  à supprimer  
 *\return une FormeComplexe 
  *\throw Exception  si la forme  cherché n'est pas  trouvé
*/
 
	const FormeComplexe & supForme(const Forme & f);
/**
 *supprime une forme à partir de son indice
 * \param i l'indice de la forme à supprimer  
 *\return une FormeComplexe 
 * \throw Exception  si l'indice  cherché n'est pas dans le tableau formes 
*/
	const FormeComplexe & supForme(const unsigned int i);

	vector<Forme*>::const_iterator  contient(const Forme *)const;

	const FormeComplexe & operator = (const FormeComplexe & f);

		
	 double calculeAir() const;


	 operator string()const;

	 Forme* transforme(const Transformation & t)const;

	 string print() const;


};

