#pragma once
#include <iostream>
#include <string.h>
#include "Date.h"

enum class Sex : char { male='Ì', female='Æ' };

class Person
{
protected:
	char surname[30];
	char name[30];
	char patronymic[30];
	Date birthDate;
	Sex sex;
public:
	string getName() { return name; }
	string getSurame() { return surname; }
	string getPatronymic() { return patronymic; }
	Date getBirthDate() { return birthDate; }
	Sex getSex() { return sex; }

	void setPerson(char* _name, char* _surname, char* _patronymic, Date _birthDate, Sex _sex)
	{
		setName(_name);
		setSurname(_surname) ;
		setPatronymic(_patronymic);
		setBirthDate(_birthDate);
		setSex(_sex);
	}
	void setName(char* _name) { strcpy_s(name,_name); }
	void setSurname(char* _surname) { strcpy_s(name,_surname); }
	void setPatronymic(char* _patronymic) { strcpy_s(patronymic,_patronymic); }
	void setBirthDate(Date _birthDate) { birthDate.setDate(_birthDate); }
	void setSex(Sex _sex) { sex = _sex; }
};

