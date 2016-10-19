//
// Created by michela on 06/07/16.
//

#ifndef PIZZERIA_FUNGHI_PORCINI_H
#define PIZZERIA_FUNGHI_PORCINI_H

#include "Pizza.h"
#include "string"
#include "iostream"

using namespace std;

    class Funghi_Porcini: public Pizza {

    public:
        Funghi_Porcini(Pizza* p): p(p){
            pizzaname="Funghi_Porcini";
        }
        virtual int cost();
        virtual string getname();


    private:

        Pizza* p;
        string pizzaname;


    };



#endif //PIZZERIA_FUNGHI_PORCINI_H
