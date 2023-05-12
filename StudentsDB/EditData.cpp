#include "EditData.h"

string EditData::reverseDate(string _date)
{
	string tmpDate = "";
	for (int i = 6; i < 10; i++) {
		tmpDate += _date[i];
	}
	tmpDate += ".";
	for (int i = 3; i < 5; i++) {
		tmpDate += _date[i];
	}
	tmpDate += ".";
	for (int i = 0; i < 2; i++) {
		tmpDate += _date[i];
	}
	return tmpDate;
}

bool EditData::isDateTrue(string _date)
{
	string strDay = "";
	string strMonth = "";
	string strYear = "";
	for (int i = 0; i < 2; i++) {
		strDay += _date[i];
	}
	for (int i = 3; i < 5; i++) {
		strMonth += _date[i];
	}
	for (int i = 6; i < 10; i++) {
		strYear += _date[i];
	}
	int day = atoi(strDay.c_str());
	int month = atoi(strMonth.c_str());
	int year = atoi(strYear.c_str());
	if (day <= 31) {
		if (month <= 12) {
			return true;
		}
	}
	return false;
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

string EditData::getData(editType et)
{
	cout << label << endl << data;
	char ch = 0;

	while (ch != 13)
	{
		ch = _getch();if (ch == 8)
		{
			if (data.length() > 0)
			{
				data.pop_back();
				system("cls");
				cout << label << endl << data;
			}
			continue;
		}
		if (et == editType::onlyDigit)
		{
			if (isDigit(ch))
			{
				cout << ch;
				data += ch;
			}
		}
		if (et == editType::onlyLetter)
		{
			if (isLetter(ch))
			{
				cout << ch;
				data += ch;
			}
		}
		if (et == editType::all)
		{
			cout << ch;
			data += ch;
		}
		if (et == editType::date)
		{
			if (data.length() == 10) {
				return data;
			}
			if (data.length() == 2 or data.length() == 5) {
				cout << ".";
				data += ".";
			}
			if (isDigit(ch)) {
				cout << ch;
				data = data + ch;
			}
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

string EditData::getData(editType et, string minDate, string maxDate)
{
	if (et == editType::date) {
		getData(et);
	}
	if (isDateTrue(data))
	{
		if (not (reverseDate(minDate) <= reverseDate(data) and reverseDate(data) <= reverseDate(maxDate)))
		{
			cout << endl << "Ошибка: Дата, которую вы ввели : " << "\"" << data << "\"" << " выходит из диапазона(" << minDate << "; " << maxDate << ") " << endl;
			cout << "Нажмите любую клавишу" << endl;
			_getch();
			system("cls");
			getData(et, minDate, maxDate);
		}
	}
	else
	{
		cout << endl << "Ошибка: Дата, которую вы ввели : " << "\"" << data << "\"" << " является некорректной" << endl;
		_getch();
		system("cls");
		getData(et, minDate, maxDate);
	}
	return data;
}

