#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date today;
	today.init(2021, 12, 25);

	//today.input();
	today.print();

	today.setYear(2022);
	today.print();

	return 0;
}