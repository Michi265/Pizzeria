//
// Created by michela on 04/03/17.
//

#include "Panels.h"

#include <wx/stattext.h>
#include "Communicate.h"
#include "FrameProgetto.h"
/*

LeftPanel::LeftPanel(wxPanel * parent)
        : wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
    count = 0;

    m_add = new wxButton( this, ID_ADD, wxT("Add"), wxPoint(-1,-1));
    m_total = new wxPanel( this, ID_TOTAL, wxPoint(-1,-1));
    m_ingredients = new wxCheckListBox( this, ID_INGREDIENTS,wxPoint(-1,-1));
    m_menu = new wxListBox( this, ID_MENU,wxPoint(-1,-1));

    Connect(ID_ADD, wxEVT_COMMAND_BUTTON_CLICKED,
            wxCommandEventHandler(LeftPanel::OnAdd));
}

void LeftPanel::OnAdd(wxCommandEvent & WXUNUSED(event))
{
    count++;

    Communicate *comm = (Communicate *) m_parent->GetParent();
    comm->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"), count));
}

void LeftPanel::OnMenu(wxCommandEvent &event) {

}

void LeftPanel::OnIngredients(wxCommandEvent &event) {

}

void LeftPanel::OnTotal(wxCommandEvent &event) {

}



RightPanel::RightPanel(wxPanel * parent)
        : wxPanel(parent, wxID_ANY, wxDefaultPosition,
                  wxSize(270, 150), wxBORDER_SUNKEN)
{
    m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(40, 60));
}
*/