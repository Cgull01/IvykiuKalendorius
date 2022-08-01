#pragma once
#include "Ivykis.h"
//-----------------------------------------------------
// Konteinerinė klasė skirta saugoti profilio įvykius.
//-----------------------------------------------------
class Paskyra
{
public:
	static const int Cmax = 100;

private:
	Ivykis Ivykiai[Cmax];
	int n ;

public:
	Paskyra();
	~Paskyra();

	int ImtiN();
	Ivykis Imti(int i);
	void DetiIvyki(const Ivykis & ivykis);
	void AtnaujintiIvyki(const Ivykis & ivykis, int i);
	void Salinti(int x);
	void AtnaujintiSvarba(bool s, int i);
	void SwapIvykius(int a, int b);
};

