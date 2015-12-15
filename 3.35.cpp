#include <iostream>
#include <iterator>

int main()
{
    size_t sz = 42;
    int arr[sz];

    int *p = arr;
    int *pend = arr + sz;

    for (/* */; p != pend; ++p)
        *p = 0;

    return 0;

}
