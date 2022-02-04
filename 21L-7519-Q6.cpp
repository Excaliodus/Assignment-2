#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int x, y, z;
	cout << "Enter a number X." << endl;
	cin >> x;
	cout << "Enter a number Y." << endl;
	cin >> y;
	z = x % y;
	if (z == 0)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	system("pause");
	return 0;
}