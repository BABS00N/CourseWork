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

Student::~Student()
{

}

