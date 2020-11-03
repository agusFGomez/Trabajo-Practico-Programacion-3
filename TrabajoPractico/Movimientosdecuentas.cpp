#include "Movimientosdecuentas.h"

//(*InternalHeaders(Movimientosdecuentas)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Movimientosdecuentas)
const long Movimientosdecuentas::ID_STATICTEXT1 = wxNewId();
const long Movimientosdecuentas::ID_TEXTCTRL1 = wxNewId();
const long Movimientosdecuentas::ID_CHOICE1 = wxNewId();
const long Movimientosdecuentas::ID_STATICTEXT2 = wxNewId();
const long Movimientosdecuentas::ID_TEXTCTRL2 = wxNewId();
const long Movimientosdecuentas::ID_STATICTEXT3 = wxNewId();
const long Movimientosdecuentas::ID_BUTTON1 = wxNewId();
const long Movimientosdecuentas::ID_STATICTEXT4 = wxNewId();
const long Movimientosdecuentas::ID_STATICTEXT5 = wxNewId();
const long Movimientosdecuentas::ID_MENUITEM1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Movimientosdecuentas,wxFrame)
	//(*EventTable(Movimientosdecuentas)
	//*)
END_EVENT_TABLE()

Movimientosdecuentas::Movimientosdecuentas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Movimientosdecuentas)
	Create(parent, id, _("Movimiento en las cuentas"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(450,450));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,220,185));
	wxFont thisFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Nro de Cuenta:"), wxPoint(104,96), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	txtNro = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(216,88), wxSize(100,32), wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(216,152), wxSize(112,23), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("Desposito"));
	Choice1->Append(_("Extraccion"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Tipo de movimiento:"), wxPoint(72,152), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	txtMonto = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(216,216), wxSize(100,32), wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Monto:"), wxPoint(136,224), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Aceptar"), wxPoint(168,328), wxSize(80,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	labelEstado = new wxStaticText(this, ID_STATICTEXT4, wxEmptyString, wxPoint(144,272), wxSize(160,40), 0, _T("ID_STATICTEXT4"));
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Ingrese los datos pedidos acontinuacion:"), wxPoint(64,32), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Volver al inicio"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("Menu"));
	SetMenuBar(MenuBar1);
	 Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Movimientosdecuentas::OnMenuItem1Selected);
	//*)
}

Movimientosdecuentas::~Movimientosdecuentas()
{
	//(*Destroy(Movimientosdecuentas)
	//*)
}

void Movimientosdecuentas::OnMenuItem1Selected(wxCommandEvent& event){
    Close();
}
