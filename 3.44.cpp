#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

using int_array = int[4];

int main()
{
    int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
    };

    /*Range for loop*/
    for (int_array &r : ia)
        for (int q : r)
            cout << q << ' ';
    cout << endl;

    /*For loop with subscript*/
    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << ' ';
    cout << endl;

    /*For loop with pointers*/
    for (int_array *p = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
    cout << endl;

    return 0;
}
