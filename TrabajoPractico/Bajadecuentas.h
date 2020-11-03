#ifndef BAJADECUENTAS_H
#define BAJADECUENTAS_H

//(*Headers(Bajadecuentas)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Bajadecuentas: public wxFrame
{
	public:

		Bajadecuentas(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Bajadecuentas();

		//(*Declarations(Bajadecuentas)
		wxButton* Button1;
		wxMenu* Menu1;
		wxMenuBar* MenuBar1;
		wxMenuItem* MenuItem1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* labelEstado;
		wxTextCtrl* txtNro;
		//*)

	protected:

		//(*Identifiers(Bajadecuentas)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON1;
		static const long ID_MENUITEM1;
		//*)

	private:

		//(*Handlers(Bajadecuentas)
            void OnMenuItem1Selected(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
