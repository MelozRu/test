#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <clocale>
#include "DateHeader.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	char n[10];
	cout << "�������� ������ ������: ";
	Date c1("10.12:1967");
	cout << c1.stringdatemethod(c1) << endl;

	cout << "������ ���-�� ����, ������� ������ ������� �� 10.12:1967" << endl;
	int k;
	cin >> k;
	Date c3("10.12:1967");
	c3 = c3 - k;
	cout << c3.stringdatemethod(c3) << endl;

	cout << "������� ���� � ������� DD.MM:YYYY" << endl;
	cin >> n;
	Date c4(n);
	cout << "���� ����" << endl;
	cout << c4.stringdatemethod(c4) << endl;


	cout << "������ ���-�� ����, ������� ������ ������� �� 10.12:1967" << endl;
	cin >> k;
	Date c5("10.12:1967");
	c5 = c5 + k;
	cout << c5.stringdatemethod(c5) << endl;

	cout << "��������� ��� 10.12:1967 � 25.5:1667" << endl;
	Date c6("10.12:1967");
	Date c7("5.25:1667");
	if (c6 == c7) {
		cout << "���� �����" << endl;
	}
	else
		cout << "���� �������" << endl;

	cout << "���� ��������� ������������" << endl;
	cout << "������� ���� � ������� DD.MM:YYYY";
	cin >> n;
	Date c8(n);
	Date c9;
	c9 = c8;
	cout << c9.stringdatemethod(c9) << endl;




	return 0;
}