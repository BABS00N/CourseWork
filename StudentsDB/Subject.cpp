#include "Subject.h"
Subject::Subject()
{
	strcpy_s(subjectName, "Предмет");
	strcpy_s(subjectType, "Тип");
	strcpy_s(subjectMark, "Тип");
}
Subject::Subject(char _subjectName[30], char _subjectType[30], char _subjectMark[30])
{
	strcpy_s(subjectName, _subjectName);
	strcpy_s(subjectType, _subjectType);
	strcpy_s(subjectMark, _subjectMark);
}
Subject::~Subject()
{

}