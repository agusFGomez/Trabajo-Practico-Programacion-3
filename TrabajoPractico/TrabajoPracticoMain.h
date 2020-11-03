/***************************************************************
 * Name:      TrabajoPracticoMain.h
 * Purpose:   Defines Application Frame
 * Author:    Agustina Gomez (agusflopigomez@gmail.com)
 * Created:   2020-10-20
 * Copyright: Agustina Gomez ()
 * License:
 **************************************************************/

#ifndef TRABAJOPRACTICOMAIN_H
#define TRABAJOPRACTICOMAIN_H

//(*Headers(TrabajoPracticoFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statbox.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class TrabajoPracticoFrame: public wxFrame
{
    public:

        TrabajoPracticoFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~TrabajoPracticoFrame();

    private:


        //(*Identifiers(TrabajoPracticoFrame)
        static const long ID_BUTTON5;
        static const long ID_STATICBOX1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE2;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT2;
        static const long ID_STATICLINE3;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long idMenuQuit;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM4;
        static const long idAltas;
        static const long ID_MENUITEM5;
        static const long ID_MENUITEM6;
        static const long idBajas;
        static const long ID_MENUITEM7;
        static const long ID_MENUITEM8;
        static const long idModificaciones;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(TrabajoPracticoFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxMenu* Menu3;
        wxMenu* MenuItem3;
        wxMenu* MenuItem4;
        wxMenu* MenuItem5;
        wxMenu* MenudeAcciones;
        wxMenuItem* MenuItem10;
        wxMenuItem* MenuItem11;
        wxMenuItem* MenuItem6;
        wxMenuItem* MenuItem7;
        wxMenuItem* MenuItem8;
        wxMenuItem* MenuItem9;
        wxStaticBox* StaticBox1;
        wxStaticLine* StaticLine2;
        wxStaticLine* StaticLine3;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStatusBar* StatusBar1;
        //*)

        //(*Handlers(TrabajoPracticoFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnMenuItem3Selected(wxCommandEvent& event);
        void OnMenuItem4Selected(wxCommandEvent& event);
        void OnMenuItem5Selected(wxCommandEvent& event);
        void OnMenuItem6Selected(wxCommandEvent& event);
        void OnMenuItem7Selected(wxCommandEvent& event);
        void OnMenuItem8Selected(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TRABAJOPRACTICOMAIN_H
