#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int age, accidents, total=500;
	cout << "Please enter drivers age." << endl;
	cin >> age;
	cout << "Please enter the number of accidents the driver has had." << endl;
	cin >> accidents;
	if (accidents == 1)
	{
		total = total + 50;
	}
	else if (accidents == 2)
	{
		total = total + 125;
	}
	else if (accidents == 3)
	{
		total = total + 225;
	}
	else if (accidents == 4)
	{
		total = total + 375;
	}
	else if (accidents == 5)
	{
		total = total + 575;
	}
	else if (accidents >= 6)
	{
		cout << "No insurance." << endl;
	}
	if (age < 25 && accidents<6)
	{
		total = total + 100;
	}
	if (accidents < 6)
	{
		cout << "Insurance cost is " << total << endl;
	}
	system("pause");
	return 0;
}