#include "Student.h"
Student::Student()
{
	strcpy_s(name , "Имя");
	strcpy_s(surname , "Фамилия");
	strcpy_s(patronymic , "Отчество");
	date = { 1,1,2023 };
	admissionYear = 2022;
	strcpy_s(faculty , "ИКБ");
	strcpy_s(department , "КБ-1");
	strcpy_s(group , "БББО-05-22");
	strcpy_s(recordBookNumber , "АА88-228");
	sex = Sex::male;
	recordBook;
};

Student::Student(char _name[30], char _surname[30], char _patronymic[30], Date _date, unsigned short _admissionYear, char _faculty[8], char _department[8], char _group[11], char _recordBookNumber[20], char _sex, RecordBook _recordBook)
{
	setStudent(_name, _surname, _patronymic, _date, _admissionYear, _faculty, _department, _group, _recordBookNumber, _sex, _recordBook);
};

void Student::setStudent(char _name[30], char _surname[30], char _patronymic[30], Date _date, unsigned short _admissionYear, char _faculty[8], char _department[8], char _group[11], char _recordBookNumber[20], char _sex, RecordBook _recordBook)
{
	strcpy_s(name, _name);
	strcpy_s(surname, _surname);
	strcpy_s(patronymic, _patronymic);
	date = _date;
	admissionYear = _admissionYear;
	strcpy_s(faculty, _faculty);
	strcpy_s(department, _department);
	strcpy_s(group, _group);
	strcpy_s(recordBookNumber, _recordBookNumber);
	if ((char)Sex::male == _sex) { sex = Sex::male; }
	else if ((char)Sex::female == _sex) { sex = Sex::female; }
	recordBook = _recordBook;
}

Student::~Student()
{

}