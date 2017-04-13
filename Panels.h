//
// Created by michela on 04/03/17.
//
/*
#ifndef PIZZERIA_PANELS_H
#define PIZZERIA_PANELS_H


#include <wx/wx.h>
#include <wx/panel.h>
#include "FrameProgetto.h"
#include "Pizza.h"

class LeftPanel : public MyFrame
{
public:
    LeftPanel(wxPanel *parent);

    void OnMenu(wxCommandEvent & event);
    void OnIngredients(wxCommandEvent & event);
    void OnAdd(wxCommandEvent & event);
    void OnTotal(wxCommandEvent & event);


    wxListBox *m_menu;
    wxCheckListBox *m_ingredients;
    wxButton *m_add;
    wxPanel *m_total;
    int count;

};

class RightPanel : public wxPanel
{
public:
    RightPanel(wxPanel *parent);

    void OnSetText(wxCommandEvent & event);

    wxStaticText *m_text;

};



#endif //PIZZERIA_PANELS_H
*/