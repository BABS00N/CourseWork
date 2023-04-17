#pragma once
#include <iostream>
#include <string>
//#include <Windows.h>
using namespace std;

enum class Type : char { onlyDigit, onlyLetter, all };

class EditData
{
private:
	string label;
	string data;
public:
	EditData();
	~EditData();

	enum class editType : char { onlyDigit, olnyLetter, all };
	bool isDigit(char ch);
	bool isDigitString(string _str);
	bool isLetter(char ch);
	bool isSpace(char ch);
	bool isSpecCharacter(char ch);
};