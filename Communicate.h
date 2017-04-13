//
// Created by michela on 04/03/17.
//

#ifndef PIZZERIA_COMMUNICATE_H
#define PIZZERIA_COMMUNICATE_H

#include "Panels.h"
#include "FrameProgetto.h"
#include <wx/wxprec.h>


class Communicate : public MyFrame
{
public:
    Communicate(const wxString& title);

    wxListBox* m_menu;
    wxCheckListBox* m_ingredients;
    wxButton* m_add;
    wxPanel* m_panel;
    wxListBox* m_total;
    wxButton* m_remove;


};


#endif //PIZZERIA_COMMUNICATE_H
