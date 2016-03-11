#include <iostream>
#include <exception>

using namespace std;

int main()
{
    unsigned first, second;

    cout << "\nEnter a first number: ";
    cin >> first;

    cout << "\nEnter a second number: ";
    while (cin >> second)
    try
    {
        if (second == 0)
            throw runtime_error("\nYou can't divide by ZERO!");
        cout << "\nResult of division is: " << first / second << endl;
        break;

    }
    catch (runtime_error err)
    {
        cout << err.what()
             << "\nEnter a second number again: ";
    }

    return 0;
}
