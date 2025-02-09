#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include <vector>
#include <memory>
#include "seuraaja.h"

using namespace std;

class Notifikaattori {
private:
    vector<shared_ptr<Seuraaja>> seuraajat;
public:
    void lisaa(shared_ptr<Seuraaja> seuraaja);
    void poista(shared_ptr<Seuraaja> seuraaja);
    void tulosta();
    void postita(string viesti);
};

#endif // NOTIFIKAATTORI_H
