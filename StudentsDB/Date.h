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
	Date(const Date& p);
	~Date();

	void setDate(unsigned short _day, unsigned short _month, unsigned short _year);
	void setDate(Date _date);
	//void setDate(unsigned short& _element, char type);

	void getDate(unsigned short& _day, unsigned short& _month, unsigned short& _year);
	//unsigned short getDate(char type);

	void help();
};