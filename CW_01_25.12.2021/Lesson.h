#pragma once
#include "Date.h"
#define SIZE 100;

class Lesson
{
private: // 
	Date date;
	char topic[SIZE];
	char group[SIZE];

public: // 
	Lesson(char topic[], char group[]);
	Lesson(Date date, char topic[], char group[]);

	Date getDate() { return date; }	
	void setDate(Date date) { this->date = date; }

	//char getTopic() { return topic[]; }	
	//void setTopic(char topic) { this->topic[] = topic[]; }

	//char getGroup() { return group[]; }	
	//void setGroup(char group) { this->group[SIZE] = group; }

	void input();
	void print();

	~Lesson() {};
};