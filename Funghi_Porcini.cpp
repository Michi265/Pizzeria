//
// Created by michela on 06/07/16.
//

#include "Funghi_Porcini.h"
#include "Pizza.h"

int Funghi_Porcini::cost() {

    int result = 0;
    result = p->cost() + 2;
    return result;
}

string Funghi_Porcini::getname() {
    return pizzaname;
    //return __cxx11::basic_string<char, char_traits<char>, allocator<char>>();
}


