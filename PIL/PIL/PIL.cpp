// PIL.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>

#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h> 



#include "Vecteur2D.h"
#include "Segment.h"
#include "Polygone.h"
#include "Triangle.h"
#include "Cercle.h"
#include "FormeComplexe.h"
#include "Translation.h"
#include "Rotation.h"
#include "Homotetie.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// TEST Homotetie!
	//Homotetie h = Homotetie(Vecteur2D(0,0), 2);

	//Vecteur2D a(-1, -1);
	//Vecteur2D aprime = a.transforme(h);
	//cout << "la Rotaation de a " << a << "donne " << aprime << endl;

	/*Cercle c(200, Vecteur2D(1, 1), 10);*/
	//Forme * cprime = c.transforme(h);
	//cout << "la rotation PI au centre 0.0" << c << "donne " << *cprime << endl;

	//Triangle tri(120, Vecteur2D(1, 1), Vecteur2D(3, 3), Vecteur2D(3, 1));
	//Forme * triangleprime = tri.transforme(h);

	//cout << "la translation de a avec 2,2" << tri << "donne " << *triangleprime << endl;
	
	//Segment s(400,Vecteur2D(1, 1), Vecteur2D(2, 2));
	//Forme * sprime = s.transforme(h);
	//cout << "la translation de a avec 2,2" << s << "donne " << *sprime << endl;


	//Polygone p(tri);
	//p.addPoint(Vecteur2D(4, 4));
	//Forme * pprime = p.transforme(h);
	//cout << "la translation de a avec 2,2" << p <<  endl << "donne " << *pprime << endl;

	//FormeComplexe f;
	//f.addForme(c).addForme(tri);
	//Forme * fprime = f.transforme(h);
	//cout << "la translation de a avec 2,2" << f << endl;
	//cout << "donne " << *fprime << endl;

	/**************************************************************************************/

	// Test Rotation
	/*Rotation r = Rotation(-1, Vecteur2D(0, 0));*/
	//cout << r << endl;
	//Vecteur2D a(1, 0);
	//Vecteur2D aprime = a.transforme(r);
	//cout << "la Rotaation de a " << a << "donne " << aprime << endl;

	//Cercle c(200, Vecteur2D(1, 1), 10);
	//Forme * cprime = c.transforme(r);
	//cout << "la rotation PI au centre 0.0" << c << "donne " << *cprime << endl;

	//Triangle tri(120, Vecteur2D(1, 1), Vecteur2D(3, 3), Vecteur2D(2, 2));
	/*Forme * triangleprime = tri.transforme(r);
	cout << "la translation de a avec 2,2" << tri << "donne " << *triangleprime << endl;
*/
	//Segment s(400,Vecteur2D(1, 1), Vecteur2D(2, 2));
	//Forme * sprime = s.transforme(r);
	//cout << "la translation de a avec 2,2" << s << "donne " << *sprime << endl;


	//Polygone p(tri);
	//p.addPoint(Vecteur2D(4, 4));
	//Forme * pprime = p.transforme(r);
	//cout << "la translation de a avec 2,2" << p << "donne " << *pprime << endl;

	//FormeComplexe f;
	//
	//f.addForme(c).addForme(tri);


	//Forme * fprime = f.transforme(r);
	//cout << "la translation de a avec 2,2" << f << endl;
	//cout << "donne " << *fprime << endl;


	/************************************************************************************/



	/*Teste des translation

	//Translation t = Translation(Vecteur2D(1, 1));



	//Cercle c(200, Vecteur2D(1, 1), 10);
	//Forme * cprime = c.transforme(t);
	//cout << "la translation de a avec 2,2" << c << "donne " << *cprime << endl;

	//Triangle tri(120, Vecteur2D(1, 1), Vecteur2D(3, 3), Vecteur2D(2, 2));
	//Forme * triangleprime = tri.transforme(t);
	//cout << "la translation de a avec 2,2" << tri << "donne " << *triangleprime << endl;

	//Segment s(400,Vecteur2D(1, 1), Vecteur2D(2, 2));
	//Forme * sprime = s.transforme(t);
	//cout << "la translation de a avec 2,2" << s << "donne " << *sprime << endl;


	//Polygone p(tri);
	//p.addPoint(Vecteur2D(4, 4));
	//Forme * pprime = p.transforme(t);
	//cout << "la translation de a avec 2,2" << p << "donne " << *pprime << endl;

	//FormeComplexe f;
	//
	//f.addForme(c).addForme(s);


	//Forme * fprime = f.transforme(t);
	//cout << "la translation de a avec 2,2" << f << endl;
	//cout << "donne " << *fprime << endl;


	*/

	
	


	






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
