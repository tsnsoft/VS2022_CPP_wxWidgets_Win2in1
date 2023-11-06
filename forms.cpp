///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "forms.h"

///////////////////////////////////////////////////////////////////////////

Frame1::Frame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 125,150 ), wxSize( 125,150 ) );

	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Введите пароль:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	mainSizer->Add( m_staticText1, 0, wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD );
	mainSizer->Add( m_textCtrl1, 0, wxALL, 5 );

	m_button1 = new wxButton( this, wxID_ANY, _("ВОЙТИ"), wxDefaultPosition, wxDefaultSize, 0 );
	mainSizer->Add( m_button1, 0, wxALL, 5 );


	this->SetSizer( mainSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( Frame1::OnCloseFrame ) );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Frame1::myClick ), NULL, this );
}

Frame1::~Frame1()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( Frame1::OnCloseFrame ) );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Frame1::myClick ), NULL, this );

}

Frame2::Frame2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 125,180 ), wxSize( 125,180 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Пароль:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL, 5 );

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxICON( MAIN_ICON ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_bitmap1, 0, wxALL, 5 );

	m_button1 = new wxButton( this, wxID_ANY, _("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button1, 0, wxALL, 5 );

	m_button2 = new wxButton( this, wxID_ANY, _("Выход"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button2, 0, wxALL, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( Frame2::OnCloseFrame ) );
	this->Connect( wxEVT_SHOW, wxShowEventHandler( Frame2::OnShow ) );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Frame2::myClick ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Frame2::myExit ), NULL, this );
}

Frame2::~Frame2()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( Frame2::OnCloseFrame ) );
	this->Disconnect( wxEVT_SHOW, wxShowEventHandler( Frame2::OnShow ) );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Frame2::myClick ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Frame2::myExit ), NULL, this );

}
