#include <iostream>

using std::cin; using std::cout;
using std::endl;

int main ()
{
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;

    char ch, ch1 = '\0';

    while (cin >> ch)
    {
        if (ch == 'f' && ch1 == 'f')
            ++ffCnt;
        else if (ch == 'f' && ch1 == 'l')
            ++flCnt;
        else if (ch == 'f' && ch1 == 'i')
            ++fiCnt;
        ch1 = ch;
    }

    cout << "ff:\t" << ffCnt << '\n'
         << "fl:\t" << flCnt << '\n'
         << "fi:\t" << fiCnt << '\n'
         << endl;

    return 0;
}
