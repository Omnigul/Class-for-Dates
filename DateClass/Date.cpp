#include "Date.h"
#include <iostream>
using namespace std;


//default contructor for class, assumes date is 1/1/1900
Date::Date()
{
	setDate();
}

//constructor that allows the date to be set to desired value
Date::Date(int m, int d, int y)
{
	setDate(m, d, y);
}

//sets date to 1/1/1900
void Date::setDate()
{
	setDate(1, 1, 1900);
}

// allows date to be set to desired value
void Date::setDate(int m, int d, int y)
{
	if (y > 1899)
	{
		year = y;
	}
	else
	{
		cout << "Error in setDate: year given is out of range." << endl;
			year = 1900;
	}
	if (0 < m && m < 13)
	{
		month = m;
	}
	else
	{
		cout << "Error in setDate: month out of range." << endl;
		month = 1;
	}
	if (0 < d && d < monthDays(m)+1)
	{
		day = d;
	}
	else
	{
		cout << "Error in setDate: day out of range." << endl;
		day = 1;
	}
}

//checks to see how many days are in a given month
int Date::monthDays(int m,int y)
{
	switch (m)
	{
	case 1:
		return 31;
	case 2:
	{
		if(leapYear(y)== true)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
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
		return 31;
	}
}

// checks if the given year is a leap year or not
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

//checks to see how many days are in the month, uses the current month stored in the class
int Date::monthDays()
{
	return monthDays(month, year);
}

// checks to see if year stored in the class is a leap year or not
bool Date::leapYear()
{
	return leapYear(year);
}

//returns the day stored in the class
int Date::getDay()
{
	return day;
}

//returns the month stored in the class
int Date::getMonth()
{
	return month;
}

// returns the year stored in the class
int Date::getYear()
{
	return year;
}

//displays the date. three diffrent layouts depending on the input number
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

// returns the name of the month
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