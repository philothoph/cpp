#include <iostream>

using std::cout; using std::endl;

void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

int main()
{
    int y = 43, sd = 2;

    swap(y, sd);
    cout << "y = " << y
         << "\nsd = " << sd
         << endl;

    return 0;
}
