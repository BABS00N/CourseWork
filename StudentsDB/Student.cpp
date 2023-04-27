#include "Student.h"
Student::Student()
{
	fio.name = "Имя";
	fio.surname = "Фамилия";
	fio.patronymic = "Отчество";
	birthDate = { 1,1,2023 };
	admissionYear = 2022;
	faculty = "ИКБ";
	department = "КБ-1";
	group = "БББО-05-22";
	recordBookNumber = "АА88-228";
	sex = 'Т';
	recordBook;
};

//Student::Student(string _name, string _surname, string _patronymic, Date _birthDate, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, Sex _sex, RecordBook _recordBook)
//{
	
//};
/*
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
}*/




Student::~Student()
{

}

