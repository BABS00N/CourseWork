#include <iostream>
#include <Windows.h>
#include "Subject.h"
#include "SessionList.h"
#include "Student.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Student b;
	cout << b.getFullName();
}