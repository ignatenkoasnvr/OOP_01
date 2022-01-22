#pragma once
#include "Date.h"
#include <cstring>
const int SIZE = 100;

class Lesson
{
private: // 
	Date date;
	char topic[SIZE];
	char group[SIZE];

public: // 
	Lesson(const char *topic, const char *group);
	Lesson(Date date, const char * topic, const char *group);

	Date getDate() { return date; }	
	void setDate(Date date) { this->date = date; }

	char *getTopic() { return topic; }	
	void setTopic(const char* topic) { strcpy_s(this->topic, SIZE, topic); }

	//char getGroup() { return group[]; }	
	//void setGroup(char group) { this->group[SIZE] = group; }

	void input();
	void print();

	~Lesson() {};
};