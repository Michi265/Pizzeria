//
// Created by michela on 20/03/17.
//

#ifndef PIZZERIA_INGREDIENT_H
#define PIZZERIA_INGREDIENT_H


#include "iostream"
#include "string"

    using namespace std;


    class Ingredient{
    public:

        Ingredient(){}
        virtual ~Ingredient() { }

        virtual int getCost();
        virtual int getingredientname();
        int ingredientname;

    private:
        string name;
        int cost;
    };




#endif //PIZZERIA_INGREDIENT_H
