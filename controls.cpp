#include "main.h" // ����������� ������������� �����
#include <wx/msgdlg.h> // ����������� ���������� ��� ������ ���������

wxString form1_data; // ����� ����������

// ������� �� ����� 2 �� ������� ������ � ����� 1
void Form1::myClick(wxCommandEvent& event) {
	wxString s = m_textCtrl1->GetValue(); // ��������� ������ �� ���� �����
	if (s != "���") { // �������� �� ������������ �����
		wxMessageBox("������� ���������� ���: ��� !", "������", wxOK | wxICON_ERROR); // ����� ��������� �� ������
		return; // ����� �� ������	
	}
	form1_data = s; // ������ � ����� ����������
	Form2* form2 = new Form2(this); // �������� ����� 2
	this->Hide(); // ������� ����� 1
	form2->Show(); // ����� ����� 2
	form2->SetFocus(); // ����� �� ����� 2
}

// ��� �������� ����� 1
void Form1::OnCloseFrame(wxCloseEvent& event) {
	this->Destroy(); // ����������� ����� 1
}

// ��� �������� ����� 2
void Form2::OnShow(wxShowEvent& event) {
	m_staticText1->SetLabel(form1_data); // ����� ������ �� ����� ����������
}

// ������ ����� � �� ����� 2 � ����� 1
void Form2::myClick(wxCommandEvent& event) {
	this->Destroy(); // ����������� ����� 2
	extern Form1* form1; // ���������� ������� ����������
	form1->Show(); // ����� ����� 1
}

// ��� �������� ����� 2
void Form2::OnCloseFrame(wxCloseEvent& event) {
	this->Destroy(); // ����������� ����� 2
	extern Form1* form1; // ���������� ������� ����������
	form1->Show(); // ����� ����� 1
}

// ������ ������ �� ��������� � ����� 2
void Form2::myExit(wxCommandEvent& event) {
	this->Destroy();
	extern Form1* form1;
	form1->Close();
}
