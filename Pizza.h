//
// Created by michela on 26/06/16.
//

#ifndef PIZZERIA_PIZZA_H
#define PIZZERIA_PIZZA_H

#include "string"
using namespace std;

class Pizza {
public:

    virtual int cost();

    int basecost;

    string name;
    int pizzaname;
    virtual int getpizzaid();

    Pizza(){}


};





#endif //PIZZERIA_PIZZA_H
