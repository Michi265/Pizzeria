//
// Created by michela on 05/07/16.
//

#ifndef PIZZERIA_BUFALA_H
#define PIZZERIA_BUFALA_H

#include "Pizza.h"
#include "iostream"
#include "string"
#include "Ingredient.h"

using namespace std;

class Bufala: public Ingredient {

/*public:
    Bufala(Pizza* p): p(p){
        pizzaname="Bufala";
    }
    virtual int cost();
    virtual string getname();
*/


public:

    virtual int getCost() override ;
    int getingredientname() override;

    Bufala(){}
};

/*
    Pizza* p;
    std::string pizzaname;
};
*/
#endif //PIZZERIA_BUFALA_H
