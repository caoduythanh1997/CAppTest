#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(1, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr,wxID_ANY, "PeeSoftware.com", wxPoint(30,30), wxSize(800,600))
{
	m_btn1 = new wxButton(this, 1, "Click Me", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_listBox = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent &evt)
{
	m_listBox->AppendString(m_txt1->GetValue());
	evt.Skip();
}