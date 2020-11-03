#include "Altas.h"
#include <fstream>
#include "Cliente.h"
#include <wx/string.h>
//(*InternalHeaders(Altas)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Altas)
const long Altas::ID_BUTTON1 = wxNewId();
const long Altas::ID_TEXTCTRL1 = wxNewId();
const long Altas::ID_TEXTCTRL2 = wxNewId();
const long Altas::ID_TEXTCTRL3 = wxNewId();
const long Altas::ID_TEXTCTRL4 = wxNewId();
const long Altas::ID_TEXTCTRL5 = wxNewId();
const long Altas::ID_STATICTEXT1 = wxNewId();
const long Altas::ID_STATICTEXT2 = wxNewId();
const long Altas::ID_STATICTEXT3 = wxNewId();
const long Altas::ID_STATICTEXT4 = wxNewId();
const long Altas::ID_STATICTEXT5 = wxNewId();
const long Altas::ID_STATICTEXT6 = wxNewId();
const long Altas::ID_STATICTEXT7 = wxNewId();
const long Altas::ID_STATICTEXT8 = wxNewId();
const long Altas::ID_MENUITEM1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Altas,wxFrame)
	//(*EventTable(Altas)
	//*)
END_EVENT_TABLE()

Altas::Altas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Altas)
	Create(parent, id, _("Alta de cliente"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,220,185));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_UP")),wxART_FRAME_ICON));
		SetIcon(FrameIcon);
	}
	Button1 = new wxButton(this, ID_BUTTON1, _("Dar de alta"), wxPoint(192,384), wxSize(104,40), wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetBackgroundColour(wxColour(192,192,192));
	wxFont Button1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	txtNom = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(248,120), wxSize(88,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	txtApe = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(248,160), wxSize(88,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	txtDni = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(248,200), wxSize(88,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txtTel = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(248,240), wxSize(88,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	txtDir = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxPoint(248,280), wxSize(88,32), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ingrese los datos para un nuevo cliente:"), wxPoint(104,56), wxSize(296,32), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Nombre:"), wxPoint(152,128), wxSize(56,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Apellido:"), wxPoint(152,168), wxSize(60,16), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("DNI:"), wxPoint(168,208), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Telefono:"), wxPoint(152,248), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Direccion:"), wxPoint(152,288), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, wxEmptyString, wxPoint(144,344), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	labelEstado = new wxStaticText(this, ID_STATICTEXT8, wxEmptyString, wxPoint(160,328), wxSize(168,32), 0, _T("ID_STATICTEXT8"));
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Volver al inicio"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("Menu"));
	SetMenuBar(MenuBar1);

	Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Altas::OnMenuItem1Selected);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Altas::OnButtonAltaClick);
	//*)
}

Altas::~Altas()
{
	//(*Destroy(Altas)
	//*)
}

void Altas::OnMenuItem1Selected(wxCommandEvent& event){
    Close();
}

void Altas::OnButtonAltaClick(wxCommandEvent& event){
    Cliente reg,cli;
    fstream arch;
    int d,tel;
    wxString n,a,dir;
    arch.open("Clientes.dat",ios::app|ios::binary);
    if(!arch)    {
        labelEstado->SetLabel("Error de apertura de archivo");
        Close();
    }
    arch.close();
    arch.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!arch){
        labelEstado->SetLabel("Error de apertura de archivo");
        Close();
    }

    wxString aux = txtDni->GetValue();
    d=wxAtoi(aux);
    n = txtNom->GetValue();
    a = txtApe->GetValue();
    aux=txtTel->GetValue();
    tel = wxAtoi(aux);
    cli.setDni(d);
    cli.buscar(arch);
    if(!arch.eof())
            labelEstado->SetLabel("Alta existente");
    else
        {
            arch.clear();
            reg.setDni(d);
            reg.setNombre(n.ToStdString());
            reg.setApellido(a.ToStdString());
            reg.setTelefono(tel);
            reg.setDireccion(dir.ToStdString());
            reg.setBorrado(0);
            arch.seekp(0,ios::end);
            arch.write(reinterpret_cast<const char *>(&reg),sizeof(Cliente));
            labelEstado->SetLabel("El alta se ha concretado");
        }
    arch.close();
}
