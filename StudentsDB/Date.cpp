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

Date::~Date()
{

}

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