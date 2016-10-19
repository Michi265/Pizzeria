#include <iostream>
#include <vector>
#include "Pizza.h"
#include "Bufala.h"
#include "Olio_Tartufato.h"
#include "Funghi_Porcini.h"
#include "Client.h"
#include "Order.h"

using namespace std;

int main() {

    Pizza* p = new Pizza;

        cout << "Il prezzo della pizza è "  << p->cost() << endl;

    Bufala* b= new Bufala(p);
        cout << "Il prezzo della pizza con la "<< b->getname() << " é "<<b->cost() << endl;

    Olio_Tartufato* ot= new Olio_Tartufato(p);
    cout << "Il prezzo della pizza con "<<ot->getname() << " é " << ot->cost() << endl;

    Funghi_Porcini* fp= new Funghi_Porcini(p);
    cout << "Il prezzo della pizza con " << fp->getname() << " é " << fp->cost() << endl;

    int nome1=1;
    int nome2=2;
    string cc ="Name1";
    string dd="Name2";

    Client* c1= new Client(nome1,cc);
    Client* c2= new Client(nome2,dd);

    c1->addPizza(b);
    c1->addPizza(fp);
    c1->stampa();

    c2->addPizza(ot);
    c2->stampa();


    vector<Pizza> prova=c1->getPizze();

    Order* o= new Order();
    o->VerificaCliente(c1);



    return 0;
}