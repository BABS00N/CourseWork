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
public:
	enum class editType : char { onlyDigit, olnyLetter, all };
	
	EditData();
	~EditData();
	
	bool isDigit(char ch);
	bool isDigitString(string _str);
	bool isLetter(char ch);
	bool isSpace(char ch);
	bool isSpecCharacter(char ch);

	string getData(editType _type);
	string getData(editType _type);
	string getData(editType _type);
};