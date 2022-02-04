#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int day, month, year;
	cout << "Please enter the day." << endl;
	cin >> day;
	cout << "Please enter the month number." << endl;
	cin >> month;
	cout << "Please enter the year," << endl;
	cin >> year;
	if ((day > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) || (day > 28 && month == 2 && year % 4 > 0) || (day > 29 && month == 2 && year % 4 == 0) || (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)))
	{
		cout << "Invalid input." << endl;
	}
	else
	{
		if (day == 28 && month == 2 && year % 4 > 0)
		{
			day = 1;
			month = month + 1;
		}
		else if (day == 29 && month == 2 && year % 4 == 0)
		{
			day = 1;
			month = month + 1;
		}
		else if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11))
		{
			day = 1;
			month = month + 1;
		}
		else if (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10))
		{
			day = 1;
			month = month + 1;
		}
		else if (day == 31 && month == 12)
		{
			day = 1;
			month = 1;
			year = year + 1;
		}
		else if (day < 31)
		{
			day = day + 1;
		}
		cout << day << "/" << month << "/" << year << endl;
	}
	system("pause");
	return 0;
}