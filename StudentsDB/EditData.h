#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <conio.h>
#include <Windows.h>
using namespace std;

enum class editType : char { onlyDigit, onlyLetter, all };

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
	bool isDateString(string _str);
public:
	//enum class editType : char { onlyDigit, olnyLetter, all };
	
	EditData();

	void reverseDate(string & _date);
	void clear(string _data = "");
	void setLabel(string _label);
	string getData(editType _type);
	int getData(editType et, int min, int max);
	string getData(editType et, int len);
	string getData(string minDate, string maxDate);
};