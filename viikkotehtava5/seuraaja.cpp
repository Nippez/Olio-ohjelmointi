#include "seuraaja.h"

using namespace std;

Seuraaja::Seuraaja(string n) : nimi(n) {}

string Seuraaja::getNimi() { return nimi; }

void Seuraaja::paivitys(string viesti) {
    cout << nimi << " vastaanotti viestin: " << viesti << endl;
}
