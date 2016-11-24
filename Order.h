//
// Created by michela on 27/10/16.
//

#ifndef PIZZERIA_ORDER_H
#define PIZZERIA_ORDER_H

#include "Pizza.h"
#include "Funghi_Porcini.h"
#include "Bufala.h"
#include "Olio_Tartufato.h"
#include <iostream>
#include <string>
#include <map>
#include "Date.h"

using namespace std;

class Order  {
    Order(){}

    std::multimap<Date, string > ordine_cliente;

    void Add_order();
    void Verify_order();

};

#endif //PIZZERIA_ORDER_H
