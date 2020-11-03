#include "Modificaciones.h"

//(*InternalHeaders(Modificaciones)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Modificaciones)
const long Modificaciones::ID_BUTTON1 = wxNewId();
const long Modificaciones::ID_STATICTEXT1 = wxNewId();
const long Modificaciones::ID_RADIOBOX1 = wxNewId();
const long Modificaciones::ID_STATICBOX3 = wxNewId();
const long Modificaciones::ID_TEXTCTRL1 = wxNewId();
const long Modificaciones::ID_TEXTCTRL2 = wxNewId();
const long Modificaciones::ID_STATICTEXT2 = wxNewId();
const long Modificaciones::ID_STATICTEXT3 = wxNewId();
const long Modificaciones::ID_MENUITEM1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Modificaciones,wxFrame)
	//(*EventTable(Modificaciones)
	//*)
END_EVENT_TABLE()

Modificaciones::Modificaciones(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Modificaciones)
	Create(parent, id, _("Modificacion de los datos del Cliente"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxDEFAULT_FRAME_STYLE|wxFULL_REPAINT_ON_RESIZE, _T("id"));
	SetClientSize(wxSize(500,500));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,220,185));
	Button1 = new wxButton(this, ID_BUTTON1, _("Modificar"), wxPoint(200,360), wxSize(88,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	labelEstado = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxPoint(128,296), wxSize(256,48), wxTRANSPARENT_WINDOW, _T("ID_STATICTEXT1"));
	wxString __wxRadioBoxChoices_1[2] =
	{
		_("telefono"),
		_("direccion")
	};
	RadioBox1 = new wxRadioBox(this, ID_RADIOBOX1, _("Seleccione una opcion:"), wxPoint(96,200), wxSize(153,72), 2, __wxRadioBoxChoices_1, 1, wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_RADIOBOX1"));
	wxFont RadioBox1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	RadioBox1->SetFont(RadioBox1Font);
	StaticBox3 = new wxStaticBox(this, ID_STATICBOX3, _("Ingrese los datos del cliente"), wxPoint(120,56), wxSize(256,20), 0, _T("ID_STATICBOX3"));
	wxFont StaticBox3Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticBox3->SetFont(StaticBox3Font);
	txtDato = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(296,224), wxSize(128,40), wxTE_LEFT|wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	txtDni = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(232,120), wxSize(104,32), wxDOUBLE_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Ingrese dato:"), wxPoint(320,200), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Dni:"), wxPoint(192,128), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Volver al inicio"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("Menu"));
	SetMenuBar(MenuBar1);

     Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Modificaciones::OnMenuItem1Selected);
	//Connect(ID_RADIOBOX1,wxEVT_COMMAND_RADIOBOX_SELECTED,(wxObjectEventFunction)&Modificaciones::OnRadioBox1Select);
	//*)
}

Modificaciones::~Modificaciones()
{
	//(*Destroy(Modificaciones)
	//*)
}

void Modificaciones::OnMenuItem1Selected (wxCommandEvent& event){
    Close();
}
