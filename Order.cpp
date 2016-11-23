//
// Created by michela on 27/10/16.
//

#include "Order.h"
#include "Pizza.h"
#include "Funghi_Porcini.h"
#include "Bufala.h"
#include "Olio_Tartufato.h"


void Order::Add_order() {


    Date d1(2016, 3, 4);
    Date d2(2016, 4, 12);

    ordine_cliente.insert(std::pair<Date, string>(d1, "Funghi_Porcini"));
    ordine_cliente.insert(std::pair<Date, string>(d1, "Bufala"));
    ordine_cliente.insert(std::pair<Date, string>(d2, "Olio_Tartufato"));
    ordine_cliente.insert(std::pair<Date, string>(d2, "Bufala"));

    return;

}

void Order::Verify_order() {

    Date query(2016, 4, 12);
    auto ricerca=ordine_cliente.find(query);
    if (ricerca==ordine_cliente.end())
        std::cout<< "L'ordine non è stato trovato"<< std::endl;

}



