//
// Created by michela on 05/07/16.
//

#include "Bufala.h"
#include "Pizza.h"

int Bufala::cost() {

    int result=0;
    result= p->cost()+2;
    return result;

}

