#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	char opt;
	cout << "Enter a character." << endl;
	cin >> opt;
	if ((opt >= 'a' && opt <= 'z') || (opt >= 'A' && opt <= 'Z'))
	{
		switch (opt == 'a' || opt == 'A' || opt == 'e' || opt == 'E' || opt == 'i' || opt == 'I' || opt == 'o' || opt == 'O' || opt == 'u' || opt == 'U')
		{
		case 1:
		{
			cout << "Character entered is a vowel." << endl;
			break;
		}
		case 0:
		{
			cout << "Character entered is a consonant." << endl;
			break;
		}
		}
	}
	else
	{
		cout << "Invalid input." << endl;
	}
	system("pause");
	return 0;
}