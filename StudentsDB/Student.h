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
public:
	Student();
	~Student();
	void setDefaultData();

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
	void setSubjectNameByIndex(int i_idx, int j_idx);
	void setSubjectMarkByIndex(int i_idx, int j_idx);
	void addSubjectByIndex(int i_idx, int j_idx);
	void deleteSubjectByIndex(int i_idx, int j_idx);

	void setRecordBook(string header);
	void setSessionByIndex(int index);
	void SetSubjectByIndex(int i_idx, int j_idx);

	void printSubjectInfoByIndex(int i_idx, int j_idx);
	void printInfo();
	void editStudent(int num);

	void addStudentToFile();
	int countRecords();
	void getShortInfoFromFile();
	void setStudentNode();
	void setStudentNodeFromFile(int num);
	void writeToFileStudentData(int num);
	void deleteStudentFromFile(int num);

	void setBirhDateInterval(int& minDate, int& maxDate);
	void sortingStudentsMenu();
	void printSortingStudentsByAdmissionYear(int minDate, int maxDate);
	void bubbleSorting();
};