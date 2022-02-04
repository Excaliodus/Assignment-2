#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	float age;
	cout << "Enter the age of the person" << endl;
	cin >> age;
	if (age >= 0 && age <= 1)
	{
		cout << "Age entered is of a baby." << endl;
	}
	else if (age > 1 && age <= 2)
	{
		cout << "Age entered is of a toddler." << endl;
	}
	else if (age > 2 && age <= 13)
	{
		cout << "Age entered is of a child." << endl;
	}
	else if (age > 13 && age <= 19)
	{
		cout << "Age entered is of a teenager." << endl;
	}
	else if (age > 19 && age <= 50)
	{
		cout << "Age entered is of an adult." << endl;
	}
	else if (age < 0)
	{
		cout << "Invalid input." << endl;
	}
	else
	{
		cout << "Age entered is of an old codger." << endl;
	}
	system("pause");
	return 0;
}