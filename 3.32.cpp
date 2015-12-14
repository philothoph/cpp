#include <iostream>

int main ()
{
    int arrOfTenInts[10];
    int anotherArray[10];

    for (size_t i = 0; i != 10; ++i)
    {
        arrOfTenInts[i] = i + 1;
    }

    for (size_t j = 0; j != 10; ++j)
    {
        anotherArray[j] = arrOfTenInts[j];
    }

    return 0;
}
