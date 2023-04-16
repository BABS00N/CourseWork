#include "Student.h"

Student::Student()
{
	name = "Имя";
	surname = "Фамилия";
	patronymic = "Отчество";
	date = { 1,1,2023 };
	admissionYear = 2022;
	faculty = "ИКБ";
	department = "КБ-1";
	group = "БББО-05-22";
	recordBookNumber = "АА88-228";
	sex = 'М';
	recordBook;
};

Student::Student(string _name, string _surname, string _patronymic, Date _date, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, char _sex, RecordBook _recordBook)
{
	setStudent(_name, _surname, _patronymic, _date, _admissionYear, _faculty, _department, _group, _recordBookNumber, _sex, _recordBook);
};

void Student::setStudent(string _name, string _surname, string _patronymic, Date _date, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, char _sex, RecordBook _recordBook)
{
	name = _name;
	surname = _surname;
	patronymic = _patronymic;
	date = _date;
	admissionYear = _admissionYear;
	faculty = _faculty;
	department = _department;
	group = _group;
	recordBookNumber = _recordBookNumber;
	sex = _sex;
	recordBook = _recordBook;
}

Student::~Student()
{

}