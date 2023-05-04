#pragma once
#include "Date.h"
#include "RecordBook.h"
#include "Person.h"
#include <iostream>
#include <string>
#include "Subject.h"
#include <Windows.h>
using namespace std;

class Student : protected Person
{

protected:
	int admissionYear;
	char faculty[30];
	char department[30];
	char group[10];
	char recordBookNumber[9];
	Subject recordBook[9][10];
public:
	Student();
	~Student();

	int getAdmissionYear() { return admissionYear; }
	char* getFaculty() { return faculty; }
	char* getDepartment() { return department; }
	char* getGroup() { return group; }
	char* getRecordBookNumber() { return recordBookNumber; }

	void setfAdmissionYear(int _year) { admissionYear = _year; }
	void setFaculty(char* _faculty) { strcpy_s(faculty, _faculty); }
	void setDepartment(char* _department) { strcpy_s(department,_department); }
	void setGroup(char* _group) { strcpy_s(group,_group); }
	void setRecordBookNumber(char* _recordBookNumber) { strcpy_s(recordBookNumber, recordBookNumber); }

	void setDefaultData();
	void printInfo();
};
