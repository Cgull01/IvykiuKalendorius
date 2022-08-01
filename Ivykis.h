#pragma once

#include <string>
using namespace std;
//-------------------------------
// Klasė skirta aprašyti įvykiui.
//-------------------------------
class Ivykis
{
private:

	string data,
		pavadinimas,
		komentaras;
	bool svarbus;
	int daysLeft;

public:
	Ivykis();
	Ivykis(string data, string pavadinimas, string komentaras, bool svarbus, int daysLeft);
	~Ivykis();

	void Deti(string dt, string pav, string k, bool s, int dl);
	void Imti(string &dt, string &pav, string &k, bool &s, int& dl);
	void KeistiSvarba(bool s);
	int ImtiDienas();

};

