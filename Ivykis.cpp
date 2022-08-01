#include "Ivykis.h"
//-----------------------------------------------------------------
Ivykis::Ivykis()
{
	data = "-";
	pavadinimas = "-";
	komentaras = "";
	svarbus = false;
	daysLeft = 0;
}


//-----------------------------------------------------------------
Ivykis::Ivykis(string data, string pavadinimas, string komentaras, bool svarbus, int daysLeft)
{
	this->data = data;
	this->pavadinimas = pavadinimas;
	this->komentaras = komentaras;
	this->svarbus = svarbus;
	this->daysLeft = daysLeft;
}

//-----------------------------------------------------------------
Ivykis::~Ivykis()
{
}

//-----------------------------------------------------------------
void Ivykis::Deti(string dt, string pav, string k, bool s, int dl)
{
	data = dt;
	pavadinimas = pav;
	komentaras = k;
	svarbus = s;
	daysLeft = dl;
}

//-----------------------------------------------------------------
void Ivykis::Imti(string & dt, string & pav, string & k, bool & s, int& dl)
{
	dt = data;
	pav = pavadinimas;
	k = komentaras;
	s = svarbus;
	dl = daysLeft;
}

//-----------------------------------------------------------------
void Ivykis::KeistiSvarba(bool s)
{
	svarbus = s;
}

//-----------------------------------------------------------------
int Ivykis::ImtiDienas()
{
	return daysLeft;
}