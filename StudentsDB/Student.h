#pragma once
#include <iostream>
#include <string>
#include "Subject.h"
#include <Windows.h>
#include "Menu.h"
#include <stdio.h>
#include "StudentNode.h"
#include "List.h"
//#include "CryptoTools.h"

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
	void setSubjectNameByIndex(int i_idx, int j_idx);
	void setSubjectMarkByIndex(int i_idx, int j_idx);

	void setRecordBook(string header); 
	void setSessionByIndex(int index);
	void SetSubjectByIndex(int index);


	void setDefaultData();
	void printInfo();
	void editStudent();
	void clearStudentNode();

	void addStudentToFile();
	int countRecords();
	void getShortInfoFromFile();
	void getShortInfoFromFile(string minYear, string maxYear);
	void setStudentNode();
	void setStudentNodeFromFile(int num);
	void writeToFileStudentData(int num);
	void deleteStudentFromFile(int num);

	void sortingStudentsByAdmissionYear();
};