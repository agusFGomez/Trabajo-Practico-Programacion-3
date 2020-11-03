/***************************************************************
 * Name:      TrabajoPracticoApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Agustina Gomez (agusflopigomez@gmail.com)
 * Created:   2020-10-20
 * Copyright: Agustina Gomez ()
 * License:
 **************************************************************/

#include "TrabajoPracticoApp.h"

//(*AppHeaders
#include "TrabajoPracticoMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(TrabajoPracticoApp);

bool TrabajoPracticoApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	TrabajoPracticoFrame* Frame = new TrabajoPracticoFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
