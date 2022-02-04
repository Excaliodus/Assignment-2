#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	float weight, calories;
	char opt;
	cout << "Please enter your weight." << endl;
	cin >> weight;
	if (weight < 0)
	{
		cout << "Weight cannot be negative." << endl;
	}
	else
	{
		cout << "What type of lifestyle do you follow?\nFor active lifestyle, enter 'A'.\nFor inactive lifestyle, enter 'S'. " << endl;
		cin >> opt;
		if (opt == 'A' || opt == 'a')
		{
			calories = 15 * weight;
		}
		else if (opt == 's' || opt == 'S')
		{
			calories = 13 * weight;
		}
		else
		{
			cout << "Invalid input." << endl;
		}
		cout << "Your daily caloric intake should be " << calories << " calories." << endl;
	}
	system("pause");
	return 0;
}