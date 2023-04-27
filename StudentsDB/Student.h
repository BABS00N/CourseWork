#pragma once
#include "Date.h"
#include "RecordBook.h"
#include "Person.h"
#include <iostream>
using namespace std;

//enum class markType : char { Fail, Pass, Excellent, Good, Satisfactory, Bad };

class Student : public Person
{
protected:
	int admissionYear;
	string faculty;
	string department;
	string group;
	string recordBookNumber;
	RecordBook recordBook;
public:
	Student();
	//Student(string _name, string _surname, string _patronymic, Date _date, unsigned short _admissionYear, string _faculty, string _department, string _group, string _recordBookNumber, Sex _sex, RecordBook _recordBook);
    ~Student();

	int getAdmissionYear() { return admissionYear; }
	string getFaculty() { return faculty; }
	string getDepartment() { return department; }
	string getGroup() { return group; }
	string getRecordBookNumber() { return recordBookNumber; }

	void setfAdmissionYear(int _year) { admissionYear = _year; }
	void setFaculty(string _faculty) { faculty = _faculty; }
	void setDepartment(string _department) { department = _department; }
	void setGroup(string _group) { group = _group; }
	void setRecordBookNumber(string _recordBookNumber) { recordBookNumber = recordBookNumber; }
};
