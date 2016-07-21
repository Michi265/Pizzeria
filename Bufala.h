//
// Created by michela on 05/07/16.
//

#ifndef PIZZERIA_BUFALA_H
#define PIZZERIA_BUFALA_H

#include "Pizza.h"
class Bufala: public Pizza {

public:
    Bufala(Pizza* p): p(p){}
    virtual int cost();
private:
    Pizza* p;
};

#endif //PIZZERIA_BUFALA_H
