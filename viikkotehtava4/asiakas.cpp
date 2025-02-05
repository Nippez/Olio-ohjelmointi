#include "asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string nimi, double luottoRaja) : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoRaja) {}

string Asiakas::getNimi() const { return nimi; }

void Asiakas::showSaldo() const {
    cout << "Pankkitili saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotili saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double amount) {
    return kayttotili.deposit(amount);
}

bool Asiakas::nosto(double amount) {
    return kayttotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}
