#ifndef __main__ // Если не определен макрос __main__
#define __main__ // То определить его

#include <wx/wx.h> // Подключение библиотеки wxWidgets
#include "forms.h" // Подключение заголовочного файла формы 1


// Описываем основной класс приложения на базе wxApp
class App : public wxApp {
public:
	virtual bool OnInit(); // Метод инициализации приложения
};

DECLARE_APP(App) // Макрос для создания экземпляра класса приложения

// Описываем класс главной формы 1 на оснвое класса Frame1
class Form1 : public Frame1 {
public:
	Form1(wxWindow* parent); // Конструктор
	virtual ~Form1(); // Деструктор
protected:
	virtual void OnCloseFrame(wxCloseEvent& event); // Обработчик события закрытия формы
	virtual void myClick(wxCommandEvent& event); // Обработчик события нажатия кнопки
};

// Описываем класс главной формы 2 на оснвое класса Frame2
class Form2 : public Frame2 {
public:
	Form2(wxWindow* parent); // Конструктор
	virtual ~Form2(); // Деструктор
protected:
	virtual void OnCloseFrame(wxCloseEvent& event); // Обработчик события закрытия формы
	virtual void myClick(wxCommandEvent& event); // Обработчик события нажатия кнопки назад
	virtual void myExit(wxCommandEvent& event); // Обработчик события нажатия кнопки выхода
	virtual void OnShow(wxShowEvent& event); // Обработчик события показа формы
};

#endif //__main__ // Конец условной компиляции
