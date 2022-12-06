#pragma once
#include <wx/wx.h>
// THIS IS WHERE U RUN CODE

class mainFrame : public wxFrame
{
public:
	mainFrame(const wxString& title);
private:
	void pressedEnt(wxCommandEvent& event);
};
