#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    char firstArr[] = "Han Solo";
    char secondArr[] = "Princess Leia";
    char thirdArr[strlen(strcat(firstArr, secondArr))];
    strcpy (thirdArr, strcat(firstArr, secondArr));

    for (auto c : thirdArr)
        cout << c;
    cout << endl;

    return 0;
}
