#include <fstream>
#include "Funkcijos.h"

//------------------------------------------------------------------------
/* Funkcija, kuri prideda vardą ir slaptažodį į failą su visomis paskyromis
   ir sukuria naują paskyros duomenų failą */
//------------------------------------------------------------------------
void Uzregistravimas(string vardas, string slaptazodis)
{
	string x;
	x = "Paskyros/" + vardas + slaptazodis + ".txt";

	ofstream UserList("Paskyros.txt", ios::app);

	UserList << endl << vardas << " " << slaptazodis;

	UserList.close();

	ofstream User(x);

	User << "Tema: Tamsi" << endl;
	User << "Svarbaus ivykio simbolis:*" << endl;
	User << "Naikinti ivykius po: 20 dienu" << endl;
	User << "0" << endl;

	User.close();
}

//--------------------------------------------------------------------
// Funkcija, kuri tikrina, ar registruojamas vardas jau yra panaudotas 
//--------------------------------------------------------------------
bool ArVardasKartojasi(string vardas)
{
	string x, y;
	bool kartojasi = false;

	ifstream in("Paskyros.txt");

	while (!in.eof())
	{
		in >> x >> y;
		in.ignore(80, '\n');
		if (vardas == x)
		{
			kartojasi = true;
			break;
		}
	}

	return kartojasi;
	in.close();
}

//------------------------------------------------------------------
/*Funkcija, kuri tikrina, ar ivestas vardas ir slaptazodis teisingi,
 ar paskyra egzistuoja ir ar slaptazodis teisingas */
//------------------------------------------------------------------
int ArPrisijungta(string vardas, string slaptazodis)
{
	string x, y;
	int status = 0;

	ifstream in("Paskyros.txt");


	while (!in.eof())
	{	
		in.ignore(80, '\n');
		in >> x >> y;

		if (vardas == x)
		{
			status = 2;

			if (slaptazodis == y)
			{
				status = 1;
				break;
			}
		}
		
	}
	
	return status;
	in.close();
}

//-----------------------------------------------------------------------
// Funkcija, kuri išsaugo paskyros nustatymus, įvykius į paskyros failą 
//-----------------------------------------------------------------------
void SaugotiDuomenis(Paskyra IvykiuPaskyra, string vardas, string slaptazodis, string theme, int n, string svsimb, string np)
{
	string data, pavadinimas, komentaras;
	bool svarba;
	int skirtumas;

	ofstream out("Paskyros/" + vardas + slaptazodis + ".txt");

	out << "Tema: " << theme << endl;
	out << "Svarbaus ivykio simbolis:" << svsimb << endl;
	out << "Naikinti ivykius po: " << np <<" dienu" << endl;

	out << n << endl;

	for (int i = 0; i < n; i++)
	{
		IvykiuPaskyra.Imti(i).Imti(data, pavadinimas, komentaras, svarba, skirtumas);

		out << data << "~" << pavadinimas << "~" << komentaras << "~" << skirtumas << "~";

		if (svarba == true)
		{
			out << "1" << endl;
		}
		else
		{
			out << "0" << endl;
		}
	}

	out.close();
}

//------------------------------------------------------------------
// Funkcija, kuri apskaičiuoja, kiek dienų liko iki nurodyto įvykio 
//------------------------------------------------------------------
int SkirtumasTarpDatu(string dt1, string dt2)
{
	int y1, m1, d1, y2, m2, d2;

	SkaidytiData(y1, m1, d1, dt1);
	SkaidytiData(y2, m2, d2, dt2);

	int a1 = DataIDienas(y1, m1, d1);
	int a2 = DataIDienas(y2, m2, d2);

	a2 -= a1;

	return a2;
}

//----------------------------------------------------------------
// Funkcija, kuri išskaido datą iš string į atskirus kintamuosius 
//----------------------------------------------------------------
void SkaidytiData(int &y, int &m, int &d, string dt)
{
	char s[10];

	sscanf_s(dt.c_str(), "%d-%d-%d", &y, &m, &d);
	sprintf(s, "%02d/%02d/%d", d, m, y);
}

//----------------------------------------------------
// Funkcija, kuri metus ir mėnesius paverčia į dienas 
//----------------------------------------------------
int DataIDienas(int y, int m, int d)
{
	m = (m + 9) % 12;
	y = y - m / 10;

	return 365 * y + y / 4 - y / 100 + y / 400 + (m * 306 + 5) / 10 + (d - 1);
}

