//
// Created by michela on 05/07/16.
//

#ifndef PIZZERIA_OLIO_TARTUFATO_H
#define PIZZERIA_OLIO_TARTUFATO_H

#include "Pizza.h"
#include "iostream"
#include "string"
#include "Ingredient.h"

using namespace std;

 //   class Olio_Tartufato: public Pizza {

 class Olio_Tartufato: public Ingredient{
    public:
 //       Olio_Tartufato(Pizza* p): p(p){
 //           pizzaname="Olio_Tartufato";
 //       }

     Olio_Tartufato(){}


         int getCost() override ;
         int getingredientname() override;


     };


  /*  private:
//        Pizza* p;
        std::string pizzaname;
        int cost=1;
    };
*/




#endif //PIZZERIA_OLIO_TARTUFATO_H
