#include "DessinateurJava.h"



DessinateurJava::DessinateurJava()
{
	sock.connectTo("127.0.0.1", 9111);
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
	/*os << Dessinateur::operator string << "avec Java awt pour le moment ";*/
	return os.str();
}
