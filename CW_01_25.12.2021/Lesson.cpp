#include "Lesson.h"
#include <iostream>
#include <iomanip>
using namespace std;
Lesson::Lesson(Date date, char topic, char group)
{
	this->date = date;
	this->topic = topic;
	this->group = group;
}
void Lesson::input()
{
	cout << "Enter date: ";
	date.input;

	cout << "Enter topic: ";
	cin >> topic;

	cout << "Enter group: ";
	cin >> group;
}
void Lesson::print()
{
	cout << "Date: " << endl;
	date.print();
	cout << "Topic: " << topic << endl
		  << "Group: " << group << endl;
}