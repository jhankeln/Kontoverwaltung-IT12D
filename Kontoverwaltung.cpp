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
	//Programmende
	getch() ;
	return 0;
}

