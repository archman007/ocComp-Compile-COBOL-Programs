/***************************************************************
 * Name:      ocCompApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Mr. Arch Brooks (arch@archman.us)
 * Created:   2024-05-01
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

#include "ocCompApp.h"

//(*AppHeaders
#include "ocCompMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ocCompApp);

bool ocCompApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ocCompFrame* Frame = new ocCompFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
