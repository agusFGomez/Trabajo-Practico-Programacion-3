#ifndef ALTADECUENTAS_H
#define ALTADECUENTAS_H

//(*Headers(Altadecuentas)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Altadecuentas: public wxFrame
{
	public:

		Altadecuentas(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Altadecuentas();

		//(*Declarations(Altadecuentas)
		wxButton* Button1;
		wxChoice* Choice1;
		wxMenu* Menu1;
		wxMenuBar* MenuBar1;
		wxMenuItem* MenuItem1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText8;
		wxStaticText* labelEstado;
		wxTextCtrl* txtDni;
		wxTextCtrl* txtNro;
		wxTextCtrl* txtSaldo;
		//*)

	protected:

		//(*Identifiers(Altadecuentas)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT7;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL3;
		static const long ID_MENUITEM1;
		//*)

	private:

		//(*Handlers(Altadecuentas)
        void OnMenuItem1Selected(wxCommandEvent& event);
        void OnButtonAltaClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
