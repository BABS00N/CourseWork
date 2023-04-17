#include "EditData.h"

bool EditData::isDigit(char ch)
{
	if (48 <= ch and ch <= 57)
		return true;
	else
		return false;
}

bool EditData::isStringDigit()
{
	return false;
}

bool EditData::isLetter(char ch)
{
	if (65 <= ch and ch <= 90)
		return true;
	if (97 <= ch and ch <= 122)
		return true;
	if (-200 <= ch and ch <= -1)
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
