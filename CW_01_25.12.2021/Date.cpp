#include "Date.h"
#include <iostream>
#include <iomanip>
using namespace std;

Date::Date (int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

void Date::input()
{
	cout << "Enter year: ";
	cin >> year;

	cout << "Enter month: ";
	cin >> month;

	cout << "Enter day: ";
	cin >> day;
}

void Date::print()
{
	cout << setfill('0') << setw(4) << year << '-'
		  << setw(2) << month << '-'
		  << setw(2) << day;

}