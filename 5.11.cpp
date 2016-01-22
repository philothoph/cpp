#include <iostream>

using std::cin; using std::cout;
using std::endl; using std::string;

int main ()
{
    unsigned aCnt = 0, eCnt = 0, oCnt = 0, iCnt = 0;
    unsigned uCnt = 0, spaceCnt = 0;

    string line;
    while (getline(cin, line))
    {   for (auto ch : line)
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
            else if (isspace(ch))               //counts space, tab
                ++spaceCnt;
        ++spaceCnt;                             //counts newline
    }

    cout << "a:\t" << aCnt << '\n'
         << "o:\t" << oCnt << '\n'
         << "e:\t" << eCnt << '\n'
         << "i:\t" << iCnt << '\n'
         << "u:\t" << uCnt << '\n'
         << "space:\t" << spaceCnt << '\n'
         << endl;

    return 0;
}
