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

