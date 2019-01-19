
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
#include "SauveurTxt.h"
#pragma endregion Chargeur&Sauveur 


using namespace std;
void initialisationWSA();

int main()
{
	string ipAddress = "127.0.0.1";
	int port = 9111;

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	initialisationWSA();
	DessinateurJava dessinateur(ipAddress,port);

	Forme * cPrime;
	Forme * sPrime;
	Forme * pPrime;
	Forme * tPrime;
	Forme * fPrime;

	cout << "*************____Test des Formes____*************" << endl;

	Cercle c(200, Vecteur2D(70, 70), 90.5);
	cout << c << " calcule d'air :"<< c.calculeAir() << endl;
	c.dessine(dessinateur);
	Segment s(400, Vecteur2D(20, 120), Vecteur2D(2, 2));
	cout << s <<   " calcule d'air :" << s.calculeAir() << endl;
	s.dessine(dessinateur);
	Triangle t(201, Vecteur2D(4, -32), Vecteur2D(389, -3.2), Vecteur2D(63, -1));
	cout << t << " calcule d'air :" << t.calculeAir() << endl;
	t.dessine(dessinateur);
	Polygone p(Triangle(201,  Vecteur2D(189, -3.2), Vecteur2D(4, -32), Vecteur2D(63, -1)));
	p.addPoint(Vecteur2D(90, 60));
	cout << p <<  " calcule d'air :" << p.calculeAir() << endl;
	p.dessine(dessinateur);
	FormeComplexe f;
	f.addForme(p).addForme(s).addForme(t).addForme(c);
	cout << f << " calcule d'air :" << f.calculeAir() << endl;
	f.dessine(dessinateur);

	cout << endl << endl <<"*************____Test des Transformations____*************" << endl;

	cout << endl << endl << "*************____Test de Translation____*************" << endl;

	Translation translation = Translation(Vecteur2D(30, 30));

	 cPrime = c.transforme(translation);
	cout << *cPrime << " calcule d'air :" << cPrime->calculeAir() << endl;
	 sPrime = s.transforme(translation);
	cout << *sPrime << " calcule d'air :" << sPrime->calculeAir() << endl;
	 tPrime = t.transforme(translation);
	cout << *tPrime << " calcule d'air :" << tPrime->calculeAir() << endl;
	 pPrime = p.transforme(translation);	
	cout << *pPrime << " calcule d'air :" << pPrime->calculeAir() << endl;
	 fPrime = f.transforme(translation);
	cout << *fPrime << " calcule d'air :" << fPrime->calculeAir() << endl;

	cPrime->dessine(dessinateur);



	/*cout << endl << endl << "*************____Test de Rotation____*************" << endl;

	Rotation rotation = Rotation(1, Vecteur2D(0, 0));

	 cPrime = c.transforme(rotation);
	cout << *cPrime << " calcule d'air :" << cPrime->calculeAir() << endl;
	 sPrime = s.transforme(rotation);
	cout << *sPrime << " calcule d'air :" << sPrime->calculeAir() << endl;
	 tPrime = t.transforme(rotation);
	cout << *tPrime << " calcule d'air :" << tPrime->calculeAir() << endl;
	 pPrime = p.transforme(rotation);
	cout << *pPrime << " calcule d'air :" << pPrime->calculeAir() << endl;
	 fPrime = f.transforme(rotation);
	cout << *fPrime << " calcule d'air :" << fPrime->calculeAir() << endl;*/


	cout << endl << endl << "*************____Test de Homotetie____*************" << endl;

	Homotetie homotetie = Homotetie(Vecteur2D(0,0), 2);

	cPrime = c.transforme(homotetie);
	cout << *cPrime << " calcule d'air :" << cPrime->calculeAir() << endl;
	sPrime = s.transforme(homotetie);
	cout << *sPrime << " calcule d'air :" << sPrime->calculeAir() << endl;
	tPrime = t.transforme(homotetie);
	cout << *tPrime << " calcule d'air :" << tPrime->calculeAir() << endl;
	pPrime = p.transforme(homotetie);
	cout << *pPrime << " calcule d'air :" << pPrime->calculeAir() << endl;
	fPrime = f.transforme(homotetie);
	cout << *fPrime << " calcule d'air :" << fPrime->calculeAir() << endl;






	































































	///* test du Save*/
	//SauveurTxt sauveur =  SauveurTxt("test.txt");
	//FormeComplexe f;
	//Cercle c(200, Vecteur2D(1, 1), 10);
	//Segment s(400, Vecteur2D(1, 1), Vecteur2D(2, 2));
	//Triangle(201, Vecteur2D(4, -32), Vecteur2D(389, -3.2), Vecteur2D(63, -1)
	//Polygone p(Triangle(201, Vecteur2D(4, -32), Vecteur2D(389, -3.2), Vecteur2D(63, -1)));
	//f.addForme(p);
	//f.save(sauveur);







	// Test Communication avec serveur Java
	// initialisation WSA
	//initialisationWSA();
	//DessinateurJava dessinateur(ipAddress,port);


	//FormeComplexe f;
	//Segment s(811191123, Vecteur2D(0,0), Vecteur2D(100,100));
	////f.addForme(s).addForme(Triangle(2033211, Vecteur2D(4, -32), Vecteur2D(40, -3.2), Vecteur2D(63, -1)));


	//Triangle t = Triangle(4442131, Vecteur2D(0, 0), Vecteur2D(200, -90.2), Vecteur2D(63, -1));
	

	//Cercle c(200, Vecteur2D(70, 70), 100);

	
	///*f.addForme(c);*/
	//f.addForme(t).addForme(c);
	//c.dessine(dessinateur);
	///*Homotetie h = Homotetie(Vecteur2D(0,0), 4);*/
	//Rotation r = Rotation(1, Vecteur2D(0, 0));
	////Translation translation = Translation(Vecteur2D(30, 30));
	//////c.accepte(dessinateur);
	//Forme* fprime = c.transforme(r);
	//fprime->dessine(dessinateur);
	//
	//Rotation r = Rotation(0.25, Vecteur2D(0, 0));
	//Forme* cprime = t.transforme(r);
	//cprime->accepte(dessinateur);
	
	

	/*f.accepte(dessinateur);*/
	

	/*Forme * cprime = c.transforme(h);
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

	//	 cout << *v[i] << endl;

	// 
	//	
 
		 

	// cout << v.size() << endl;

	
	//Cercle c(200, Vecteur2D(10, 10), 40.21);
	//Triangle t = Triangle(80000032, Vecteur2D(4, -32), Vecteur2D(200, -3.2), Vecteur2D(63, -1));
	//Triangle t = Triangle(4442131, Vecteur2D(4, -32), Vecteur2D(200, -3.2), Vecteur2D(63, -1));
	//Polygone p(t);
	//p.addPoint(Vecteur2D(4, 50));
	//p.addPoint(Vecteur2D(21, -4.11));


	/*Segment s(811191123, Vecteur2D(1, 1), Vecteur2D(221, 211));
	s.dessine(dessinateur);*/
	
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
	//Forme * triangleprime = tnri.transforme(h);

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

