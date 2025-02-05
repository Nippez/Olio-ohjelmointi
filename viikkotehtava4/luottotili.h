#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"
#include <iostream>

using namespace std;

class Luottotili : public Pankkitili
{
private:
    double luottoRaja = 0;

public:
    Luottotili();
    Luottotili(string, double);


    virtual bool withdraw(double) override;
    virtual bool deposit(double) override;
};

#endif
