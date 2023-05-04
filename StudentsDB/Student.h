#pragma once
#include "Date.h"
#include "RecordBook.h"
#include "Person.h"
#include <iostream>
#include <string>
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
	RecordBook recordBook[9][10];
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

	void setDefaultData()
	{
		strncpy_s(surname, "Иванов", 30);
		strncpy_s(name, "Иван", 30);
		strncpy_s(patronymic, "Иванович", 30);
		strncpy_s(faculty, "ИКБ", 30);
		strncpy_s(department, "Èíôîðìàöèîííàÿ áåçîïàñíîñòü", 30);
		strncpy_s(group, "БББО-05-22", 10);
		strncpy_s(recordBookNumber, "123456789", 9);
		birthDate.setDate(01,01,2004);
		sex = Sex::male;
		admissionYear = 2022;
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 10; j++) {
				recordBook[i][j].isEmpty = true;
			}
	}
};
