#pragma once
#include <iostream>
#include <string>
#include <conio.h>
//#include <Windows.h>
using namespace std;

enum class Type : char { onlyDigit, onlyLetter, all };

class EditData
{
private:
	string label;
	string data;

	bool isDigit(char ch);
	bool isDigitString(string _str);
	bool isLetter(char ch);
	bool isSpace(char ch);
	bool isSpecCharacter(char ch);
public:
	enum class editType : char { onlyDigit, olnyLetter, all };
	
	EditData();

	void setLabel(string _label);
	string getData(editType _type);
};