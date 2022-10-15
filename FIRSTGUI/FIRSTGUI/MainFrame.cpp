#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel, wxID_ANY, "Convert", wxPoint(100, 300), wxSize(100, 35) );
	//wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "checkBox", wxPoint(201, 200));
	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Select from the following options", wxPoint(80, 170));
	wxTextCtrl* textCrtl = new wxTextCtrl(panel, wxID_ANY, "Message Text", wxPoint(100, 250), wxSize(200, -1));
	
	
	wxArrayString choices;
	choices.Add("Image");
	choices.Add("Text Only");

	wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "Choices", wxPoint(100, 200), wxDefaultSize, choices);

} 
