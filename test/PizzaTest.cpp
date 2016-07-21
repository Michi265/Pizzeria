//
// Created by michela on 09/07/16.
//
#include "gtest/gtest.h"
#include "../Pizza.h"
#include "../Olio_Tartufato.h"
#include "../Bufala.h"
#include "../Funghi_Porcini.h"

TEST(Pizza, Olio__Test) {
        Pizza* p = new Pizza;

        p->cost();

        Olio_Tartufato* ot = new Olio_Tartufato(p);
        ot->cost();
        ASSERT_TRUE(p->cost());

}
TEST(Pizza, Funghi_Porcini) {
        Pizza* p = new Pizza;

        p->cost();

        Funghi_Porcini* fp = new Funghi_Porcini(p);
        fp->cost();
        ASSERT_TRUE(fp->cost());

}
TEST(Pizza, Bufala) {
        Pizza* p = new Pizza;

        p->cost();

        Bufala* b = new Bufala(p);
        b->cost();
        ASSERT_TRUE(b->cost());

}
TEST(Pizza, Olio_Tartufato_Funghi_Porcini) {
        Pizza* p = new Pizza;

        p->cost();

        Olio_Tartufato* ot = new Olio_Tartufato(p);
        ot->cost();

        Funghi_Porcini* fp = new Funghi_Porcini(ot);
        fp->cost();
ASSERT_EQ(fp->cost(),7);

}
TEST(Pizza, Pizza_Con_Olio_Test) {
        Pizza *p = new Pizza;

        p->cost();

        Olio_Tartufato *ot = new Olio_Tartufato(p);
        ot->cost();
        ASSERT_EQ(ot->cost(), 5);
}
TEST(Pizza, Bufala_Funghi) {
        Pizza *p = new Pizza;

        p->cost();

        Bufala *b = new Bufala(p);
        b->cost();

        Funghi_Porcini *fp = new Funghi_Porcini(b);
        fp->cost();
        ASSERT_EQ(fp->cost(), 8);
}
TEST(Pizza, Pizza_Con_Olio_Bufala_Funghi) {
        Pizza *p = new Pizza;

        p->cost();

        Olio_Tartufato *ot = new Olio_Tartufato(p);
        ot->cost();

        Bufala *b= new Bufala(ot);
        b->cost();

        Funghi_Porcini *fp= new Funghi_Porcini(b);
        fp->cost();
        ASSERT_EQ(fp->cost(), 9);
}

