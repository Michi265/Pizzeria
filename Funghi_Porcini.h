//
// Created by michela on 06/07/16.
//

#ifndef PIZZERIA_FUNGHI_PORCINI_H
#define PIZZERIA_FUNGHI_PORCINI_H

#include "Pizza.h"


    class Funghi_Porcini: public Pizza {

    public:
        Funghi_Porcini(Pizza* p): p(p){}
        virtual int cost();
    private:
        Pizza* p;
    };



#endif //PIZZERIA_FUNGHI_PORCINI_H
