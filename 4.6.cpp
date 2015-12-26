#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int odd_even = 0;

    cin >> odd_even;

    if (odd_even % 2)
        cout << "int is odd" << endl;
    else
        cout << "int is even" << endl;

    return 0;
}
