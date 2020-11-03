/***************************************************************
 * Name:      TrabajoPracticoMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Agustina Gomez (agusflopigomez@gmail.com)
 * Created:   2020-10-20
 * Copyright: Agustina Gomez ()
 * License:
 **************************************************************/

#include "TrabajoPracticoMain.h"
#include "Altas.h"
#include "Altadecuentas.h"
#include "Bajas.h"
#include "Bajadecuentas.h"
#include "Modificaciones.h"
#include "Movimientosdecuentas.h"
#include "Cliente.h"
#include <iomanip>
#include <wx/msgdlg.h>

//(*InternalHeaders(TrabajoPracticoFrame)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(TrabajoPracticoFrame)
const long TrabajoPracticoFrame::ID_BUTTON5 = wxNewId();
const long TrabajoPracticoFrame::ID_STATICBOX1 = wxNewId();
const long TrabajoPracticoFrame::ID_BUTTON1 = wxNewId();
const long TrabajoPracticoFrame::ID_STATICLINE2 = wxNewId();
const long TrabajoPracticoFrame::ID_BUTTON2 = wxNewId();
const long TrabajoPracticoFrame::ID_BUTTON3 = wxNewId();
const long TrabajoPracticoFrame::ID_BUTTON4 = wxNewId();
const long TrabajoPracticoFrame::ID_STATICTEXT2 = wxNewId();
const long TrabajoPracticoFrame::ID_STATICLINE3 = wxNewId();
const long TrabajoPracticoFrame::ID_STATICTEXT3 = wxNewId();
const long TrabajoPracticoFrame::ID_STATICTEXT4 = wxNewId();
const long TrabajoPracticoFrame::idMenuQuit = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM1 = wxNewId();
const long TrabajoPracticoFrame::idMenuAbout = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM2 = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM3 = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM4 = wxNewId();
const long TrabajoPracticoFrame::idAltas = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM5 = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM6 = wxNewId();
const long TrabajoPracticoFrame::idBajas = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM7 = wxNewId();
const long TrabajoPracticoFrame::ID_MENUITEM8 = wxNewId();
const long TrabajoPracticoFrame::idModificaciones = wxNewId();
const long TrabajoPracticoFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TrabajoPracticoFrame,wxFrame)
    //(*EventTable(TrabajoPracticoFrame)
    //*)
END_EVENT_TABLE()

