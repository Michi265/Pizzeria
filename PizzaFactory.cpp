//
// Created by michela on 13/03/17.
//

#include "PizzaFactory.h"
#include "Margherita.h"
#include "Marinara.h"
#include "Napoli.h"

Pizza *PizzaFactory::CreatePizza() {
    switch (choice) {
        case 1:
           return pizza = new Margherita();

        case 2 :
           return pizza = new Marinara();

        case 3 :
           return pizza = new Napoli();
//finestra:non hai selezionato la pizza
    }
    return 0;
}


