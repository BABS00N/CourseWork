#pragma once
#include <iostream>
using namespace std;

class Subject
{
private:
	char subjectName[30];
	char subjectType[30];
	char subjectMark[30];
public:
	Subject();
	Subject(char _subjectName[30], char _subjectType[30], char _subjectMark[30]);

	~Subject();
};

