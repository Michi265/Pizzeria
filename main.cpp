#include <iostream>
#include "Pizza.h"
#include "Bufala.h"
#include "Olio_Tartufato.h"
#include "Funghi_Porcini.h"

using namespace std;

int main() {

    Pizza* p = new Pizza;

    cout << "Il prezzo della pizza è "  << p->cost() << endl;

    Bufala* b= new Bufala(p);
        cout << "Il prezzo della pizza con la bufala è "  << b->cost() << endl;

    Olio_Tartufato* ot= new Olio_Tartufato(p);
    cout << "Il prezzo della pizza con l'olio tartufato è "  << ot->cost() << endl;

    Funghi_Porcini* fp= new Funghi_Porcini(p);
    cout << "Il prezzo della pizza con i funghi porcini è "  << fp->cost() << endl;
    return 0;
}