#include <iostream>

using std::cin; using std::cout;
using std::endl;

int main ()
{
    unsigned aCnt = 0, eCnt = 0, oCnt = 0, iCnt = 0, uCnt = 0, notCnt = 0;

    char ch = 0;
    while (cin >> ch)
        if (ch == 'a' || ch == 'A')
            ++aCnt;
        else if (ch == 'e' || ch == 'E')
            ++eCnt;
        else if (ch == 'o' || ch == 'O')
            ++oCnt;
        else if (ch == 'i' || ch == 'I')
            ++iCnt;
        else if (ch == 'u' || ch == 'U')
            ++uCnt;
        else
            ++notCnt;

    cout << "a:\t" << aCnt << '\n'
         << "o:\t" << oCnt << '\n'
         << "e:\t" << eCnt << '\n'
         << "i:\t" << iCnt << '\n'
         << "u:\t" << uCnt << '\n'
         << "not vowels:\t" << notCnt << '\n'
         << endl;

    return 0;
}
