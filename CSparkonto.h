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

//Zähler anlegen
static int fwdKontonummer=1;

//Klasse CSparkonto anlegen 
class CSparkonto
{
	private:
		int Kontonummer;
		string Kontoinhaber;
		float Kontostand;
		float Habenzinssatz;
	public:
		void Einzahlung(float Einz);
		void Auszahlung(float Ausz);
		float GetKontostand();
		void Kontoauszug();
		void Zinsberechnung();
		void ZeigeZinssatz();
		void SetZinssatz(float Zsatz);
		CSparkonto();
		CSparkonto(string KtoInh, float KtoStnd, float HabZins);
		~CSparkonto();
};

//Methoden definieren
CSparkonto::CSparkonto()
{
	Kontonummer=fwdKontonummer;
	fwdKontonummer+=1;
	Kontostand=0.0;
	Habenzinssatz=2.0;
	Kontoinhaber="UNBEKANNT";
}

CSparkonto::CSparkonto(string KtoInh, float KtoStnd, float HabZins)
{
	Kontonummer=fwdKontonummer;
	fwdKontonummer+=1;
	Kontostand=KtoStnd;
	Habenzinssatz=HabZins;
	Kontoinhaber=KtoInh;
}

CSparkonto::~CSparkonto()
{
	
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

//Kontostand zurückgeben
float CSparkonto::GetKontostand()
{
	return Kontostand;
}

//Zinssatz ausgeben
void CSparkonto::ZeigeZinssatz()
{
	cout << Habenzinssatz << "\n";
}

//Zinssatz verändern
void CSparkonto::SetZinssatz(float Zsatz)
{
	Habenzinssatz=Zsatz;
}

//Kontoauszug ausgeben
void CSparkonto::Kontoauszug()
{
	cout << "Kontonummer: " << Kontonummer << "\t" << Kontoinhaber << "\t" << Kontostand << " EUR\n";
}

//Jahreszinsen berechnen
void CSparkonto::Zinsberechnung()
{
	float Zinsen=0.0;
	Zinsen=(Kontostand*Habenzinssatz)/100;
	Kontostand+=Zinsen;
}
