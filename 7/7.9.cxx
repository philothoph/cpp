#include <iostream>
#include "Person.h"

using std::cout; using std::endl;
using std::cin;

int main()
{
    Person man;

    read(cin, man);

    print(cout, man) << endl;

    return 0;
}
