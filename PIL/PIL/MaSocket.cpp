#include "pch.h"
#include "MaSocket.h"
#include <iostream>
#pragma warning(disable:4996) 


static MaSocket * socketCourant = NULL;

MaSocket::MaSocket()
{
	int familleAdresse = AF_INET; // AF_INET6
	int typeSocket = SOCK_STREAM;
	int protocole = IPPROTO_TCP;

	sock = socket(familleAdresse, typeSocket, protocole);

	if (sock == INVALID_SOCKET) {
		cerr << "can't create socket, Err#" << WSAGetLastError() << endl;
		WSACleanup();
		throw "Socket creation failed";
	}
	cout << "Sockette creation succed " << endl;
}
MaSocket * MaSocket::getInstance()
{
	if (!socketCourant)
		socketCourant = new MaSocket();
	return socketCourant;
}
MaSocket::~MaSocket()
{
	closesocket(sock);
}



int MaSocket::connectTo(const string & Ip, int p)const
{
	SOCKADDR_IN hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(p);
	hint.sin_addr.s_addr = inet_addr(Ip.c_str());

	int con = connect(sock, (SOCKADDR *)&hint, sizeof(hint));
	if (con == SOCKET_ERROR)
	{
		throw "Connexion échoué au serveur";
	}
	else
	{
		cout << "Connexion succeded " << endl;
		return con;
	}

}
int MaSocket::envoyer(const string & msg) const
{
	int sent = send(sock, msg.c_str(), strlen(msg.c_str()), 0);

	if (sent == SOCKET_ERROR)
	{
		cerr << "can't send to the server, Err#" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
	}
	cout << "Envoi réussie " << endl;
	return sent;
}
int MaSocket::envoyer(const Forme & f) const
{
	return envoyer(string(f) + "\r\n");
}
int MaSocket::recever(char buf[]) const
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

	return rec;
}
