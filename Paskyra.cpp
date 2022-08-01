#include "Paskyra.h"
//-----------------------------------------------------------------
Paskyra::Paskyra()
{
	n = 0;
}

//-----------------------------------------------------------------
Paskyra::~Paskyra()
{
}

//-----------------------------------------------------------------
int Paskyra::ImtiN()
{
	return n;
}

//-----------------------------------------------------------------
Ivykis Paskyra::Imti(int i)
{
	return Ivykiai[i];
}

//-----------------------------------------------------------------
void Paskyra::DetiIvyki(const Ivykis & ivykis)
{
	Ivykiai[n++] = ivykis;
}

//-----------------------------------------------------------------
void Paskyra::AtnaujintiIvyki(const Ivykis & ivykis, int i)
{
	Ivykiai[i] = ivykis;
}

//-----------------------------------------------------------------
void Paskyra::Salinti(int x)
{
	for (int i = x; i < n; i++)
	{
		swap(Ivykiai[i], Ivykiai[i + 1]);
	}
	n--;
}

//-----------------------------------------------------------------
void Paskyra::AtnaujintiSvarba(bool s, int i)
{
	Ivykiai[i].KeistiSvarba(s);
}

//-----------------------------------------------------------------
void Paskyra::SwapIvykius(int a, int b)
{
	swap(Ivykiai[a], Ivykiai[b]);
}
