#pragma once
#include "Date.h"
#include "RecordBook.h"
#include <iostream>
using namespace std;

class Student
{
private:
	char name[30];
	char surname[30];
	char patronymic[30];
	Date date;
	unsigned short admissionYear;
	char faculty[8];
	char department[8];
	char group[11];
	char recordBookNumber[20];
	enum class Sex :char {male='Ì', female='Æ' } sex;
	RecordBook recordBook;
public:
	Student(char _name[30], char _surname[30], char _patronymic[30], Date _date, unsigned short _admissionYear, char _faculty[8], char _department[8], char _group[11], char _recordBookNumber[20], char _sex, RecordBook _recordBook);
	Student();
	~Student();

	void setStudent(char _name[30], char _surname[30], char _patronymic[30], Date _date, unsigned short _admissionYear, char _faculty[8], char _department[8], char _group[11], char _recordBookNumber[20], char _sex, RecordBook _recordBook);
};
