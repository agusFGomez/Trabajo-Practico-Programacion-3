#ifndef MODIFICACIONES_H
#define MODIFICACIONES_H

//(*Headers(Modificaciones)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/radiobox.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Modificaciones: public wxFrame
{
	public:

		Modificaciones(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Modificaciones();

		//(*Declarations(Modificaciones)
		wxButton* Button1;
		wxMenu* Menu1;
		wxMenuBar* MenuBar1;
		wxMenuItem* MenuItem1;
		wxRadioBox* RadioBox1;
		wxStaticBox* StaticBox3;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* labelEstado;
		wxTextCtrl* txtDato;
		wxTextCtrl* txtDni;
		//*)

	protected:

		//(*Identifiers(Modificaciones)
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_RADIOBOX1;
		static const long ID_STATICBOX3;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_MENUITEM1;
		//*)

	private:

		//(*Handlers(Modificaciones)
		void OnRadioBox1Select(wxCommandEvent& event);
		void OnMenuItem1Selected(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
