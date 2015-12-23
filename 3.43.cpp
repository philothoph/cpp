#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

int main()
{
    const size_t rowNum = 4, colNum = 5;
    int ia[rowNum][colNum];

    /*for loop with subsripts*/
    //input
    for (size_t row = 0; row != rowNum; ++row)
        for (size_t col = 0; col != colNum; ++col)
            ia[row][col] = row * colNum + col;
    //output
    for (size_t row = 0; row != rowNum; ++row)
    {
        for (size_t col = 0; col != colNum; ++col)
            cout << ia[row][col] << ' ';
        cout << endl;
    }
    cout << endl;


    /*for loop with pointers*/
    //input
    int cnt = 0;
    for (int (*p)[colNum] = ia; p != ia + rowNum; ++p)
        for (int *q = *p; q != *p + colNum; ++q)
        {
            *q = cnt;
            ++cnt;
        }
    //output
    for (int (*p)[colNum] = ia; p != ia + rowNum; ++p)
    {
        for (int *q = *p; q != *p +colNum; ++q)
            cout << *q << ' ';
        cout << endl;
    }
    cout << endl;


    /*Range for loop*/
    //input
    cnt = 0;
    for (int (&p)[colNum] : ia)
        for (int &q : p)
        {
            q = cnt;
            ++cnt;
        }
    //output
    for (int (&r)[colNum] : ia)
    {
        for (int q : r)
            cout << q << ' ';
        cout << endl;
    }

    return 0;
}
