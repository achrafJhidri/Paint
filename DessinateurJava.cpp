/**
*\file DessinateurJava.cpp
*\author JHIDRI MOKHTARI
*/
#include "DessinateurJava.h"



DessinateurJava::DessinateurJava(const string & ip, const int port):Dessinateur()
{

	sock.connectTo(ip, port);
}


DessinateurJava::~DessinateurJava()
{
}

void DessinateurJava::visite(const Forme & f) const
{

	sock.envoyer(f);
}

DessinateurJava::operator string() const
{
	ostringstream os;
	//os << Dessinateur::operator string << "avec Java awt ";
	return os.str();
}
