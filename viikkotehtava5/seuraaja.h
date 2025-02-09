#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <iostream>
#include <string>

using namespace std;

class Seuraaja {
private:
    string nimi;
public:
    Seuraaja(string n);
    string getNimi();
    void paivitys(string viesti);
};
#endif // SEURAAJA_H
