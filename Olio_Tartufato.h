//
// Created by michela on 05/07/16.
//

#ifndef PIZZERIA_OLIO_TARTUFATO_H
#define PIZZERIA_OLIO_TARTUFATO_H

#include "Pizza.h"
#include "iostream"
#include "string"
using namespace std;

    class Olio_Tartufato: public Pizza {

    public:
        Olio_Tartufato(Pizza* p): p(p){
            pizzaname="Olio_Tartufato";
        }
        virtual int cost();
        virtual string getname();

    private:
        Pizza* p;
        string pizzaname;
    };



#endif //PIZZERIA_OLIO_TARTUFATO_H
