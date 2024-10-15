// -*- C++ -*-
//
// generated by wxGlade 1.0.4 on Tue Oct 15 12:03:40 2024
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/intl.h>

#ifndef APP_CATALOG
#define APP_CATALOG "app"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/notebook.h>
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class DialogSettings: public wxDialog {
public:
    // begin wxGlade: DialogSettings::ids
    // end wxGlade

    DialogSettings(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:

protected:
    // begin wxGlade: DialogSettings::attributes
    wxNotebook* notebook_settings;
    wxPanel* notebook_settings_pane_conn;
    wxCheckBox* checkbox_fastrequest;
    wxStaticText* label_fastrequest;
    wxSlider* slider_fastrequest;
    wxCheckBox* checkbox_qos_ef;
    wxCheckBox* checkbox_multicast;
    wxStaticText* label_socketrecvbuf;
    wxSlider* slider_socketrecvbuf;
    wxStaticText* label_recvbuf;
    wxSlider* slider_recvbuf;
    wxPanel* notebook_settings_pane_encodings;
    wxCheckBox* checkbox_enc_copyrect;
    wxCheckBox* checkbox_enc_hextile;
    wxCheckBox* checkbox_enc_rre;
    wxCheckBox* checkbox_enc_corre;
    wxCheckBox* checkbox_enc_zlib;
    wxCheckBox* checkbox_enc_zlibhex;
    wxCheckBox* checkbox_enc_zrle;
    wxCheckBox* checkbox_enc_zywrle;
    wxCheckBox* checkbox_enc_ultra;
    wxCheckBox* checkbox_enc_tight;
    wxStaticText* label_compresslevel;
    wxSlider* slider_compresslevel;
    wxStaticText* label_quality;
    wxSlider* slider_quality;
    wxPanel* notebook_settings_pane_logging;
    wxCheckBox* checkbox_logfile;
    wxCheckBox* checkbox_stats_save;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGSETTINGS_H
