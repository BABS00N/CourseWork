#pragma once
#include <sstream>
using namespace std;

class Date
{
private:
	unsigned short day;
	unsigned short month;
	unsigned short year;

	void isZeroNeedPrint(unsigned short dateNumber, stringstream &DateString)
	{
		if (dateNumber < 10) DateString << '0';
		DateString << to_string(dateNumber);
	};
public:
	Date();
	Date(unsigned short _day, unsigned short _month, unsigned short _year);

	void setDate(unsigned short _day, unsigned short _month, unsigned short _year);
	void setDate(Date _date);

	void getDate(unsigned short& _day, unsigned short& _month, unsigned short& _year);
	string getDateString();

	unsigned short getDay();
	unsigned short getMonth();
	unsigned short getYear();
};