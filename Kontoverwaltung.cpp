/*
Kontoverwaltung.cpp
Jens Hankeln
Kontoverwaltung
*/

//Header
#include "CSparkonto.h"

using namespace std;

//Hauptprogramm
int main ()
{
	//Objekte anlegen
	fwdKontonummer=1000;
	CSparkonto Sparkonto1;
	CSparkonto Sparkonto2("Heinzelmann",2500.0,2.0);
	
	//Methoden ausführen
	Sparkonto1.Einzahlung(500.0);
	cout << Sparkonto1.GetKontostand() << " EUR\n";
	cout << Sparkonto2.GetKontostand() << " EUR\n";
	Sparkonto1.Kontoauszug();
	Sparkonto2.Kontoauszug();
	Sparkonto1.Zinsberechnung();
	Sparkonto2.Zinsberechnung();
	Sparkonto1.Kontoauszug();
	Sparkonto2.Kontoauszug();
	cout << "\n" << Sparkonto2.GetKontoinhaber() << "\n" << Sparkonto2.GetKontonummer() << "\n" << Sparkonto1.GetKontonummer();
	
	//Programmende
	getch() ;
	return 0;
}

