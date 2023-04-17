#pragma once
#include <iostream>
using namespace std;
class EditData
{
private:

public:
	enum class editType : char { onlyDigit, olnyLetter, all };
	bool isDigit(char ch);
	bool isStringDigit();
	bool isLetter(char ch);
	bool isSpace(char ch);
	bool isSpecCharacter(char ch);
};