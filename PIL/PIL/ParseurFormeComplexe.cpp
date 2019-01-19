#include "ParseurFormeComplexe.h"
#include "FormeComplexe.h"


#include "ParseurCercle.h"
#include "ParseurTriangle.h"
#include "ParseurSegment.h"
#include "ParseurPolygone.h"




//template<typename Out>
//void splitA(const std::string &s, char delim, Out result) {
//	std::stringstream ss(s);
//	std::string item;
//	while (std::getline(ss, item, delim)) {
//		*(result++) = item;
//	}
//}
//std::vector<std::string> split(const std::string &s, char delim) {
//	std::vector<std::string> elems;
//	splitA(s, delim, std::back_inserter(elems));
//	return elems;
//}

ParseurFormeComplexe::ParseurFormeComplexe(ParseurForme * f)
	:ParseurForme(f)
{
}

ParseurFormeComplexe::~ParseurFormeComplexe()
{
}

Forme * ParseurFormeComplexe::resoudre1(const string & d) const
{

	int indicePolygone = d.find("FormeComplexe", 0);

	if (indicePolygone == std::string::npos)
		return NULL;
	else {
		const char * chaine = d.c_str();
		// r�cup�ration de la couleur
		int couleur;
		sscanf_s(chaine, "FormeComplexe couleur %d", &couleur);

		int indiceAccolladeO = d.find("[");

		int indiceAccolladeF = d.rfind("]");

		string ligne = d.substr(indiceAccolladeO + 1, indiceAccolladeF - indiceAccolladeO - 1);

		vector<Forme*> v;
		vector<string> res = split(ligne, '|');
	
		ParseurForme * p = new ParseurSegment(NULL);
		p = new ParseurCercle(p);
		p = new ParseurTriangle(p);
		p = new ParseurPolygone(p);
		p = new ParseurFormeComplexe(p);


		
		for (unsigned int  i = 0; i < res.size(); i++)
		{
			Forme * forme = p->resoudre(res[i]);
			v.push_back(forme);
		}

		FormeComplexe * f = new FormeComplexe();
		f->setCouleur(couleur);
		for (unsigned int  i = 0; i < v.size(); i++)
			f->addForme(*v[i]);


		return f;
	}
}
