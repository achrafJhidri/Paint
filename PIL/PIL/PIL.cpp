
#pragma region FichierPrecompileEtIO
#include "pch.h"
#include <iostream>
#pragma endregion FichierPrecompileEtIO

#pragma region GestionMemoire 
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h> 
#pragma endregion GestionMemoire 

#pragma region Forme 
#include "Vecteur2D.h"
#include "Forme.h"
#include "Segment.h"
#include "Polygone.h"
#include "Triangle.h"
#include "Cercle.h"
#include "FormeComplexe.h"
#pragma endregion Forme 

#pragma region Transformation 
#include "Translation.h"
#include "Rotation.h"
#include "Homotetie.h"
#pragma endregion Transformation 

#pragma region Parseurs 
#include "ParseurCercle.h"
#include "ParseurTriangle.h"
#include "ParseurSegment.h"
#include "ParseurPolygone.h"
#include "ParseurFormeComplexe.h"
#pragma endregion Parseurs 

#pragma region Dessinateur&Socket 
#include "MaSocket.h"
#include "DessinateurJava.h"
#pragma endregion Dessinateur&Socket  

#pragma region Chargeur&Sauveur 
#include "ChargeurListeForme.h"
#include "SauveurFichier.h"
#pragma endregion Chargeur&Sauveur 


using namespace std;
void initialisationWSA();

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	/* test du Save*/
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



	FormeComplexe f;
	Segment s(211191123, Vecteur2D(1, 1), Vecteur2D(70, 80));
	f.addForme(s).addForme(Triangle(2033211, Vecteur2D(4, -32), Vecteur2D(40, -3.2), Vecteur2D(63, -1)));


	Triangle t = Triangle(4442131, Vecteur2D(4, -32), Vecteur2D(200, -3.2), Vecteur2D(63, -1));




	DessinateurJava dessinateur(ipAddress,port);
	//
	//f.accepte(dessinateur);
	//t.accepte(dessinateur);
	Homotetie h = Homotetie(Vecteur2D(0,0), 4);
	//Forme* fprime = f.transforme(h);
	//fprime->accepte(dessinateur);
	
	Cercle c(200, Vecteur2D(1, 1), 103.21);
	f.addForme(c);

	f.accepte(dessinateur);
	/*c.accepte(dessinateur);

	Forme * cprime = c.transforme(h);
	cprime->accepte(dessinateur);
*/


	//ChargeurListeForme * chargeur = ChargeurListeForme::getInstance();

	//ParseurForme * parseur = new ParseurSegment(NULL);
	//parseur = new ParseurCercle(parseur);
	//parseur = new ParseurTriangle(parseur);
	//parseur = new ParseurPolygone(parseur);
	//parseur = new ParseurFormeComplexe(parseur);

	// vector<Forme*> v = chargeur->charge("file.txt", parseur);

	// FormeComplexe f2;
	// for (unsigned int i = 0; i < v.size(); i++)
	// {
	//	 (*v[i]).accepte(dessinateur);

	// }
	//	
 
		 

	// cout << v.size() << endl;

	//Segment s(211191123, Vecteur2D(1, 1), Vecteur2D(221, 211));
	//Cercle c(200, Vecteur2D(10, 10), 40.21);
	//Triangle t = Triangle(80000032, Vecteur2D(4, -32), Vecteur2D(200, -3.2), Vecteur2D(63, -1));
	//Triangle t = Triangle(4442131, Vecteur2D(4, -32), Vecteur2D(200, -3.2), Vecteur2D(63, -1));
	//Polygone p(t);
	//p.addPoint(Vecteur2D(4, 50));
	//p.addPoint(Vecteur2D(21, -4.11));
	//p.addPoint(Vecteur2D(21, 44.11));
	//p.addPoint(Vecteur2D(55, 0.11));

	
	//f.addForme(c).addForme(t).addForme(s);



	 
	
	//c.accepte(dessinateur);
	// t.accepte(dessinateur);
	// p.accepte(dessinateur);
	//f.accepte(dessinateur);
	//s.accepte(dessinateur);
	 //for (int i = 0; i < v.size(); i++)
		// v[i]->accepte(dessinateur);
	
	// delete p;
	/* delete chargeur;*/
	 /*delete parseur;*/

	

	// TEST Homotetie!
	//Homotetie h = Homotetie(Vecteur2D(0,0), 2);
	//Forme* sprime = p.transforme(h);
	//sprime->accepte(dessinateur);
	//Homotetie h2 = Homotetie(Vecteur2D(0, 0), 0.5);
	//Forme* sprime2 = p.transforme(h2);
	//sprime2->accepte(dessinateur);

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
	//Rotation r = Rotation(-1, Vecteur2D(5, 5));
	//Forme* sprime = p.transforme(r);
	//sprime->accepte(dessinateur);
	


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
	//Rotation r = Rotation(-1, Vecteur2D(0, 0));
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

