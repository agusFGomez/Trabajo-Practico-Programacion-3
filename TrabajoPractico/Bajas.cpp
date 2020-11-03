#include "Bajas.h"

//(*InternalHeaders(Bajas)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Bajas)
const long Bajas::ID_BUTTON1 = wxNewId();
const long Bajas::ID_STATICTEXT1 = wxNewId();
const long Bajas::ID_TEXTCTRL1 = wxNewId();
const long Bajas::ID_STATICTEXT2 = wxNewId();
const long Bajas::ID_STATICTEXT3 = wxNewId();
const long Bajas::ID_MENUITEM1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Bajas,wxFrame)
	//(*EventTable(Bajas)
	//*)
END_EVENT_TABLE()

Bajas::Bajas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Bajas)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(500,350));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,220,185));
	Button1 = new wxButton(this, ID_BUTTON1, _("Dar de baja"), wxPoint(184,208), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	labelEstado = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxPoint(344,120), wxSize(112,40), wxTRANSPARENT_WINDOW, _T("ID_STATICTEXT1"));
	labelEstado->SetForegroundColour(wxColour(0,0,0));
	txtDni = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(224,120), wxSize(104,40), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Dni:"), wxPoint(176,128), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Ingrese acontinuacion los datos del cliente para eliminar :"), wxPoint(40,40), wxSize(416,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Volver al inicio"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("Menu"));
	SetMenuBar(MenuBar1);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Bajas::OnMenuItem1Selected);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Bajas::OnClose);
	//*)
}

Bajas::~Bajas()
{
	//(*Destroy(Bajas)
	//*)
}
void Bajas::OnClose(wxCloseEvent& event){
    Close();
}
void Bajas::OnMenuItem1Selected(wxCommandEvent& event){
    Close();
}
