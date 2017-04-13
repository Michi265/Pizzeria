//
// Created by michela on 20/03/17.
//

#ifndef PIZZERIA_INGREDIENTSFACTORY_H
#define PIZZERIA_INGREDIENTSFACTORY_H

#include "Pizza.h"
#include "Ingredient.h"
class IngredientsFactory {

    public:
        IngredientsFactory(int c) : choice(c)  { }
        Ingredient* CreateIngredients();

    private:
        int choice;
        Ingredient* ingredient;
    };



#endif //PIZZERIA_INGREDIENTSFACTORY_H
