//
// Created by michela on 03/03/17.
//

#ifndef PIZZERIA_MARGHERITA_H
#define PIZZERIA_MARGHERITA_H

#include "string"
#include "Pizza.h"
using namespace std;

class Margherita : public Pizza {
    
    public:

        int cost() override;
        int getpizzaid() override;

        Margherita(){}

    };


#endif //PIZZERIA_MARGHERITA_H
