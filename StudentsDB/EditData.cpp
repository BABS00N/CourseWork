#include "EditData.h"

EditData::EditData()
{
	label = "";
	data = "";
}

EditData::~EditData()
{
}

bool EditData::isDigit(char ch)
{
	if (48 <= ch and ch <= 57)
		return true;
	else
		return false;
}

bool EditData::isDigitString(string _str)
{
	for (int i = 0; i < _str.length(); i++)
	{
		if (not isDigit(_str[i]))
			return false;
	}
	if (_str.length() == 0)
		return false;
	return true;
}

bool EditData::isLetter(char ch)
{
	if (65 <= ch and ch <= 90)
		return true;
	if (97 <= ch and ch <= 122)
		return true;
	if (192 <= ch and ch <= 255)
		return true;
	return false;
}

bool EditData::isSpace(char ch)
{
	if (ch == 32)
		return true;
	else
		return false;
}

bool EditData::isSpecCharacter(char ch)
{
	if (33 <= ch and ch <= 47)
		return true;
	if (58 <= ch and ch <= 64)
		return true;
	if (91 <= ch and ch <= 96)
		return true;
	if (123 <= ch and ch <= 126)
		return true;
	return false;
}
