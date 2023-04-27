#pragma once
#include <iostream>
#include <string.h>
#include "Date.h"
class Person
{
protected:
	string name;
	string surname;
	string patronymic;
	Date birthDate;
	char sex;
public:
	string getName() { return name; }
	string getSurame() { return surname; }
	string getPatronymic() { return patronymic; }
	Date getBirthDate() { return birthDate; }
	char getSex() { return sex; }

	void setName(string _name) { name = _name; }
	void setSurname(string _surname) { name = _surname; }
	void setPatronymic(string _patronymic) { patronymic = _patronymic; }
	void setBirthDate(Date _birthDate) { birthDate.setDate(_birthDate); }
	void setSex(char _sex) { sex = _sex; }
};

