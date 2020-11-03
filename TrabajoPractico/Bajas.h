#ifndef BAJAS_H
#define BAJAS_H

//(*Headers(Bajas)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Bajas: public wxFrame
{
	public:

		Bajas(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Bajas();

		//(*Declarations(Bajas)
		wxButton* Button1;
		wxMenu* Menu1;
		wxMenuBar* MenuBar1;
		wxMenuItem* MenuItem1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* labelEstado;
		wxTextCtrl* txtDni;
		//*)

	protected:

		//(*Identifiers(Bajas)
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_MENUITEM1;
		//*)

	private:

		//(*Handlers(Bajas)
		void OnClose(wxCloseEvent& event);

		void OnMenuItem1Selected(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
