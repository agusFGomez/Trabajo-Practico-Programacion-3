#ifndef MOVIMIENTOSDECUENTAS_H
#define MOVIMIENTOSDECUENTAS_H

//(*Headers(Movimientosdecuentas)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Movimientosdecuentas: public wxFrame
{
	public:

		Movimientosdecuentas(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Movimientosdecuentas();

		//(*Declarations(Movimientosdecuentas)
		wxButton* Button1;
		wxChoice* Choice1;
		wxMenu* Menu1;
		wxMenuBar* MenuBar1;
		wxMenuItem* MenuItem1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText5;
		wxStaticText* labelEstado;
		wxTextCtrl* txtMonto;
		wxTextCtrl* txtNro;
		//*)

	protected:

		//(*Identifiers(Movimientosdecuentas)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_MENUITEM1;
		//*)

	private:

		//(*Handlers(Movimientosdecuentas)
        void OnMenuItem1Selected(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
