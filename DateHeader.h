#ifndef INCLUDE_DateHeader_H_
#define INCLUDE_DateHeader_H_
#endif
#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Date {
private:
	int y = 0, m = 0, d = 0;

public:
	Date();
	Date(int _d, int _m, int _y);
	Date(const char str[]);
	friend ostream& operator<<(ostream& stream, const Date& c); //���������� ������
	friend istream& operator>>(istream& stream, Date& c); //���������� �����
	Date operator+(int d);
	Date operator-(int d);
	bool operator==(const Date& c);
	Date& operator=(const Date& c);
	bool operator>(const Date& c);
	bool operator<(const Date& c);
	string stringdatemethod(const Date& c);
	int getDay();
	int getMonth();
	int getYear();
	~Date();
};
