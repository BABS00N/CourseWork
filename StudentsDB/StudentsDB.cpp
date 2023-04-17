#include <iostream>
#include <Windows.h>
#include "Subject.h"
#include "SessionList.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    if (192 <= 'в' <= 255)
        cout << "TRUE";
}