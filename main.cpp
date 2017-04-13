#include <iostream>
#include <vector>
#include "Pizza.h"
#include "Bufala.h"
#include "Olio_Tartufato.h"
#include "Funghi_Porcini.h"
#include "Client.h"
#include "RegistrationOrder.h"
#include <map>
#include <unordered_map>
#include "Margherita.h"
#include "Marinara.h"
#include "Napoli.h"
#include <wx/wx.h>
//include <wx/panel.h>
#include "FrameProgetto.h"
#include "Communicate.h"
#include "main.h"

IMPLEMENT_APP(MyApp)
/*
 *using namespace std;


 int main(){

    /* Pizza* p = new Pizza;

         cout << "Il prezzo della pizza è "  << p->cost() << endl;

     Margherita* m = new Margherita;

     cout << "Il prezzo della margherita è "  << m->cost() << endl;

     Marinara* ma = new Marinara;

     cout << "Il prezzo della marinara è "  << ma->cost() << endl;

     Napoli* n = new Napoli;

     cout << "Il prezzo della napoli è "  << n->cost() << endl;

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

     Pizza Margherita;
     Margherita = *m;

     Pizza Marinara;
     Marinara = *ma;

     Pizza Napoli;
     Napoli = *n;
 */
/*
    Pizza.push_back(Margherita);
    Pizza.push_back(Marinara);
    Pizza.push_back(Napoli);


    return 0;
}

*/

bool MyApp::OnInit() {


        Communicate *communicate = new Communicate(wxT("Pizzeria"));
        communicate->Show(true);

        return true;
    };

