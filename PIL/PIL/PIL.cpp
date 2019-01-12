#include "pch.h"
#include <iostream>

#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h> 

#include "Vecteur2D.h"
#include "Forme.h"
#include "Segment.h"
#include "Polygone.h"
#include "Triangle.h"
#include "Cercle.h"
#include "FormeComplexe.h"


#include "Translation.h"
#include "Rotation.h"
#include "Homotetie.h"

#include "ChargeurListeForme.h"
#include "ParseurCercle.h"
#include "ParseurTriangle.h"
#include "ParseurSegment.h"
#include "ParseurPolygone.h"
#include "ParseurFormeComplexe.h"

#include "MaSocket.h"

#include "DessinateurJava.h"
#include "Sauveur.h"
#include "SauveurFichier.h"


using namespace std;
void initialisationWSA();

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// test du Save
	//SauveurFichier sauveur =  SauveurFichier("test.txt");
	//FormeComplexe f;
	//Cercle c(200, Vecteur2D(1, 1), 10);
	//Segment s(400, Vecteur2D(1, 1), Vecteur2D(2, 2));
	//Polygone p(Triangle(201, Vecteur2D(4, -32), Vecteur2D(389, -3.2), Vecteur2D(63, -1)));
	//f.addForme(p);
	//
	//f.save(sauveur);






	string ipAddress = "127.0.0.1";
	int port = 9111;
	// Test Communication avec serveur Java
	// initialisation WSA
	initialisationWSA();
	char buf[BUFSIZ];
	//MaSocket  sock;
	//sock.connectTo(ipAddress, port);

	//FormeComplexe f;
	//f.addForme(s).addForme(Triangle(201, Vecteur2D(4, -32), Vecteur2D(389, -3.2), Vecteur2D(63, -1)));
	//sock.envoyer(f);
	//sock.recever(buf);
	//cout << buf << endl;
	//Triangle t = Triangle(4442131, Vecteur2D(4, -32), Vecteur2D(389, -3.2), Vecteur2D(63, -1));
	//t.accepte(DessinateurJava());


	//Cercle c(200, Vecteur2D(1, 1), 10);
	//Forme * cprime = c.transforme(h);
	//cout << "la rotation PI au centre 0.0" << c << "donne " << *cprime << endl;

	//test de la recuperation apartir d'un fichier
	//ChargeurListeForme * chargeur = ChargeurListeForme::getInstance();

	//ParseurForme * p = new ParseurSegment(NULL);
	//  p = new ParseurCercle(p);
	//  p = new ParseurTriangle(p);
	//  p = new ParseurPolygone(p);
	//  p = new ParseurFormeComplexe(p);

	// vector<Forme*> v = chargeur->charge("file.txt", p);
	// for(int i = 0 ; i < v.size() ; i++)
	//	cout << *v[i] << endl;

	// cout << v.size() << endl;


	 //DessinateurJava dessinateur;
	 //for (int i = 0; i < v.size(); i++)
		// v[i]->accepte(dessinateur);
	
	 //delete p;
	 //delete chargeur;



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
void initialisationWSA() {
	WSADATA WSAData;
	WORD version = MAKEWORD(2, 0);
	int wsResult = WSAStartup(version, &WSAData);
	if (wsResult) // 0 no erreur else erreur
	{
		cerr << "can't start winsock, Err #" << wsResult << endl;
		return;
	}
	cout << "initialisation OF WSA succeded" << endl;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

