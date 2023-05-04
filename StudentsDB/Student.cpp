#include "Student.h"
Student::Student()
{
};

Student::~Student()
{
}

void Student::setDefaultData()
{
	strncpy_s(surname, "Иванов", 30);
	strncpy_s(name, "Иван", 30);
	strncpy_s(patronymic, "Иванович", 30);
	strncpy_s(faculty, "ИКБ", 30);
	strncpy_s(department, "Информационная безопасность", 30);
	strncpy_s(group, "БББО-05-22", 10);
	strncpy_s(recordBookNumber, "123456789", 9);
	birthDate.setDate(01, 01, 2004);
	sex = Sex::male;
	admissionYear = 2022;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 10; j++) {
			recordBook[i][j].isEmpty = true;
		}
}

void Student::printInfo()
{
	cout << endl << " _________Информация о студенте:_________" << endl;
	cout << " Фамилия: " << surname << " Имя: " << name << " Отчество: " << patronymic << endl;
	cout << " Факультет: " << faculty << " Кафедра: " << department << " Группа: " << group << endl;
	cout << " Номер зачетной книжки: " << recordBookNumber << " День рождения: " << birthDate.getDateString() << endl;
	cout << " Пол: ";
	if (sex == Sex::male) { cout << "мужской "; }
	if (sex == Sex::female) { cout << "женский "; }
	cout << " Год  начала обучения: " << admissionYear << endl;

}

void Student::editStudent()
{
	setDefaultData();
	Menu* studMenu = new Menu("Меню редактирования студента");

	studMenu->addMenuItem("Выход");
	studMenu->addMenuItem("Введите фамилию");
	studMenu->addMenuItem("Введите имя");
	studMenu->addMenuItem("Введите отчество");
	studMenu->addMenuItem("Введите факультет");
	studMenu->addMenuItem("Введите кафедру");
	studMenu->addMenuItem("Введите номер группы");
	studMenu->addMenuItem("Введите пол");
	studMenu->addMenuItem("Введите год  начала обучения");
	studMenu->addMenuItem("Введите номер зачетной книжки");
	studMenu->addMenuItem("Введите дату рождения");
	studMenu->addMenuItem("Просмотреть/Введите успеваемость");
	int selectedItem = -1;
	Menu* sexMenu = new Menu("Меню редактирования пола студента");
	sexMenu->addMenuItem("Выход");
	sexMenu->addMenuItem("Мужской");
	sexMenu->addMenuItem("Женский");
	int sexItem = -1;
	string str;
	while (selectedItem != 0) {
		printInfo();
		_getch();
		selectedItem = studMenu->run();
		switch (selectedItem)
		{
		case 1:
			edit->clear(surname); edit->setLabel("Введите фамилию: ");
			str = edit->getData(editType::onlyLetter, 30).c_str();
			strncpy_s(surname, str.c_str(), str.size());
			break;
		case 2:
			edit->clear(name); edit->setLabel("Введите имя: ");
			str = edit->getData(editType::onlyLetter, 30).c_str();
			strncpy_s(name, str.c_str(), str.size());
			break;
		case 3:
			edit->clear(patronymic); edit->setLabel("Введите отчество: ");
			str = edit->getData(editType::onlyLetter, 30).c_str();
			strncpy_s(patronymic, str.c_str(), str.size());
			break;
		case 4:
			edit->clear(faculty); edit->setLabel("Введите факультет: ");
			str = edit->getData(editType::onlyLetter, 30).c_str();
			strncpy_s(faculty, str.c_str(), str.size());
			break;
		case 5:
			edit->clear(department); edit->setLabel("Введите кафедру: ");
			str = edit->getData(editType::onlyLetter, 30).c_str();
			strncpy_s(department, str.c_str(), str.size());
			break;
		case 6:
			edit->clear(group); edit->setLabel("Введите номер группы: ");
			str = edit->getData(editType::onlyLetter, 10).c_str();
			strncpy_s(group, str.c_str(), str.size());
			break;
		case 7:
			while (sexItem != 0) {
				sexItem = sexMenu->run();
				if (sexItem == 1) { sex = Sex::male; sexItem = 0; }
				if (sexItem == 2) { sex = Sex::female; sexItem = 0; }
			}

			break;
		case 8:
			edit->clear(to_string(admissionYear));
			edit->setLabel("Введите год начала обучения: ");
			admissionYear = edit->getData(editType::onlyDigit, 1940, 2022);
			break;

		case 9:
			edit->clear(recordBookNumber);
			edit->setLabel("Введите номер зачетной книжки: ");
			str = edit->getData(editType::all, 9).c_str();
			strncpy_s(recordBookNumber, str.c_str(), str.size());
			break;

		case 10:
			edit->clear(to_string(admissionYear));
			edit->setLabel("Введите дату рождения: ");
			str = edit->getData(editType::all, 9).c_str();
			strncpy_s(recordBookNumber, str.c_str(), str.size());
			break;

		deafault:
			break;
		}
	}
	delete sexMenu;
	delete studMenu;

}

