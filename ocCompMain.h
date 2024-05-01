/***************************************************************
 * Name:      ocCompMain.h
 * Purpose:   Defines Application Frame
 * Author:    Mr. Arch Brooks (arch@archman.us)
 * Created:   2024-05-01
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

#ifndef OCCOMPMAIN_H
#define OCCOMPMAIN_H

//(*Headers(ocCompFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class ocCompFrame: public wxFrame
{
    public:

        ocCompFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~ocCompFrame();

    private:

        //(*Handlers(ocCompFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(ocCompFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(ocCompFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // OCCOMPMAIN_H
