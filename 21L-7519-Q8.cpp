#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	float num[10], total = 0, avg = 0;
	int BelowCount = 0, AboveCount = 0, AvgCount = 0;
	for (int i = 0; i < 10; i += 1)
	{
		cout << "Enter a number." << endl;
		cin >> num[i];
		total = total + num[i];
	}
	avg = total / 10;
	for (int i = 0; i < 10; i += 1)
	{
		if (num[i] == avg)
		{
			AvgCount = AvgCount + 1;
		}
		else if (num[i] > avg)
		{
			AboveCount = AboveCount + 1;
		}
		else if (num[i]<avg)
		{
			BelowCount = BelowCount + 1;
		}
	}
	cout << "The average of the entered numbers is " << avg << endl;
	cout << "The amount of numbers above average are " << AboveCount << endl;
	cout << "The amount of numbers below average are " << BelowCount << endl;
	cout << "The amount of numbers average are " << AvgCount << endl;
	system("pause");
	return 0;
}