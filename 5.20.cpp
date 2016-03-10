#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main()
{
    string word, word1;

    while (cin >> word)
    {
        if (word == word1)
            break;
        word1 = word;
    }
    if (cin.eof())
        cout << "\nThere are no word repeated" << endl;

    return 0;
}
