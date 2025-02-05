#include "pankkitili.h"
#include <string>

using namespace std;

Pankkitili::Pankkitili(string omistaja) : omistaja(omistaja), saldo(0) {}

double Pankkitili::getBalance() const { return saldo; }

bool Pankkitili::deposit(double amount) {
    if (amount > 0) {
        saldo += amount;
        return true;
    }
    return false;
}

bool Pankkitili::withdraw(double amount) {
    if (amount > 0 && saldo >= amount) {
        saldo -= amount;
        return true;
    }
    return false;
}
