//
// Created by michela on 26/06/16.
//

#ifndef PIZZERIA_PIZZA_H
#define PIZZERIA_PIZZA_H

#include <vector>
#include "string"
using namespace std;

class Pizza {
public:

     virtual int cost();
     virtual int getpizzaid();

    Pizza(){}

    virtual ~Pizza() { }
    int pizzaname;

private:

    int basecost;
    string name;



};





#endif //PIZZERIA_PIZZA_H
