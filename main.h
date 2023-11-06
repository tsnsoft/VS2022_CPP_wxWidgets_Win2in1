#ifndef __main__ // ���� �� ��������� ������ __main__
#define __main__ // �� ���������� ���

#include <wx/wx.h> // ����������� ���������� wxWidgets
#include "forms.h" // ����������� ������������� ����� ����� 1


// ��������� �������� ����� ���������� �� ���� wxApp
class App : public wxApp {
public:
	virtual bool OnInit(); // ����� ������������� ����������
};

DECLARE_APP(App) // ������ ��� �������� ���������� ������ ����������

// ��������� ����� ������� ����� 1 �� ������ ������ Frame1
class Form1 : public Frame1 {
public:
	Form1(wxWindow* parent); // �����������
	virtual ~Form1(); // ����������
protected:
	virtual void OnCloseFrame(wxCloseEvent& event); // ���������� ������� �������� �����
	virtual void myClick(wxCommandEvent& event); // ���������� ������� ������� ������
};

// ��������� ����� ������� ����� 2 �� ������ ������ Frame2
class Form2 : public Frame2 {
public:
	Form2(wxWindow* parent); // �����������
	virtual ~Form2(); // ����������
protected:
	virtual void OnCloseFrame(wxCloseEvent& event); // ���������� ������� �������� �����
	virtual void myClick(wxCommandEvent& event); // ���������� ������� ������� ������ �����
	virtual void myExit(wxCommandEvent& event); // ���������� ������� ������� ������ ������
	virtual void OnShow(wxShowEvent& event); // ���������� ������� ������ �����
};

#endif //__main__ // ����� �������� ����������
