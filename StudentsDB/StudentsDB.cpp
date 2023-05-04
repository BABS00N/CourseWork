#include <iostream>
#include <Windows.h>
#include "Subject.h"
#include "Student.h"
#include "Menu.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    ClassMenu* mainMenu = new ClassMenu("Основное меню");
    mainMenu->addMenuItem("Выход");
    mainMenu->addMenuItem("Добавить данные о студенте");
    mainMenu->addMenuItem("Отобразить/изменить данные о студентах");
    mainMenu->addMenuItem("Удалить студента");
    mainMenu->addMenuItem("Выполнить задание");
    int selectedItem = mainMenu->run();
    cout << endl << "Вы выбрали: " << selectedItem;
}