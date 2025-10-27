/*
keeps track of and modifies the date
*/


#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	Date();
	Date(int month, int day, int year);
	void setDate();
	void setDate(int m, int d, int y);
	int getDay();
	int getMonth();
	int getYear();
	void display(int num);

private:
	int day;
	int month;
	int year;
	int monthDays(int m, int y);
	int monthDays();
	bool leapYear(int y);
	bool leapYear();
	string monthName(int m);
};

