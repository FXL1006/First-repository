#include <iostream>
using namespace std;
int main() {
	int year;
	bool isLeapYear;
	cout << "请输入：";
	cin >> year;
	isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	if (isLeapYear)
		cout << "是闰年" << end1;
	else
		cout << "不是润年" << end1;
	return 0;
}