﻿//#include <iostream>
#include "CryptoTools.h"
#include <Windows.h>
#include "Subject.h"
#include "Student.h"
#include "Menu.h"
#include "EditData.h"
#include "EditData.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*EditData b;
	b.setLabel("Дата рождения:");
	b.getData(editType::date, "01.01.1900", "01.01.2007");*/
	Student a;
	a.getShortInfoFromFile();
	//a.editStudent();
	//a.setDefaultData();
	//a.addStudentToFile();
	//a.setDefaultData1();
	//a.addStudentToFile();
	//a.setDefaultData2();
	//a.addStudentToFile();
	//a.deleteStudent(1);
	//a.sortingStudentsByAdmissionYear();
	//Crypt();
	//Decrypt();
} 