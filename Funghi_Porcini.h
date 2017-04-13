//
// Created by michela on 06/07/16.
//

#ifndef PIZZERIA_FUNGHI_PORCINI_H
#define PIZZERIA_FUNGHI_PORCINI_H

#include "Pizza.h"
#include "string"
#include "iostream"
#include "Ingredient.h"

using namespace std;

    class Funghi_Porcini: public Ingredient {
/*
    public:
        Funghi_Porcini(Pizza* p): p(p){
            pizzaname="Funghi_Porcini";
        }
        virtual int cost();
        virtual string getname();


    private:

        Pizza* p;
        std::string pizzaname;
*/

    public:

        virtual int getCost() override ;
        int getingredientname() override;

        Funghi_Porcini(){}


    };



#endif //PIZZERIA_FUNGHI_PORCINI_H
