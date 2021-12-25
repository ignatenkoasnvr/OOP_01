#pragma once
class Date
{
private: // личное
	int year;
	int month;
	int day;

public: // публичное
	void init(int year, int month, int day);

	void input();
	void print();


};

