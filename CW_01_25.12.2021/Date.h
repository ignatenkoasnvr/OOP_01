#pragma once
class Date
{
private: // личное
	int year;
	int month;
	int day;

public: // публичное
	void init(int year, int month, int day);

	int getYear() { return year; }	// get-метод
	void setYear(int year){this->year = year;}

	int getMonth() { return month; }	// get-метод
	void setMonth(int month){this->month = month;}

	int getDay() { return day; }	// get-метод
	void setDay(int day){this->day = day;}

	void input();
	void print();


};

