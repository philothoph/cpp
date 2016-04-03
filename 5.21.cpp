#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main()
{
    string word, word1;

    while (cin >> word)
    {
        if (word == word1 && isupper(word[0]))
            break;
        word1 = word;
    }
    if (cin.eof())
        cout << "\nThere is no word repeated" << endl;

    return 0;
}
