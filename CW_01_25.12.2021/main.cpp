#include <iostream>
#include "Date.h"
#include "Lesson.h"
using namespace std;

int main()
{
	Date zero;
	Date today    { 2021, 12, 30 };
	Date tomorroy { 2021, 12, 31 };
	Date yestoday = { 2021, 12, 29 };
	Date onlyYear = { 2022 };
	//today.init(2021, 12, 25);

	//today.input();
	//today.print();
	//cout << endl;

	tomorroy.input();
	tomorroy.print();
	cout << endl;

	//today.setYear(2022);
	//zero.print();
	//cout << endl;
	//onlyYear.print();
	//cout << endl;	
	//Date(2020, 12, 31).print();

	Lesson cpp(today, "OOP", "SBD123");
	cpp.print();
	cout << endl;

	Lesson windows(tomorroy, "Printers", "SBD123");
	windows.print();
	cout << endl;

	return 0;
}