#include "Lesson.h"
#include <iostream>
#include <iomanip>
using namespace std;
Lesson::Lesson(Date date, const char topic[], const char group[])
{
	this->date = date;
	strcpy_s (this->topic, SIZE, topic);
	strcpy_s (this->group, SIZE, group);
}
//Lesson::Lesson(char topic[], char group[])
//{
//	//this->date = zero;
//	this->topic[] = topic[];
//	this->group[] = group[];
//}
//void Lesson::input()
//{
//	cout << "Enter date: ";
//	date.input;
//
//	cout << "Enter topic: ";
//	cin >> topic;
//
//	cout << "Enter group: ";
//	cin >> group;
//}
void Lesson::print()
{
	cout << "Date: ";
	date.print();
	cout << endl;
	cout << "Topic: " << topic << endl
		  << "Group: " << group << endl;
}