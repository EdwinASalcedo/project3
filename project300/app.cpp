#include "app.h"
#include <wx/wx.h>
#include "mainFrame.h"

wxIMPLEMENT_APP(app);
// THIS CREATES THE WINDOW AND WINDOW TITLE/SIZE

bool app::OnInit() {
	mainFrame* mainFramee = new mainFrame("COP3530 JohnVedanshEdwin");
	mainFramee->SetClientSize(800, 600);
	mainFramee->Center();
	mainFramee->Show();
	return true;
}
