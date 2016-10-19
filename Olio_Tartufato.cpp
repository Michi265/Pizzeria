//
// Created by michela on 05/07/16.
//

#include "Olio_Tartufato.h"
#include "Pizza.h"

int Olio_Tartufato::cost() {

        int result=0;
        result= p->cost()+1;
        return result;

}

string Olio_Tartufato::getname() {
        return pizzaname;
        //return __cxx11::basic_string<char, char_traits<char>, allocator<char>>();
}



