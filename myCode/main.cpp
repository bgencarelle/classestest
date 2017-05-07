// GIT-Labor
// main.h

////////////////////////////////////////////////////////////////////////////////
// Header-Dateien

// TODO: Fügen Sie hier weitere benötigte Header-Dateien der
// Standard-Bibliothek ein z.B.
// #include <string>

using namespace std;	// Erspart den scope vor Objekte der
						// C++-Standard-Bibliothek zu schreiben
						// z.B. statt "std::cout" kann man "cout" schreiben

// Inkludieren Sie hier die Header-Files Ihrer Klassen, z.B.
 #include "CFraction.h"


// Hauptprogramm
// Dient als Testrahmen, von hier aus werden die Klassen aufgerufen
int main (void)
{
    // TODO: Fügen Sie ab hier Ihren Programmcode ein
	cout << "classestest gestarted." << endl << endl;

	CFraction f;
	int nValue = -1;
	f.print();
	f.setNumerator(3);
	f.setDenominator(300);
	f.print();
	f.addInteger(nValue);
	f.print();
	int num;
	int den;
	cin >> num;
	cin >> den;
	f.setNumerator(num);
	f.setDenominator(den);
	f.print();
	return 0;
}
