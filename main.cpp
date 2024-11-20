#include "main.h" // Подключаем заголовочный файл
#include <wx/msgdlg.h> // Подключаем заголовочный файл для работы с диалоговыми окнами
#include "tsnsoft.xpm" // Подключаем иконку


IMPLEMENT_APP(App); // Используем макрос для запуска приложения

Form1* form1; // Глобальная переменная для доступа к форме 1

// Реализуем функцию инициализации приложения
bool App::OnInit() {
	Form1* mainForm = new Form1(NULL); // Создаём форму 1
	SetTopWindow(mainForm); // Устанавливаем форму 1 главной
	GetTopWindow()->Show(); // Отображаем форму 1
	GetTopWindow()->Fit(); // Подгонка размеров формы 1
	GetTopWindow()->Center(); // Центрируем форму 1
	GetTopWindow()->SetPosition(wxPoint(-1, -1)); 
	form1 = mainForm; // Сохраняем указатель на форму 1 в глобальной переменной
	return true;
}

// Реализуем конструктор формы 1
Form1::Form1(wxWindow* parent) : Frame1(parent) {
	wxInitAllImageHandlers(); // Инициализируем все обработчики изображений
	this->SetIcon(wxIcon(tsnsoft_xpm)); // Устанавливаем иконку для формы
	this->Center();
	this->SetPosition(wxPoint(-1, -1)); 
}

// Реализуем деструктор формы 1
Form1::~Form1() {
}

// Реализуем конструктор формы 2
Form2::Form2(wxWindow* parent) : Frame2(parent) {
	this->SetIcon(wxIcon(tsnsoft_xpm)); // Устанавливаем иконку для формы
}

// Реализуем деструктор формы 2
Form2::~Form2() {
}

