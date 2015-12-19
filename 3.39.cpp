#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

int main ()
{
    string oneString("arbuz"), twoString("baklazhan");
    char oneCString[5] = {'b', 'r', 'r', 'o', '\0'}, twoCString[5] = {'g', 'r', 'u', 't', '\0'};

    //Compare library strings
    if (oneString == twoString)
        cout << "Strings are equal" << endl;
    else if (oneString > twoString)
        cout << "First string is bigger than second one" << endl;
    else
        cout << "First string is smaller than second one" << endl;

    //Compare C-style character string
    if (strcmp(oneCString, twoCString) == 0)
        cout << "C-style character strings are equal" << endl;
    else if (strcmp(oneCString, twoCString) > 0)
        cout << "First C-style character string is bigger than second one" << endl;
    else
        cout << "First C-style character string is smaller than second one" << endl;

    return 0;
}
