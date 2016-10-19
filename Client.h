//
// Created by michela on 03/10/16.
//

#ifndef PIZZERIA_CLIENT_H
#define PIZZERIA_CLIENT_H

#include "string"
#include "iostream"
#include "Pizza.h"
#include "vector"
#include "Olio_Tartufato.h"
#include "Bufala.h"
#include "Funghi_Porcini.h"
#include "Pizza.h"

using namespace std;

class Client {

public:
    int clientName;
    string name;

    vector<Pizza *> pizzaorder;

    void addPizza(Pizza *p);

    vector<Pizza> getPizze();

    void stampa();

    virtual int getid();

    virtual int AddPizza(Pizza *p);

    void VerificaPizza(Pizza *p);

    bool Pizzaresearch(int pid);

    Client(int c, string n) {
        clientName = c;
        name = n;
    }


private:

};


#endif //PIZZERIA_CLIENT_H
