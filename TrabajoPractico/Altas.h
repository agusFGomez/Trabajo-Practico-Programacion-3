#ifndef ALTAS_H
#define ALTAS_H

//(*Headers(Altas)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Altas: public wxFrame
{
	public:

		Altas(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Altas();

		//(*Declarations(Altas)
		wxButton* Button1;
		wxMenu* Menu1;
		wxMenuBar* MenuBar1;
		wxMenuItem* MenuItem1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* labelEstado;
		wxTextCtrl* txtApe;
		wxTextCtrl* txtDir;
		wxTextCtrl* txtDni;
		wxTextCtrl* txtNom;
		wxTextCtrl* txtTel;
		//*)

	protected:

		//(*Identifiers(Altas)
		static const long ID_BUTTON1;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_TEXTCTRL4;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_MENUITEM1;
		//*)

	private:

		//(*Handlers(Altas)
        void OnMenuItem1Selected(wxCommandEvent& event);
        void OnButtonAltaClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
