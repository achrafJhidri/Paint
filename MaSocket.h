/**
*\file MaSocket.h
*\author JHIDRI MOKHTARI 
*/
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
/**
*\param f la forme a dessiné
*\brief prend une forme et l'envoi en format text au socket
*/
	void envoyer(const Forme& f)const;
	void recever(char buf[])const;
};

