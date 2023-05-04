#include "Student.h"
Student::Student()
{
};

Student::~Student()
{
}

void Student::setDefaultData()
{
	strncpy_s(surname, "������", 30);
	strncpy_s(name, "����", 30);
	strncpy_s(patronymic, "��������", 30);
	strncpy_s(faculty, "���", 30);
	strncpy_s(department, "�������������� ������������", 30);
	strncpy_s(group, "����-05-22", 10);
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
	cout << endl << " _________���������� � ��������:_________" << endl;
	cout << " �������: " << surname << " ���: " << name << " ��������: " << patronymic << endl;
	cout << " ���������: " << faculty << " �������: " << department << " ������: " << group << endl;
	cout << " ����� �������� ������: " << recordBookNumber << " ���� ��������: " << birthDate.getDateString() << endl;
	cout << " ���: ";
	if (sex == Sex::male) { cout << "������� "; }
	if (sex == Sex::female) { cout << "������� "; }
	cout << " ���  ������ ��������: " << admissionYear << endl;

}

