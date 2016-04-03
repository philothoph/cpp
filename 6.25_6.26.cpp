// Exercise 6.25: Write a main function that takes two arguments.
// Concatenate the supplied arguments and print the resulting string.

#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main(int args, char *arg[])
{
    string str;

    //6.25
    for (size_t i = 1; i != args; ++i)
        str += arg[i];
    cout << str << endl;

    //6.26
    for (size_t i = 1; i != args; ++i)
        cout << arg[i] << endl;

    return 0;
}
