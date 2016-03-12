#include <iostream>

using std::cout; using std::endl;
using std::cin;

unsigned fact (unsigned val)
{
    if (val > 1)
        return fact(val - 1) * val;
    else
        return 1;
}

int main ()
{
    unsigned iu;

    cout << "Enter number: ";
    cin >> iu;

    cout << iu << "! is "
         << fact(iu)
         << endl;

    return 0;
}
