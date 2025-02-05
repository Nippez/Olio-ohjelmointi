#include <iostream>

using namespace std;

#include "asiakas.h"

int main() {
    Asiakas asiakas("henkilo", 500);
    asiakas.talletus(1000);
    asiakas.showSaldo();
    asiakas.nosto(200);
    asiakas.showSaldo();
    asiakas.luotonNosto(300);
    asiakas.showSaldo();
    asiakas.luotonMaksu(150);
    asiakas.showSaldo();
    return 0;
}
