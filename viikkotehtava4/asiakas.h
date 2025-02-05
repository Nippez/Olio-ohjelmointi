#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas {
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
public:
    Asiakas();
    Asiakas(string, double);
    string getNimi() const;

    void showSaldo() const;
    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);
};

#endif
