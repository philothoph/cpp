#include <iostream>

using namespace std;

int main()
{
    unsigned first, second;

    cout << "\nEnter two numbers:" << endl;
    cin >> first >> second;

    if (second == 0)
        throw runtime_error("Dividing by ZERO is impossible!");

    cout << first / second << endl;

    return 0;
}
