#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date zero;
	Date today(2021,12,25);
	Date tomorroy { 2021, 12, 26 };
	Date yestoday = { 2021, 12, 24 };
	Date onlyYear = { 2022 };
	//today.init(2021, 12, 25);

	//today.input();
	today.print();
	cout << endl;

	today.setYear(2022);
	zero.print();
	cout << endl;
	onlyYear.print();
	cout << endl;	

	Date(2020, 12, 31).print();

	return 0;
}