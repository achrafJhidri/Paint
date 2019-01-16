/**
*\file MaSocket.cpp
*\author JHIDRI MOKHTARI 
*/
#include "pch.h"
#include "Erreur.h"
#include "MaSocket.h"
#include <iostream>
#pragma warning(disable:4996) 



MaSocket::MaSocket()
{
	int familleAdresse = AF_INET; // AF_INET6
	int typeSocket = SOCK_STREAM;
	int protocole = IPPROTO_TCP;

	sock = socket(familleAdresse, typeSocket, protocole);

	if (sock == INVALID_SOCKET) {
		cerr << "can't create socket, Err#" << WSAGetLastError() << endl;
		WSACleanup();
		throw Erreur("création de Socket a échoué");
	}
	cout << "Sockette creation succed " << endl;
}

MaSocket::~MaSocket()
{
	
	closesocket(sock);
	
}



void MaSocket::connectTo(const string & Ip, int p)const
{
	SOCKADDR_IN hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(p);
	hint.sin_addr.s_addr = inet_addr(Ip.c_str());

	int con = connect(sock, (SOCKADDR *)&hint, sizeof(hint));
	if (con == SOCKET_ERROR)
	{
		throw Erreur("Connexion échoué au serveur");
	}
	else
	{
		cout << "Connexion succeded " << endl;

	}

}
void MaSocket::envoyer(const string & msg) const
{
	int sent = send(sock, msg.c_str(), strlen(msg.c_str()), 0);

	if (sent == SOCKET_ERROR)
	{
		cerr << "can't send to the server, Err#" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
	}
	cout << "Envoi réussie " << endl;
	
}
void MaSocket::envoyer(const Forme & f) const
{
	 envoyer(f.print()+"\r\n");
}
void MaSocket::recever(char buf[]) const
{
	int rec = recv(sock, buf, BUFSIZ - 1, 0);
	if (rec == SOCKET_ERROR)
	{
		cerr << "can't receive to the server, Err#" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
	}
	cout << "Message recu " << endl;

	buf[rec] = '\0';

	
}
