#include <iostream>

using std::cout; using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int j = 3;

    reset(j);

    cout << j << endl;

    return 0;
}
