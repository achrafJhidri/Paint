#pragma once
#include "Dessinateur.h"
#include "MaSocket.h"
class DessinateurJava :
	public Dessinateur
{
	MaSocket sock;
public:
	DessinateurJava();
	virtual ~DessinateurJava();
	void visite(const Forme& f)const ;
	operator string() const;
};

