//
// Created by michela on 03/10/16.
//

#include "RegistrationOrder.h"
#include "Client.h"

using namespace std;

bool Order::Clientresearch(int id ) {

    for (int i = 0; i < clientlist.size(); i++) {

        if (clientlist[i]->getid() == id) {
            return true;
        }
    }
    return false;
}

int Order::AddClient(Client *c) {

    clientlist.push_back(c);

    return 0;
}

void Order::VerificaCliente(Client *c) {

    bool test=false;
    test= Clientresearch(c->getid());
    if(!test){
        AddClient(c);
        cout<<"Numero dei clienti aggiunti: "<< c->getid();
    }

}















