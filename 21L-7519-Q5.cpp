#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int num;
	cout << "Please enter an integer." << endl;
	cin >> num;
	if (num == 0)
	{
		cout << "Number entered is 0." << endl;
	}
	else if (num > 0)
	{
		if (num % 2 == 0)
		{
			cout << "Number entered is a positive even number." << endl;
		}
		else if (num % 2 == 1)
		{
			cout << "Number entered is a positive odd number." << endl;
		}
	}
	else
	{
		if (num % 2 == 0)
		{
			cout << "Number entered is a negative even number." << endl;
		}
		else
		{
			cout << "Number entered is a negative odd number." << endl;
		}
	}
	system("pause");
	return 0;
}