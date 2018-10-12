/*
CSparkonto.h
Jens Hankeln
Kontoverwaltung
*/
//Header
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//Z�hler anlegen
static int fwdKontonummer;

//Klasse CSparkonto anlegen 
class CSparkonto
{
	private:
		int Kontonummer;
		string Kontoinhaber;
		float Kontostand;
		float Habenzinssatz;
		float Zinsen;
	public:
		CSparkonto();
		CSparkonto(string KtoInh, float KtoStnd, float HabZins);
		void	Einzahlung(float Einz);
		void	Auszahlung(float Ausz);
		void	Kontoauszug();
		void	ZeigeZinssatz();
		void	SetZinssatz(float Zsatz);
		void	Zinsberechnung();
		void	Jahresabschluss();
		string	GetKontonummer();
		string	GetKontoinhaber();
		float	GetKontostand();
		float	GetHabenzinssatz();
		float	GetZinsen();
		~CSparkonto();
};

//Methoden definieren

//Constructor
CSparkonto::CSparkonto()
{
	Kontonummer=fwdKontonummer;
	fwdKontonummer+=1;
	Kontostand=0.0;
	Habenzinssatz=0.0;
	Kontoinhaber="UNBEKANNT";
	Zinsen=0.0;
}

//Constructor
CSparkonto::CSparkonto(string KtoInh, float KtoStnd, float HabZins)
{
	Kontonummer=fwdKontonummer;
	fwdKontonummer+=1;
	Kontostand=KtoStnd;
	Habenzinssatz=HabZins;
	Kontoinhaber=KtoInh;
	Zinsen=0.0;
}

//Einzahlung vornehmen
void CSparkonto::Einzahlung(float Einz)
{
	Kontostand+=Einz;
}

//Auszahlung vornehmen
void CSparkonto::Auszahlung(float Ausz)
{
	Kontostand-=Ausz;
}

//Kontoauszug ausgeben
void CSparkonto::Kontoauszug()
{
	cout << "Kontonummer: " << Kontonummer << "\t" << Kontoinhaber << "\t" << Kontostand << " EUR\n";
}

//Zinssatz ausgeben
void CSparkonto::ZeigeZinssatz()
{
	cout << Habenzinssatz << "\n";
}

//Zinssatz ver�ndern
void CSparkonto::SetZinssatz(float Zsatz)
{
	Habenzinssatz=Zsatz;
}

//T�gliche Zinsberechnung
void CSparkonto::Zinsberechnung()
{
	Zinsen+=(Kontostand*Habenzinssatz)/100;
}

//Jahresabschluss
void CSparkonto::Jahresabschluss()
{
	Kontostand+=Zinsen;
}

//Kontonummer zur�ckgeben
string CSparkonto::GetKontonummer()
{
	string str=to_string(Kontonummer);
	return str;
}

//Kontoinhaber zur�ckgeben
string CSparkonto::GetKontoinhaber()
{
	return Kontoinhaber;
}

//Kontostand zur�ckgeben
float CSparkonto::GetKontostand()
{
	return Kontostand;
}

//Zinssatz zur�ckgeben
float CSparkonto::GetHabenzinssatz()
{
	return Habenzinssatz;
}

//Zinsen zur�ckgeben
float CSparkonto::GetZinsen()
{
	return Zinsen;
}

//Destructor
CSparkonto::~CSparkonto()
{
	
}

