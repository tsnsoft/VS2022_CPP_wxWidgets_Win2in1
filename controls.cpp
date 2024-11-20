#include "main.h" // Подключение заголовочного файла
#include <wx/msgdlg.h> // Подключение библиотеки для вывода сообщений

wxString form1_data; // ОБЩАЯ ПЕРЕМЕННАЯ

// Переход на форму 2 по нажатию кнопки в форме 1
void Form1::myClick(wxCommandEvent& event) {
	wxString s = m_textCtrl1->GetValue(); // Получение текста из поля ввода
	if (s != "TSN") { // Проверка на правильность ввода
		wxMessageBox(wxT("Введите правильное имя: TSN !"), wxT("Ошибка"), wxOK | wxICON_ERROR); // Вывод сообщения об ошибке
		return; // Выход из метода	
	}
	form1_data = s; // Запись в общую переменную
	Form2* form2 = new Form2(this); // Создание формы 2
	this->Hide(); // Скрытие формы 1
	form2->Show(); // Показ формы 2
	form2->SetFocus(); // Фокус на форме 2
	form2->Fit(); // Подгонка размеров формы 2
	form2->Center(); // Центрирование формы 2
}

// При закрытии формы 1
void Form1::OnCloseFrame(wxCloseEvent& event) {
	this->Destroy(); // Уничтожение формы 1
}

// При открытии формы 2
void Form2::OnShow(wxShowEvent& event) {
	m_staticText1->SetLabel(form1_data); // Вывод текста из общей переменной
}

// Кнопка назад в из формы 2 в форму 1
void Form2::myClick(wxCommandEvent& event) {
	this->Destroy(); // Уничтожение формы 2
	extern Form1* form1; // Объявление внешней переменной
	form1->Show(); // Показ формы 1
	form1->Fit(); // Подгонка размеров формы 1
	form1->Center(); // Центрирование формы 2
}

// При закрытии формы 2
void Form2::OnCloseFrame(wxCloseEvent& event) {
	this->Destroy(); // Уничтожение формы 2
	extern Form1* form1; // Объявление внешней переменной
	form1->Show(); // Показ формы 1
}

// Кнопка выхода из программы в форме 2
void Form2::myExit(wxCommandEvent& event) {
	this->Destroy();
	extern Form1* form1;
	form1->Close();
}
