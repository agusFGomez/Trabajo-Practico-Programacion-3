#include "Bajadecuentas.h"


//(*InternalHeaders(Bajadecuentas)









//(*IdInit(Bajadecuentas)








BEGIN_EVENT_TABLE(Bajadecuentas,wxFrame)
	//(*EventTable(Bajadecuentas)
	//*)
END_EVENT_TABLE()

Bajadecuentas::Bajadecuentas(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Bajadecuentas)


























    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Bajadecuentas::OnMenuItem1Selected);

}

Bajadecuentas::~Bajadecuentas()
{
	//(*Destroy(Bajadecuentas)
	//*)
}

void Bajadecuentas::OnMenuItem1Selected(wxCommandEvent& event){
    Close();
}



