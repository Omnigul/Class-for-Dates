#include "Date.h"
#include <iostream>
using namespace std;



Date::Date()
{
	setDate();
}

Date::Date(int m, int d, int y)
{
	setDate(m, d, y);
}

void Date::setDate()
{
	day = 1;
	month = 1;
	year = 1900;
}

void Date::setDate(int m, int d, int y)
{
	if (y > 1900)
	{
		year = y;
	}
	else
	{
		cout << "Error in setDate: year given is out of range." << endl;
			year = 1900;
	}
	if (0 < m < 13)
	{
		month = m;
	}
	else
	{
		cout << "Error in setDate: month out of range." << endl;
		month = 1;
	}
	if (0 < d < monthDays(m) + 1)
	{
		day = d;
	}
	else
	{
		cout << "Error in setDate: day out of range." << endl;
		day = 1;
	}
}

int Date::monthDays(int m)
{
	switch (m)
	{
	case 1:
		return 31;
	case 2:
		return 28;
	case 3:
		return 31;
	case 4:
		return 30;
	case 5:
		return 31;
	case 6:
		return 30;
	case 7:
		return 31;
	case 8:
		return 31;
	case 9:
		return 30;
	case 10:
		return 31;
	case 11:
		return 30;
	case 12:
		if (leapYear(year) == true)
		{
			return 31;
		}
		else
		{
			return 30;
		}
	}
}

bool Date::leapYear(int y)
{
	if (y % 100 == 0)
	{
		if (y % 400 == 0)
		{
			return true;
		}
	}
	else if (y % 4 == 0)
	{
		return true;
	}
}

int Date::monthDays()
{
	switch (month)
	{
	case 1:
		return 31;
	case 2:
		return 28;
	case 3:
		return 31;
	case 4:
		return 30;
	case 5:
		return 31;
	case 6:
		return 30;
	case 7:
		return 31;
	case 8:
		return 31;
	case 9:
		return 30;
	case 10:
		return 31;
	case 11:
		return 30;
	case 12:
		if (leapYear() == true)
		{
			return 31;
		}
		else
		{
			return 30;
		}
	}
}

bool Date::leapYear()
{
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		{
			return true;
		}
	}
	else if (year % 4 == 0)
	{
		return true;
	}
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

void Date::display(int num)
{
	switch (num)
	{
	case 1:
		cout << month << "/" << day << "/" << year << endl;
		break;
	case 2:
		cout << monthName(month) << " " << day << ", " << year << endl;
		break;
	case 3:
		cout << day << " " << monthName(month) << " " << year << endl;
		break;
	default:
		cout << "error in print: given format not in range" << endl;
	}
}

string Date::monthName(int m)
{
	switch (m)
	{
	case 1:
		return "January";
	case 2:
		return "Feburary";
	case 3:
		return "March";
	case 4:
		return "April";
	case 5:
		return "May";
	case 6:
		return "June";
	case 7:
		return "July";
	case 8:
		return "August";
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	}
}