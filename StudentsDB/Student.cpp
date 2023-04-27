#include "Student.h"
Student::Student()
{
	name = "Имя";
	surname = "Фамилия";
	patronymic = "Отчество";
	birthDate = { 1,1,2023 };
	admissionYear = 2022;
	faculty = "ИКБ";
	department = "КБ-1";
	group = "БББО-05-22";
	recordBookNumber = "АА88-228";
	sex = Sex::male;
	recordBook;
};

Student::Student(string _name, string _surname, string _patronymic, Date _birthDate, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, Sex _sex, RecordBook _recordBook)
{
	setStudent(_name, _surname, _patronymic, _birthDate, _admissionYear, _faculty, _department, _group, _recordBookNumber, _sex, _recordBook);
};

void Student::setStudent(string _name, string _surname, string _patronymic, Date _birthDate, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, Sex _sex, RecordBook _recordBook)
{
	name= _name;
	surname= _surname;
	patronymic= _patronymic;
	birthDate = _birthDate;
	admissionYear = _admissionYear;
	faculty= _faculty;
	department= _department;
	group= _group;
	recordBookNumber= _recordBookNumber;
	sex = _sex;
	recordBook = _recordBook;
}

string* Student::getFullName()
{
	return name, surname, patronymic;
}



Student::~Student()
{

}