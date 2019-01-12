#pragma once
#include <string>
#include <winsock2.h>
#include "Forme.h"

#pragma comment(lib, "ws2_32.lib")
using namespace std;
class MaSocket
{

	SOCKET sock;
	void envoyer(const string & msg)const;
public:
	MaSocket();
	~MaSocket();
	void connectTo(const string & Ip, int p)const;
	void envoyer(const Forme& f)const;
	void recever(char buf[])const;
};

