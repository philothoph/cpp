#include <iostream>
//#include "Chapter6.h"

using std::cout; using std::endl;
using std::cin;

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
