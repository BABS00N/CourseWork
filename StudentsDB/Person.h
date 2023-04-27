#pragma once
#include <iostream>
#include <string.h>
#include "Date.h"

struct FIO
{
	string name;
	string surname;
	string patronymic;
//protected:
	FIO()
	{
		name = "name";
		surname = "surname";
		patronymic = "patronymic";
	};
};

class Person
{
protected:
	FIO fio;
	Date birthDate;
	char sex;
public:
	Person() { birthDate = { 1,1,2023 }; sex = 'T'; };

	string getName() { return fio.name; }
	string getSurame() { return fio.surname; }
	string getPatronymic() { return fio.patronymic; }
	Date getBirthDate() { return birthDate; }
	char getSex() { return sex; }

	void setFIO(string _name, string _surname, string _patronymic)
	{
		setName(_name);
		setSurname(_surname);
		setPatronymic(_patronymic);
	}
	void setFIO(FIO* _fio) { setFIO(_fio->name, _fio->surname, _fio->patronymic); }
	void setName(string _name) { fio.name = _name; }
	void setSurname(string _surname) { fio.name = _surname; }
	void setPatronymic(string _patronymic) { fio.patronymic = _patronymic; }
	void setBirthDate(Date _birthDate) { birthDate.setDate(_birthDate); }
	void setSex(char _sex) { sex = _sex; }
};

