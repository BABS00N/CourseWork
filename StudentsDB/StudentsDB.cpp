#include <iostream>
#include <Windows.h>
#include "Subject.h"
#include "Student.h"
#include "Menu.h"
using namespace std;
#include "EditData.h"
int main()
{
	Student a;
	a.setDefaultData();
	a.addStudentToFile();
	a.setDefaultData1();
	a.addStudentToFile();
	a.setDefaultData2();
	a.addStudentToFile();
	//a.deleteStudent(1);
} 