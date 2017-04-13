//
// Created by michela on 13/03/17.
//

#include "MainFrame.h"
#include "FrameProgetto.h"
#include "Communicate.h"
#include <wx/stattext.h>
#include <iostream>


/*void MainFrame::OnclickAdd(wxCommandEvent &event) {
    std::cerr << "m_menu->GetSelection(): " <<m_menu->GetSelection() << std::endl;
    Pizza* pizza=PizzaFactory(m_menu->GetSelection()).CreatePizza();


   int prezzo=pizza->cost();
    std::cerr << "pizza->cost(): " << pizza->cost() <<std::endl;

    std::cerr << "m_ingredients->GetSelection(): " <<m_ingredients->GetSelection() << std::endl;
    Ingredient* ingredient=IngredientsFactory(m_ingredients->GetSelection()).CreateIngredients();
    int prezzo_I=ingredient->getCost();
    std::cerr << "ingredient->getCost(): " << ingredient->getCost() <<std::endl;
   Communicate *comm = (Communicate *) m_parent->GetParent();


    m_total->SetLabel(wxString::Format(wxT("%s"), pizza->getpizzaid()));
    m_ordine->SetLabel(wxString::Format(wxT("%s"),ingredient->getCost()));



}


/*void MainFrame::OnclickRemove(wxCommandEvent &event) {



    MyFrame::OnclickRemove(event);
}

*/

