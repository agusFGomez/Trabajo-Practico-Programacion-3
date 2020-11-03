#include "Bajadecuentas.h"


//(*InternalHeaders(Bajadecuentas)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Bajadecuentas)
const long Bajadecuentas::ID_STATICTEXT1 = wxNewId();
const long Bajadecuentas::ID_TEXTCTRL1 = wxNewId();
const long Bajadecuentas::ID_STATICTEXT2 = wxNewId();
const long Bajadecuentas::ID_STATICTEXT3 = wxNewId();
const long Bajadecuentas::ID_BUTTON1 = wxNewId();
const long Bajadecuentas::ID_MENUITEM1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Bajadecuentas,wxFrame)
	//(*EventTable(Bajadecuentas)
	//*)
END_EVENT_TABLE()

Bajadecuentas::Bajadecuentas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Bajadecuentas)
	Create(parent, id, _("Baja de Cuentas"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(450,450));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,220,185));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_DOWN")),wxART_FRAME_ICON));
		SetIcon(FrameIcon);
	}
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese los datos solicitados a continuacion"), wxPoint(64,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	txtNro = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(232,120), wxSize(100,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Nro de cuenta:"), wxPoint(136,128), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	labelEstado = new wxStaticText(this, ID_STATICTEXT3, wxEmptyString, wxPoint(144,176), wxSize(176,40), 0, _T("ID_STATICTEXT3"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Dar de baja"), wxPoint(176,256), wxSize(88,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Volver al inicio"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("Menu"));
	SetMenuBar(MenuBar1);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Bajadecuentas::OnMenuItem1Selected);
	//*)
}

Bajadecuentas::~Bajadecuentas()
{
	//(*Destroy(Bajadecuentas)
	//*)
}

void Bajadecuentas::OnMenuItem1Selected(wxCommandEvent& event){
    Close();
}




