#include <iostream>

using std::cout; using std::endl;
using std::cin;

int abs(int i)
{
    if (i >= 0)
        return i;
    else
        return -i;
}

int main ()
{
    int j;
    cout << "Enter the number: ";
    cin >> j;

    cout << "Absolute value of " << j << " is "
         << abs(j) << endl;

    return 0;
}
