//
// Created by michela on 05/07/16.
//

#ifndef PIZZERIA_OLIO_TARTUFATO_H
#define PIZZERIA_OLIO_TARTUFATO_H

#include "Pizza.h"

    class Olio_Tartufato: public Pizza {

    public:
        Olio_Tartufato(Pizza* p): p(p){}
        virtual int cost();
    private:
        Pizza* p;
    };



#endif //PIZZERIA_OLIO_TARTUFATO_H
