#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::cin; using std::string;

int main()
{
    unsigned cnt = 1, maxCnt = 0;    //if repetition is met, there are 2 words already
    string line, line1, maxWord = "ffff";

    while (getline(cin, line, ' '))  //char space is intentional
    {
        if (line == line1)
            ++cnt;
        if (cnt > maxCnt)
        {
            maxWord = line1;
            maxCnt = cnt;
            cnt = 1;
        }
        line1 = line;
    }

    if (maxCnt > 1)
        cout << maxWord << " occured "
             << maxCnt << " times."
             << endl;
    else
        cout << "No word was repeated."
             << endl;

    return 0;
}
