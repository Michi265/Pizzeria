///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FrameProgetto.h"

#include "PizzaFactory.h"
#include "Pizza.h"
#include "Ingredient.h"
#include <wx/stattext.h>
#include "IngredientsFactory.h"
#include <string>



///////////////////////////////////////////////////////////////////////////

MyFrame::MyFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 2, 0, 0 );
	
	m_menu = new wxListBox( this, ID_MENU, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_MULTIPLE );
	m_menu->Append( wxT("Margherita") );
	m_menu->Append( wxT("Marinara") );
	m_menu->Append( wxT("Napoli") );
	m_menu->Append( wxEmptyString );
	gSizer1->Add( m_menu, 0, wxALL, 20 );
	
	wxString m_ingredientsChoices[] = { wxT("Olio tartufato"), wxT("Bufala"), wxT("Funghi porcini") };
	int m_ingredientsNChoices = sizeof( m_ingredientsChoices ) / sizeof( wxString );
	m_ingredients = new wxCheckListBox( this, ID_INGREDIENTS, wxDefaultPosition, wxDefaultSize, m_ingredientsNChoices, m_ingredientsChoices,wxLB_MULTIPLE );
	gSizer1->Add( m_ingredients, 0, wxALL, 15 );
	
	m_add = new wxButton( this, ID_ADD, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_add, 0, wxALL, 5 );

	m_panel = new wxPanel( this, ID_TOTAL, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_remove = new wxButton( m_panel, wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_remove, 0, wxALL|wxALIGN_RIGHT, 5 );

    m_total = new wxListBox( m_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_MULTIPLE );
    bSizer1->Add( m_total, 1, wxALL|wxEXPAND, 5 );


    m_panel->SetSizer( bSizer1 );
	m_panel->Layout();
	bSizer1->Fit( m_panel );
	gSizer1->Add( m_panel, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( gSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );

	// Connect Events
	m_add->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::OnclickAdd ), NULL, this );
}


void MyFrame::OnclickAdd(wxCommandEvent &event)  {
	std::cerr << "m_menu->GetSelection(): " <<m_menu->GetSelection() << std::endl;
    Pizza *pizza = PizzaFactory(m_menu->GetSelection()).CreatePizza();

   int prezzo = pizza->cost();
    std::cerr << "pizza->cost(): " << pizza->cost() <<std::endl;

    std::cerr << "m_ingredients->GetCount():" << m_ingredients->GetCount() << std::endl;
    wxArrayInt selectedIngredients;
    int numIng = m_ingredients->GetSelections(selectedIngredients);
    std::cerr << "selectedIngredients num. ing.:" << numIng << std::endl;
    for (int i = 0; i < numIng; i++)
        std::cerr << "selectedIngredients[" << i << "]:" << selectedIngredients[i] << std::endl;

    Ingredient *ingredient = IngredientsFactory(selectedIngredients[0]).CreateIngredients();

    int prezzo_I = ingredient->getCost();
    std::cerr << "ingredient->getCost(): " << ingredient->getCost() <<std::endl;


    m_total->SetLabel(wxString::Format(wxT("%s"), pizza->getpizzaid()));
    m_total->SetLabel(wxString::Format(wxT("%s"), ingredient->getCost()));
}
MyFrame::~MyFrame()
{
    // Disconnect Events
    m_add->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::OnclickAdd ), NULL, this );

}