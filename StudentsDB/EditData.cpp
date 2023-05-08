#include "EditData.h"

void EditData::reverseDate(string & _date)
{
	string temp;
	temp.push_back(_date[6]);
	temp.push_back(_date[7]);
	temp.push_back(_date[8]);
	temp.push_back(_date[9]);
	temp.push_back(_date[5]);
	temp.push_back(_date[3]);
	temp.push_back(_date[4]);
	temp.push_back(_date[2]);
	temp.push_back(_date[0]);
	temp.push_back(_date[1]);
	_date = temp;
}

void EditData::clear(string _data)
{
	system("cls");
	data = _data;
}

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

bool EditData::isDateString(string _str)
{
	if (_str.length() != 10)
		return false;
	if (not(_str[2] == 46 or _str[5] == 46))
		return false;
	int influenceOfDots = 0;
	for (int i = 0; i <3;i++)
	{
		if (i < 2)
		{
			for (int j = 0; j < 2; j++)
			{
				if (not isDigit(_str[i * 4 + j + influenceOfDots]))
					return false;
			}
			influenceOfDots--;
		}
		else
		{
			for (int j = 0; j < 4; j++)
			{
				if (not isDigit(_str[i * 4 + j + influenceOfDots]))
					return false;
			}
		}
	}
	return true;
}

string EditData::getData(editType _type)
{
	cout << label << endl << data;
	char ch = 0;
	while (ch != 13)
	{
		ch = _getch();
		if (ch == 8)
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

int EditData::getData(editType et, int min, int max) {
	if (et == editType::onlyDigit) {
		getData(et);
		int num = max + 1;
		if (isDigitString(data))
			num = atoi(data.c_str());
		if (not (num >= min and num <= max)) {
			cout << endl << "Ошибка: Число которое вы ввели: " << num << " Выходит из диапазона (" << min << "; " << max << ") ";
			getData(et, min, max);
		}
		if (isDigitString(data))
			num = atoi(data.c_str());
		return num;
	}
}

string EditData::getData(editType et, int len)
{
	if (et == editType::onlyLetter or et == editType::all) {
		getData(et);
		if (data.length() > len) {
			cout << endl << "Ошибка: Длина строки больше чем допускается: " << data.length() << " Разрешено: " << len << " ";
			getData(et, len);
		}
		return data;
	}
}

string EditData::getData(string minDate, string maxDate)
{
	string date,changeDate,changeMinDate,changeMaxDate;
	data = getData(editType::all);
	changeMinDate = minDate;
	changeMaxDate = maxDate;
	if (isDateString(date))
	{
		
		reverseDate(changeMinDate);
		reverseDate(changeMaxDate);
		reverseDate(changeDate);
		if (not((changeMinDate <= changeDate) and (changeDate <= changeMaxDate)))
		{
			cout << endl << "Ошибка: Дата, которую вы ввели: " << date << " Должна находиться в диапазоне (" << minDate << " <= " << date << " <= " << maxDate << ") ";
			getData(minDate, maxDate);
		}
		return date;
	}
	else
	{
		cout << endl << "Ошибка: Дата, которую вы ввели: " << data << " Должна принимать вид ( DD.MM.YYYY ) ";
		getData(minDate, maxDate);
	}
}

