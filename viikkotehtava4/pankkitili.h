#ifndef PANKKITILI_H
#define PANKKITILI_H

using namespace std;

#include <iostream>

class Pankkitili {
protected:
    string omistaja;
    double saldo = 0;

public:
    Pankkitili();
    Pankkitili(string);

    double getBalance() const;

    virtual bool deposit(double);
    virtual bool withdraw(double);
};

#endif
