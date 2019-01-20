
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



	try {
		cout << "*************____Test des Formes____*************" << endl;

		Cercle c(25454300, Vecteur2D(70, 70), 90.5);
		cout << c << " calcule d'air :" << c.calculeAir() << endl;
		Segment s(4031130, Vecteur2D(20, 120), Vecteur2D(2, 2));
		cout << s << " calcule d'air :" << s.calculeAir() << endl;
		Triangle t(120326431, Vecteur2D(4, -32), Vecteur2D(389, -3.2), Vecteur2D(63, -1));
		cout << t << " calcule d'air :" << t.calculeAir() << endl;
		Polygone p(Triangle(97620199, Vecteur2D(189, -3.2), Vecteur2D(4, -32), Vecteur2D(63, -1)));
		p.addPoint(Vecteur2D(90, 60));
		cout << p << " calcule d'air :" << p.calculeAir() << endl;
		FormeComplexe f;
		f.addForme(p).addForme(s).addForme(t).addForme(c);
		cout << f << " calcule d'air :" << f.calculeAir() << endl;


		//c.dessine(dessinateur);
		//t.dessine(dessinateur);
		//p.dessine(dessinateur);
		//s.dessine(dessinateur);
		/*f.dessine(dessinateur);*/

		cout << endl << endl << "*************____Test des Transformations____*************" << endl;

		Forme * cPrime;
		Forme * sPrime;
		Forme * pPrime;
		Forme * tPrime;
		Forme * fPrime;

		cout << endl << endl << "*************____Test de Translation____*************" << endl;

		Translation translation = Translation(Vecteur2D(50, 0));

		// cPrime = c.transforme(translation);
		//cout << *cPrime << " calcule d'air :" << cPrime->calculeAir() << endl;
		// sPrime = s.transforme(translation);
		//cout << *sPrime << " calcule d'air :" << sPrime->calculeAir() << endl;
		// tPrime = t.transforme(translation);
		//cout << *tPrime << " calcule d'air :" << tPrime->calculeAir() << endl;
		// pPrime = p.transforme(translation);	
		//cout << *pPrime << " calcule d'air :" << pPrime->calculeAir() << endl;
		// fPrime = f.transforme(translation);
		//cout << *fPrime << " calcule d'air :" << fPrime->calculeAir() << endl;


		//cPrime->dessine(dessinateur); 
		//tPrime->dessine(dessinateur); 
		//pPrime->dessine(dessinateur);
		//sPrime->dessine(dessinateur); 
		//fPrime->dessine(dessinateur); 






		cout << endl << endl << "*************____Test de Rotation____*************" << endl;

		//Rotation rotation = Rotation(1, Vecteur2D(0, 0));

		// cPrime = c.transforme(rotation);
		//cout << *cPrime << " calcule d'air :" << cPrime->calculeAir() << endl;
		// sPrime = s.transforme(rotation);
		//cout << *sPrime << " calcule d'air :" << sPrime->calculeAir() << endl;
		// tPrime = t.transforme(rotation);
		//cout << *tPrime << " calcule d'air :" << tPrime->calculeAir() << endl;
		// pPrime = p.transforme(rotation);
		//cout << *pPrime << " calcule d'air :" << pPrime->calculeAir() << endl;
		// fPrime = f.transforme(rotation);
		//cout << *fPrime << " calcule d'air :" << fPrime->calculeAir() << endl;

		//cPrime->dessine(dessinateur); 
		//tPrime->dessine(dessinateur); 
		//pPrime->dessine(dessinateur);
		//sPrime->dessine(dessinateur); 
		//fPrime->dessine(dessinateur); 

		cout << endl << endl << "*************____Test de Homotetie____*************" << endl;

		//Homotetie homotetie = Homotetie(Vecteur2D(0,0), 2);

		//cPrime = c.transforme(homotetie);
		//cout << *cPrime << " calcule d'air :" << cPrime->calculeAir() << endl;
		//sPrime = s.transforme(homotetie);
		//cout << *sPrime << " calcule d'air :" << sPrime->calculeAir() << endl;
		//tPrime = t.transforme(homotetie);
		//cout << *tPrime << " calcule d'air :" << tPrime->calculeAir() << endl;
		//pPrime = p.transforme(homotetie);
		//cout << *pPrime << " calcule d'air :" << pPrime->calculeAir() << endl;
		//fPrime = f.transforme(homotetie);
		//cout << *fPrime << " calcule d'air :" << fPrime->calculeAir() << endl;

		//cPrime->dessine(dessinateur); 
		//tPrime->dessine(dessinateur); 
		//pPrime->dessine(dessinateur);
		//sPrime->dessine(dessinateur); 
		//fPrime->dessine(dessinateur); 


		cout << endl << endl << "*************____Test de la sauvegare dans un Fichier txt____*************" << endl;



		//SauveurTxt sauveur =  SauveurTxt("test.txt");
		//c.save(sauveur);
		//s.save(sauveur);
		//p.save(sauveur);
		//t.save(sauveur);//sauve Polygone , mais c'est pour des raisons d'optimisation de la COR du coté Java
		//f.save(sauveur);


		cout << endl << endl << "*************____Test de la Recupération depuis un Fichier txt____*************" << endl;

		//ChargeurListeForme * chargeur = ChargeurListeForme::getInstance();

		//ParseurForme * parseur = new ParseurSegment(NULL);
		//parseur = new ParseurCercle(parseur);
		////parseur = new ParseurTriangle(parseur);
		//parseur = new ParseurPolygone(parseur);
		//parseur = new ParseurFormeComplexe(parseur); 

		// vector<Forme*> v = chargeur->charge("test.txt", parseur);

		//
		// for (unsigned int i = 0; i < v.size(); i++)
		//	 cout << *v[i] << endl;


		// for (unsigned int i = 0; i < v.size(); i++)
		//	 delete v[i];
		// delete parseur;
		// delete chargeur;
		//



		cout << endl << endl << "*************____Test de DessinerJava____*************" << endl;


		//initialisationWSA();
		//DessinateurJava  dessinateur = DessinateurJava(ipAddress, port);


		//c.dessine(dessinateur);
		//t.dessine(dessinateur);
		//p.dessine(dessinateur);
		//s.dessine(dessinateur);
		//f.dessine(dessinateur);





		//delete pPrime;
		//delete cPrime;
		//delete sPrime;
		//delete tPrime;
		//delete fPrime;



	}
	catch (Erreur e)
	{
		cout << e.what() << endl;
		
	}
	

	
	system("pause");

	return 0;
}

void initialisationWSA() {
	WSADATA WSAData;
	WORD version = MAKEWORD(2, 0);
	int wsResult = WSAStartup(version, &WSAData);
	if (wsResult) // 0 no erreur else erreur
	{
		throw Erreur("can't start winsock, Err #" + wsResult);
		
	}
	cout << "initialisation OF WSA succeded" << endl;

}

