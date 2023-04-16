#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 2023;
}

Date::Date(unsigned short _day, unsigned short _month, unsigned short _year)
{
	setDate(_day, _month, _year);
}

Date::Date(const Date &p)
{
	this->day = p.day;
	this->month = p.month;
	this->year = p.year;
	//day++; month++; year++;
}
Date::~Date()
{

}
/*
void Date::setDate(unsigned short& _element, char type)
{
	if ((type == "d")) { _element = this->day; }
	else if ((type == "m")) { _element = this->month; }
	else if ((type == "y")) { _element = this->year; }
}
*/

void Date::setDate(unsigned short _day, unsigned short _month, unsigned short _year)
{
	this->day = _day;
	this->month = _month;
	this->year = _year;
}

void Date::setDate(Date _date)
{
	_date.getDate(this->day, this->month, this->year);
}

void Date::getDate(unsigned short& _day, unsigned short& _month, unsigned short& _year)
{
	_day = this->day;
	_month = this->month;
	_year = this->year;
}
/*
unsigned short Date::getDate(char type)
{
	if ((type == 'd')) { return this->day; }
	else if ((type == 'm')) { return this->month; }
	else if ((type == 'y')) { return this->year; }
}
*/
void Date::help()
{
	cout << "Date() | (unsigned short _day, unsigned short _month, unsigned short _year) | (const Date &p)" << endl;
	cout << "setDate() | (unsigned short& _element, string type) | (unsigned short _day, unsigned short _month, unsigned short _year) | (Date _date)" << endl;
	cout << "getDate(unsigned short& _day, unsigned short& _month, unsigned short& _year) | (unsigned short& _element, string type)" << endl;
}