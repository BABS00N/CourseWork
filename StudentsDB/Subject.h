#pragma once
#include <iostream>
using namespace std;

class Subject
{
private:
	string subjectName;
	string subjectType;
	string subjectMark;
public:
	Subject();
	Subject(string subjectName, string subjectType, string subjectMark);

	~Subject();
};

