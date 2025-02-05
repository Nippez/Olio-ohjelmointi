#include "luottotili.h"

using namespace std;

Luottotili::Luottotili(std::string omistaja, double luottoRaja) : Pankkitili(omistaja), luottoRaja(luottoRaja) {}

bool Luottotili::withdraw(double amount) {
    if (amount > 0 && saldo + luottoRaja >= amount) {
        saldo -= amount;
        return true;
    }
    return false;
}
