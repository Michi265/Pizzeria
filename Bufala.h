//
// Created by michela on 05/07/16.
//

#ifndef PIZZERIA_BUFALA_H
#define PIZZERIA_BUFALA_H

#include "Pizza.h"
#include "iostream"
#include "string"
using namespace std;

class Bufala: public Pizza {

public:
    Bufala(Pizza* p): p(p){
        pizzaname="Bufala";
    }
    virtual int cost();
    virtual string getname();


private:

    Pizza* p;
    string pizzaname;
};

#endif //PIZZERIA_BUFALA_H
