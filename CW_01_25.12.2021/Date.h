#pragma once
class Date
{
private: // ������
	int year;
	int month;
	int day;

public: // ���������
	void init(int year, int month, int day);

	int getYear() { return year; }	// get-�����
	void setYear(int year){this->year = year;}

	int getMonth() { return month; }	// get-�����
	void setMonth(int month){this->month = month;}

	int getDay() { return day; }	// get-�����
	void setDay(int day){this->day = day;}

	void input();
	void print();


};

