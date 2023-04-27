#pragma once
using namespace std;

class Date
{
private:
	unsigned short day;
	unsigned short month;
	unsigned short year;
public:
	Date();
	Date(unsigned short _day, unsigned short _month, unsigned short _year);

	void setDate(unsigned short _day, unsigned short _month, unsigned short _year);
	void setDate(Date _date);

	void getDate(unsigned short& _day, unsigned short& _month, unsigned short& _year);

	unsigned short getDay();
	unsigned short getMonth();
	unsigned short getYear();
};