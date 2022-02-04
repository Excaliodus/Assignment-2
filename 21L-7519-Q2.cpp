#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int first = 1, last = 100, guess = 0, found = 0, searchfailed = 0;
    char choice;
    cout << "Think about a number between 1 and 100" << endl;
    while (found == 0 && searchfailed == 0)
    {
        guess = (first + last) / 2;
        cout << "Is your number less than, equal to or greater than " << guess << endl;
        cout << "If number is greater, then enter 'g'. If number is less, then enter 'l'. If number is equal, then enter 'e'." << endl;
        cin >> choice;
        if (choice == 'e' || choice == 'E')
        {
            found = 1;
        }
        else if (first>=last)
        {
            searchfailed = 1;
        }
        else if (choice == 'l' || choice == 'L')
        {
            last = guess - 1;
        }
        else if (choice == 'g' || choice == 'G')
        {
            first = guess + 1;
        }
    }
    if (found == 1)
    {
        cout << "Is your number " << guess << "?" << endl;
    }
    else
    {
        cout << "Number was out of given range." << endl;
    }
    system("pause");
    return 0;
}