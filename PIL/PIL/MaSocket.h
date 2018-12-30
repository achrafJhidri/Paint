#pragma once
#include <string>
#include <winsock2.h>
#include "Forme.h"

using namespace std;
class MaSocket
{

	SOCKET sock;
	static MaSocket * ocketCourant;
	MaSocket();
public:

	static MaSocket * getInstance();
	~MaSocket();


	int connectTo(const string & Ip, int p)const;
	int envoyer(const string & msg)const;
	int envoyer(const Forme& f)const;
	int recever(char buf[])const;
};

