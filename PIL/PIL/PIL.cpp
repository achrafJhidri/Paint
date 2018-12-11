// PIL.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "Vecteur2D.h"
#include "Segment.h"
#include "Polygone.h"
#include "Triangle.h"
#include "Cercle.h"
#include "FormeComplexe.h"
int main()
{

	Cercle c(200, Vecteur2D(1, 1), 10);
	Triangle t(120, Vecteur2D(1, 1), Vecteur2D(3, 3), Vecteur2D(2, 2));
	Segment s;

	
	FormeComplexe f ;
	FormeComplexe f2;
	f.addForme(c).addForme(t);
	vector <Forme*> v = f.getFormes();

	for (int i = 0; i < v.size(); i++)
		cout << *v[i] << endl;
	
	f.supForme(s);

	f2 = f;

	cout << f << endl;
	






	system("pause");
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
