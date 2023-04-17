#pragma once
#include "Subject.h"
#include "LinkedList.h"
class SessionList
{
public:
	LinkedList<Subject> subjectList;
	LinkedList<LinkedList<Subject>> sessionList;
};