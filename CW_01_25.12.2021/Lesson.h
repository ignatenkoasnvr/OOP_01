#pragma once
#include "Date.h"


class Lesson
{
private: // 
	Date date;
	char topic;
	char group;

public: // 
	//Lesson();
	Lesson(Date date, char topic, char group);

	Date getDate() { return date; }	
	void setDate(Date date) { this->date = date; }

	char getTopic() { return topic; }	
	void setTopic(char topic) { this->topic = topic; }

	char getGroup() { return group; }	
	void setGroup(char group) { this->group = group; }

	void input();
	void print();

	~Lesson() {};
};