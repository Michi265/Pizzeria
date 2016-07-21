//
// Created by michela on 06/07/16.
//

#include "Funghi_Porcini.h"
#include "Pizza.h"

int Funghi_Porcini::cost() {

    int result = 0;
    result = p->cost() + 2;
    return result;
}
