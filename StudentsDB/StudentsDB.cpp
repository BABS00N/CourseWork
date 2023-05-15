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
	Decrypt();
	Student a;
	a.getShortInfoFromFile();
	Crypt();
} 