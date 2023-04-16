#pragma once
#include "Date.h"
#include "RecordBook.h"
class Student
{
private:
	string name;
	string surname;
	string patronymic;
	Date date;
	unsigned short admissionYear;
	string faculty;
	string department;
	string group;
	string recordBookNumber;
	char sex;
	RecordBook recordBook;
public:
	Student(string _name, string _surname, string _patronymic, Date _date, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, char _sex, RecordBook _recordBook);
	Student();
	~Student();

	void setStudent(string _name, string _surname, string _patronymic, Date _date, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, char _sex, RecordBook _recordBook);
};
