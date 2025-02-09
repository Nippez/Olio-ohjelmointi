#include "notifikaattori.h"
#include <algorithm>
#include <iostream>

using namespace std;

void Notifikaattori::lisaa(shared_ptr<Seuraaja> seuraaja) {
    seuraajat.push_back(seuraaja);
}

void Notifikaattori::poista(shared_ptr<Seuraaja> seuraaja) {
    seuraajat.erase(remove(seuraajat.begin(), seuraajat.end(), seuraaja), seuraajat.end());
}

void Notifikaattori::tulosta() {
    for (const auto& seuraaja : seuraajat) {
        cout << seuraaja->getNimi() << " ";
    }
    cout << endl;
}

void Notifikaattori::postita(string viesti) {
    for (const auto& seuraaja : seuraajat) {
        seuraaja->paivitys(viesti);
    }
}
