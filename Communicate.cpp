//
// Created by michela on 04/03/17.
//

#include "Communicate.h"


Communicate::Communicate(const wxString& title)
       : MyFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(400, 300))
{
  m_panel= new wxPanel(this, ID_TOTAL);



  this->Centre();
}
