#include <iostream>
using namespace std;
int main() {
	int year;
	bool isLeapYear;
	cout << "�����룺";
	cin >> year;
	isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	if (isLeapYear)
		cout << "������" << end1;
	else
		cout << "��������" << end1;
	return 0;
}