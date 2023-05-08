﻿#pragma once
#include <iostream>
#include <string>
#include "Subject.h"
#include <Windows.h>
#include "Menu.h"
#include <stdio.h>
#include "StudentNode.h"
#include "List.h"
using namespace std;

class Student
{
private:
	string fileName;
	EditData* edit;
	StudentNode SN;
	template <typename T>
	void swap(T& a, T& b);
public:
	Student();
	~Student();
	void setDefaultData1();//удвлить
	void setDefaultData2();//удалить

	void setSurname();
	void setName();
	void setPatronymic();
	void setBirthDate();
	void setSex(string header);
	void setAdmissionYear();
	void setFaculty();
	void setDepartment();
	void setGroup();
	void setRecordBookNumber();
	//void setRecordBook();

	void setDefaultData();
	void printInfo();
	void editStudent();
	void clearStudentNode();

	void addStudentToFile();
	int countRecords();
	void getShortInfoFromFile();
	void setStudentData();
	void setStudentData(int num);
	void writeToFileStudentData(int num);
	void deleteStudent(int num);

	void sortingStudentsByAdmissionYear();
};