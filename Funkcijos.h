#pragma once

#include "Paskyra.h"
#include <string>
#include <fstream>
#include <iomanip>

#include <cstdio>

using namespace System;

using namespace std;

void Uzregistravimas(string vardas, string slaptazodis);
void SaugotiDuomenis(Paskyra IvykiuPaskyra, string vardas, string slaptazodis, string theme, int n, string svsimb, string np);
void SkaidytiData(int &y, int &m, int &d, string dt);
void Spausdinimas(string failas, string vardas, Paskyra IvykiuPaskyra);
void SalintiPaskyra(string vardas, string slaptazodis);
void RikiuotiIvykius(Paskyra &IvykiuPaskyra);
void StringTostring(String ^ s, string & os);

bool ArVardasKartojasi(string vardas);

int ArPrisijungta(string vardas, string slaptazodis);
int SkirtumasTarpDatu(string dt1, string dt2);
int DataIDienas(int y, int m, int d);