///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __FRAMEPROGETTO_H__
#define __FRAMEPROGETTO_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/listbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/checklst.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define ID_MENU 1000
#define ID_INGREDIENTS 1001
#define ID_ADD 1002
#define ID_TOTAL 1003

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame
///////////////////////////////////////////////////////////////////////////////
class MyFrame : public wxFrame 
{
	private:
	
	protected:
		wxListBox* m_menu;
		wxCheckListBox* m_ingredients;
		wxButton* m_add;
		wxPanel* m_panel;
		wxButton* m_remove;
		wxListBox* m_total;
		
		// Virtual event handlers, overide them in your derived class

    virtual void OnclickAdd( wxCommandEvent& event ) ;



	public:
		
		MyFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Pizzeria"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 50,50 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrame();
	
};

#endif //__FRAMEPROGETTO_H__
