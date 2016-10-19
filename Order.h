//
// Created by michela on 03/10/16.
//

#ifndef PIZZERIA_ORDER_H
#define PIZZERIA_ORDER_H

#include "string"
#include "iostream"
#include "Pizza.h"
#include "Client.h"
#include "vector"
using namespace std;

class Order {
private:

    vector<Client*> clientlist;


public:

    Order() { }


    virtual int AddClient(Client *c);

    void VerificaCliente(Client *c);

    bool Clientresearch(int id);




};


#endif //PIZZERIA_ORDER_H
