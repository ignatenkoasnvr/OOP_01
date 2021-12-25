#include "Date.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Date::input()
{
	cout << "Enter year";
	cin >> year;

	cout << "Enter month";
	cin >> month;

	cout << "Enter day";
	cin >> day;
}

void Date::print()
{
	cout << setfill('0') << setw(4) << year << '-'
		  << setw(2) << month
		  << setw(2) << day;

}