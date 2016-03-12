#include <iostream>

using namespace std;

int main()
{
    unsigned first, second;

    cout << "\nEnter a first number: ";
    cin >> first;

    cout << "\nEnter a second number: ";
    while (cin >> second)
    {
        if (second == 0)
        {
            cout << "\nYou can't divide by ZERO!"
                 << "\nEnter second number again: ";
            continue;

        }
        cout << "\nResult of division is: " << first / second << endl;
        break;

    }

    return 0;
}
