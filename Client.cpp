//
// Created by michela on 03/10/16.
//

#include <vector>
#include "Client.h"
#include "RegistrationOrder.h"
#include <string>
#include <iostream>
#include "Pizza.h"


void Client::addPizza(Pizza *p) {

  //  cout<<"pizza aggiunta"<< pizzaorder.size();
   pizzaorder.push_back(p);
   //cout<<"pizza aggiunta"<< p->cost() << endl;
    
}

vector<Pizza> Client::getPizze() {
    return std::vector<Pizza>();
}


void Client::stampa() {

    cout<<"il cliente di nome "<< name << " ha mangiato le pizze con il seguente costo: "<< endl;
    for(int i=0; i<pizzaorder.size();i++){

       cout<<"La pizza ordinata ha costo "<<pizzaorder[i]->cost() << endl;

    }

}

int Client::getid() {

    return clientName;
}


bool Client::Pizzaresearch(int pid ) {

    for (int i = 0; i < pizzaorder.size(); i++) {

        if (pizzaorder[i]->getpizzaid() == pid) {
            return true;
        }
    }
    return false;
}



void Client::VerificaPizza(Pizza *p) {

    bool test=false;
    test= Pizzaresearch(p->getpizzaid());
    if(!test){
        AddPizza(p);
        cout<<"Una nuova pizza è stata aggiunta"<< p->getpizzaid()<< endl;
    }

}

int Client::AddPizza(Pizza *p) {

    pizzaorder.push_back(p);

    return 0;
}








