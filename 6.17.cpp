#include <iostream>
#include <string>
#include <cctype>

using std::cout; using std::endl;
using std::string;

bool isCapital(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;
    return false;
}

void toLowercase(string &s)
{
    for (auto &c : s)
        c = tolower(c);
}

int main()
{
    string str = "BAAAaazingaaa!!!!";
    if (isCapital(str))
    {
        cout << "There are capital letters" << endl;
        toLowercase(str);
        cout << str << endl;
    }
    else
        cout << "There is no capital character" << endl;



    return 0;
}
