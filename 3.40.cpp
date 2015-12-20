#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    const char firstArr[] = "Han Solo";
    const char secondArr[] = "Princess Leia";

    size_t thirdSize = strlen(firstArr) + strlen(secondArr) + 1;
    char thirdArr[thirdSize];

    strcpy (thirdArr, firstArr);
    strcat (thirdArr, secondArr);

    cout << thirdArr << endl;

    return 0;
}
