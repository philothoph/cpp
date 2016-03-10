#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main()
{
    string rsp;
    do
    {
        string str1, str2;
        cin >> str1 >> str2;
        if (str1 == str2)
            cout << str1 << " is equal to " << str2 << endl;
        else
            cout << (str1 < str2 ? str2 : str1) << "is greater than another\n" << endl;
        cout << "Do you want more? Yes or no: ";
        cin >> rsp;
    }
    while (!rsp.empty() && rsp[0] != 'n');

    return 0;
}
