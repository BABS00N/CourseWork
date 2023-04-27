#pragma once
#include "Date.h"
#include "RecordBook.h"
#include "Person.h"
#include <iostream>
using namespace std;

enum class Sex :char { male = 'Ì', female = 'Æ' };
enum class markType : char { Fail, Pass, Excellent, Good, Satisfactory, Bad };

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
};