TrabajoPracticoFrame::TrabajoPracticoFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(TrabajoPracticoFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, _("Frame Principal"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL|wxSTATIC_BORDER|wxNO_FULL_REPAINT_ON_RESIZE|wxALWAYS_SHOW_SB, _T("id"));
    SetClientSize(wxSize(550,550));
    Move(wxDefaultPosition);
    SetMinSize(wxSize(550,550));
    SetBackgroundColour(wxColour(255,210,233));
    wxFont thisFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
    SetFont(thisFont);
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_HOME")),wxART_FRAME_ICON));
    	SetIcon(FrameIcon);
    }
    Button1 = new wxButton(this, ID_BUTTON5, _("Calcular interes mesual"), wxPoint(56,144), wxSize(200,32), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button1->SetMaxSize(wxSize(100,100));
    StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Bienvenido al E-Bank"), wxPoint(144,32), wxSize(224,32), wxTRANSPARENT_WINDOW, _T("ID_STATICBOX1"));
    StaticBox1->SetBackgroundColour(wxColour(255,215,235));
    wxFont StaticBox1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
    StaticBox1->SetFont(StaticBox1Font);
    Button2 = new wxButton(this, ID_BUTTON1, _("Listado de movivmientos"), wxPoint(56,192), wxSize(200,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxPoint(0,80), wxSize(600,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    Button3 = new wxButton(this, ID_BUTTON2, _("Listados de cuentas"), wxPoint(56,240), wxSize(200,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button4 = new wxButton(this, ID_BUTTON3, _("Listado de cuentas corrientes"), wxPoint(56,288), wxSize(240,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button5 = new wxButton(this, ID_BUTTON4, _("Listado de cuentas de ahorro "), wxPoint(56,336), wxSize(240,32), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("¿Que desas hacer hoy\?"), wxPoint(168,96), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Britannic Bold"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxPoint(0,384), wxSize(600,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Alumnos:Agustina Gomez, Axel Sacca"), wxPoint(320,520), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Año: 2020"), wxPoint(464,496), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    MenuBar1 = new wxMenuBar();
    Menu3 = new wxMenu();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    Menu3->Append(ID_MENUITEM1, _("&File"), Menu1, wxEmptyString);
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    Menu3->Append(ID_MENUITEM2, _("Help"), Menu2, wxEmptyString);
    MenuBar1->Append(Menu3, _("Menu de ayuda"));
    MenudeAcciones = new wxMenu();
    MenuItem3 = new wxMenu();
    MenuItem6 = new wxMenuItem(MenuItem3, ID_MENUITEM3, _("Cliente"), _("Abre un nuevo frame"), wxITEM_NORMAL);
    MenuItem3->Append(MenuItem6);
    MenuItem7 = new wxMenuItem(MenuItem3, ID_MENUITEM4, _("Cuenta"), wxEmptyString, wxITEM_NORMAL);
    MenuItem3->Append(MenuItem7);
    MenudeAcciones->Append(idAltas, _("Altas"), MenuItem3, _("Altas"));
    MenuItem4 = new wxMenu();
    MenuItem8 = new wxMenuItem(MenuItem4, ID_MENUITEM5, _("Cliente"), wxEmptyString, wxITEM_NORMAL);
    MenuItem4->Append(MenuItem8);
    MenuItem9 = new wxMenuItem(MenuItem4, ID_MENUITEM6, _("Cuenta"), wxEmptyString, wxITEM_NORMAL);
    MenuItem4->Append(MenuItem9);
    MenudeAcciones->Append(idBajas, _("Bajas"), MenuItem4, wxEmptyString);
    MenuItem5 = new wxMenu();
    MenuItem10 = new wxMenuItem(MenuItem5, ID_MENUITEM7, _("Cliente"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(MenuItem10);
    MenuItem11 = new wxMenuItem(MenuItem5, ID_MENUITEM8, _("Transacciones"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(MenuItem11);
    MenudeAcciones->Append(idModificaciones, _("Modificaciones"), MenuItem5, wxEmptyString);
    MenuBar1->Append(MenudeAcciones, _("Menu de Acciones"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&TrabajoPracticoFrame::OnClose);
    Connect(ID_MENUITEM3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnMenuItem3Selected);
    Connect(ID_MENUITEM4,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnMenuItem4Selected);
    Connect(ID_MENUITEM5,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnMenuItem5Selected);
    Connect(ID_MENUITEM6,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnMenuItem6Selected);
    Connect(ID_MENUITEM7,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnMenuItem7Selected);
    Connect(ID_MENUITEM8,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnMenuItem8Selected);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TrabajoPracticoFrame::OnButton1Click);
    //*)
}

TrabajoPracticoFrame::~TrabajoPracticoFrame()
{
    //(*Destroy(TrabajoPracticoFrame)
    //*)
}

void TrabajoPracticoFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void TrabajoPracticoFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void TrabajoPracticoFrame::OnClose(wxCloseEvent& event)
{
     Close();
}

void TrabajoPracticoFrame::OnMenuItem3Selected(wxCommandEvent& event){
    Altas *fr=new Altas(this);
    fr->Show();
}

void TrabajoPracticoFrame::OnMenuItem4Selected(wxCommandEvent& event){
    Altadecuentas *fr=new Altadecuentas(this);
    fr->Show();
}
void TrabajoPracticoFrame::OnMenuItem5Selected(wxCommandEvent& event){
    Bajas *fr=new Bajas(this);
    fr->Show();
}
void TrabajoPracticoFrame::OnMenuItem6Selected(wxCommandEvent& event){
    Bajadecuentas *fr=new Bajadecuentas(this);
    fr->Show();
}
void TrabajoPracticoFrame::OnMenuItem7Selected(wxCommandEvent& event){
    Modificaciones *fr=new Modificaciones(this);
    fr->Show();
}
void TrabajoPracticoFrame::OnMenuItem8Selected(wxCommandEvent& event){
    Movimientosdecuentas *fr=new Movimientosdecuentas(this);
    fr->Show();
}

void TrabajoPracticoFrame::OnButton1Click(wxCommandEvent& event){

    wxString msg = "Listado de clientes";
    wxMessageBox(msg, _("Procesando..."));
    fstream arch;
    arch.open("Clientes.dat",ios::app|ios::binary);
    if(!arch)
    {
        msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("ERROR!!!"));
        Close();
    }
    arch.close();
    arch.open("Clientes.dat",ios::in|ios::out |ios::binary);
    if(!arch)
    {
        msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("ERROR!!!"));
        Close();
    }

    ofstream archt;
    Cliente reg;
    archt.open("Clientes.txt",ios::out);
    if(!archt)
    {
        msg = "Error de apertura de archivo";
        wxMessageBox(msg, _("ERROR!!!"));
    }
    archt<<left<<setw(10)<<"Dni"<<setw(20)<<"Nombre"<<setw(20)<<"Apellido"<<setw(10)<<"Telefono"<<setw(20)<<"Direccion"<<endl;

    arch.seekg(0);
    arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    while(!arch.eof())
    {
        archt<<left<<setw(10)<<reg.getDni()<<setw(20)<<reg.getNombre()<<setw(20)<<reg.getApellido()<<setw(10)<<reg.getTelefono()<<setw(20)<<reg.getDireccion()<<endl;
        arch.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    }
    archt.close();
    arch.close();
}