//---------------------------------------------------------------------
// Funkcija, kuri įvykių duomenis atspausdina lentele į tekstinį failą 
//---------------------------------------------------------------------
void Spausdinimas(string failas, string vardas, Paskyra IvykiuPaskyra)
{
	string dt, pav, kom, svarbus, extraColumn = "";
	int days, setwdata = 10, setwpav = 19, setwkom = 11;
	bool s;

	ofstream out("Rezultatai/" + failas);

	for (int i = 0; i < IvykiuPaskyra.ImtiN(); i++)
	{
		IvykiuPaskyra.Imti(i).Imti(dt, pav, kom, s, days);

		if (dt.length() > setwdata)
		{
			setwdata = (int)dt.length(); // randa ilgiausią datos string
		}

		if (pav.length() > setwpav)
		{
			setwpav = (int)pav.length(); // randa ilgiausią pavadinimą
		}

		if (kom.length() > setwkom)
		{
			setwkom = (int)kom.length(); // randa ilgiausią komentarą
		}

		if (s == true)
		{
			extraColumn = "        | ";
		}
	}

	setwdata -= 4;
	setwpav -= 19;
	setwkom -= 11;

	string s1(setwdata, ' '), s2(setwpav, ' '), s3(setwkom, ' '), dash(setwkom + 70 + setwpav + setwdata, '-');

	out << extraColumn << "Data" << s1 << " | Ivykio pavadinimas  " << s2 << "| Kiek liko dienu | Komentaras " << s3 << " |" << endl;
	out << dash << endl;

	for (int i = 0; i < IvykiuPaskyra.ImtiN(); i++)
	{
		IvykiuPaskyra.Imti(i).Imti(dt, pav, kom, s, days);

		String^ str1 = gcnew String(dt.c_str());
		String^ str2 = gcnew String(pav.c_str());
		String^ str3 = gcnew String(kom.c_str());

		if (s == true)
		{
			svarbus = "SVARBUS | ";
		}
		else
		{
			svarbus = extraColumn;
		}

		out << svarbus << setw(s1.length() + 4) << left << dt << " | " << setw(s2.length() + 19) << pav << " |       " << setw(4) << days << right << setw(8) << " | " << setw(s3.length() + 12) << left << kom << right << "|" << endl;
	}
	out.close();
}

//-----------------------------------------------------------------
// Funkcija, kuri apskaičiuoja, kiek dienų liko iki nurodyto įvykio 
//-----------------------------------------------------------------
void SalintiPaskyra(string vardas, string slaptazodis)
{
	string paskyra, eil[999];
	int m = 0;

	paskyra = vardas + " " + slaptazodis;

	ifstream in("Paskyros.txt");

	while (!in.eof())
	{
		getline(in, eil[m], '\n');
		m++;

	}

	in.close();


	ofstream out("Paskyros.txt");

	for (int i = 0; i < m; i++)
	{
		if (eil[i] != paskyra)
		{
			if (eil[i] != "")
			{
				out << eil[i] << endl;
			}
		}
	}

	out.close();

	string PaskyrosFailas = "Paskyros/" + vardas + slaptazodis + ".txt";
	remove(PaskyrosFailas.c_str());

	string RezultatuFailas = "Rezultatai/" + vardas + "_rez.txt";
	remove(RezultatuFailas.c_str());
}

//-----------------------------------------------------------------
// Funkcija, kuri rikiuoja įvykius pagal dienas didėjimo tvarka 
//-----------------------------------------------------------------
void RikiuotiIvykius(Paskyra &IvykiuPaskyra)
{
	int m = IvykiuPaskyra.ImtiN();
	int d1 = 0, d2 = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = m - 1; j > i; j--)
		{
			d1 = IvykiuPaskyra.Imti(j).ImtiDienas();
			d2 = IvykiuPaskyra.Imti(j - 1).ImtiDienas();

			if (d1 < d2)
			{
				IvykiuPaskyra.SwapIvykius(j, j-1);
			}
		}
	}
}

//-------------------------------------
// Funkcija, Konvertuoja eilutę String^ į string
//-------------------------------------
void StringTostring(String ^ s, string & os)
{
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

