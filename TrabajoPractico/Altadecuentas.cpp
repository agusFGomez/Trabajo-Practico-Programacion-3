#include "Altadecuentas.h"
#include "Cuenta.h"
#include <fstream>
#include <wx/string.h>
//(*InternalHeaders(Altadecuentas)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Altadecuentas)
const long Altadecuentas::ID_STATICTEXT1 = wxNewId();
const long Altadecuentas::ID_TEXTCTRL1 = wxNewId();
const long Altadecuentas::ID_STATICTEXT2 = wxNewId();
const long Altadecuentas::ID_TEXTCTRL2 = wxNewId();
const long Altadecuentas::ID_STATICTEXT4 = wxNewId();
const long Altadecuentas::ID_STATICTEXT5 = wxNewId();
const long Altadecuentas::ID_STATICTEXT6 = wxNewId();
const long Altadecuentas::ID_BUTTON1 = wxNewId();
const long Altadecuentas::ID_STATICTEXT7 = wxNewId();
const long Altadecuentas::ID_CHOICE1 = wxNewId();
const long Altadecuentas::ID_STATICTEXT8 = wxNewId();
const long Altadecuentas::ID_TEXTCTRL3 = wxNewId();
const long Altadecuentas::ID_MENUITEM1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Altadecuentas,wxFrame)
	//(*EventTable(Altadecuentas)
	//*)
END_EVENT_TABLE()

Altadecuentas::Altadecuentas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Altadecuentas)
	Create(parent, id, _("Alta de Cuentas"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(450,450));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,221,187));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_UP")),wxART_FRAME_ICON));
		SetIcon(FrameIcon);
	}
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese los datos para una cuenta:"), wxPoint(96,40), wxSize(257,17), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	txtNro = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(208,96), wxSize(100,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _(" Nro de cuenta:"), wxPoint(88,104), wxSize(88,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	txtSaldo = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(208,256), wxSize(100,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Saldo:"), wxPoint(128,264), wxSize(48,16), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Dni del cliente:"), wxPoint(88,208), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("El interes es del 5%"), wxPoint(168,312), wxSize(440,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(9,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("Dar de alta"), wxPoint(176,376), wxSize(88,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	labelEstado = new wxStaticText(this, ID_STATICTEXT7, wxEmptyString, wxPoint(96,344), wxSize(272,24), 0, _T("ID_STATICTEXT7"));
	Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(208,152), wxSize(112,20), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("Cuenta de ahorro"));
	Choice1->Append(_("Cuenta Corriente"));
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Tipo de cuenta:"), wxPoint(88,152), wxSize(-1,-1), 0, _T("ID_STATICTEXT8"));
	wxFont StaticText8Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	txtDni = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(208,200), wxSize(100,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Volver al inicio"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("Menu"));
	SetMenuBar(MenuBar1);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Altadecuentas::OnMenuItem1Selected);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Altadecuentas::OnButtonAltaClick);
	//*)
}

Altadecuentas::~Altadecuentas()
{
	//(*Destroy(Altadecuentas)
	//*)
}

void Altadecuentas::OnMenuItem1Selected(wxCommandEvent& event){
    Close();
}

void Altadecuentas::OnButtonAltaClick(wxCommandEvent& event){
    labelEstado->SetLabel("Llegue");
    Cuenta reg,cuent;
    fstream arch;
    int d,nro;
    wxString tipo;
    double saldo;
    arch.open("Cuentas.dat",ios::app|ios::binary);
    labelEstado->SetLabel("Llegue");
    if(!arch){
        labelEstado->SetLabel("Error de apertura de archivo");
        Close();
    }
    arch.close();
    arch.open("Cuentas.dat",ios::in|ios::out |ios::binary);
    if(!arch){
        labelEstado->SetLabel("Error de apertura de archivo");
        Close();
    }

    wxString aux = txtDni->GetValue();
    d=wxAtoi(aux);
    aux= txtNro->GetValue();
    nro=wxAtoi(aux);
    tipo=Choice1->GetStringSelection();
    aux=txtSaldo->GetValue();
    aux.ToDouble(&saldo);
    cuent.setNro(nro);
    cuent.buscar(arch);
    if(!arch.eof())
            labelEstado->SetLabel("Alta existente");
    else
        {
            arch.clear();
            reg.setDni(d);
            reg.setNro(nro);
            reg.setSaldo(saldo);
            reg.setTipo(tipo.ToStdString());
            reg.setBorrado(0);
            arch.seekp(0,ios::end);
            arch.write(reinterpret_cast<const char *>(&reg),sizeof(Cuenta));
            labelEstado->SetLabel("El alta se ha concretado");
        }
    arch.close();
}

