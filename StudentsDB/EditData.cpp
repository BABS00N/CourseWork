#include "EditData.h"

void EditData::setLabel(string _label)
{
	if (_label.length() > 1)
		this->label = _label;
	else
		label = "";
}

EditData::EditData()
{
	label = "";
	data = "";
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

string EditData::getData(editType _type)
{
	cout << label << endl << data;
	char ch = 0;
	while (ch != 13)//enter
	{
		ch = _getch();
		if (ch == 0)
		{
			if (data.length() > 0)
			{
				data.pop_back();
				system("cls");
				cout << label << endl << data;
			}
			continue;
		}
		if (_type == editType::onlyDigit)
		{
			if (isDigit(ch))
			{
				cout << ch;
				data += ch;
			}
		}
		if (_type == editType::onlyLetter)
		{
			if (isLetter(ch))
			{
				cout << ch;
				data += ch;
			}
		}
		if (_type == editType::all)
		{
			cout << ch;
			data += ch;
		}
	}
	return data;
}

int EditData::getData(enum class editType et, int min, int max) {
	if (et == editType::onlyDigit) {
		getData(et);
		int num = max + 1;
		if (isDigitString(data))
			num = atoi(data.c_str());
		if (not (num >= min and num <= max)) {
			cout << endl << "Îøèáêà: ×èñëî êîòîðîå âû ââåëè: " << num << " Âûõîäèò èç äèàïàçîíà (" << min << "; " << max << ") ";
			getData(et, min, max);
		}
		if (isDigitString(data))
			num = atoi(data.c_str());
		return num;
	}
}
